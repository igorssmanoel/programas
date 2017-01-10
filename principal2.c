#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define TAM_MAX 50     //Define o tamanho maximo do vetor
#define MAIOR_VALOR 4096  //Maior valor gerado aleatoriamente
#define TESTES 50  //Quantidade de casos testes

//Declaracao de variaveis globais e funcoes
int comp_bin = 0; 	//Variavel global para contar a quantidade de comparacoes da pesquisa binaria
int comp_seq = 0; 	//Variavel global para contar a quantidade de comparacoes da pesquisa sequencial
int Random();	//retorna um inteiro entre  0-MAIOR_VALOR
void PreencheVetor(int * ,int );  //Funcao que preenche um vetor com inteiros aleatorios
void QuickSort(int *, int , int );  //Funcao que ordena  um vetor
void ExibeVetor(int *,int );  //Funcao que exibe o vetor
int PesquisaBinaria ( int *, int , int );  //Pesquisa um elemento e retorna a posicao ou -1 se nao encontrar
int PesquisaSequencial(int *, int , int ); //Pesquisa um elemento e retorna a posicao ou -1 se nao encontrar

int main(){
	//Declaracao  de variaveis
	int aux;
	int vetor[TAM_MAX]; //Vetor principal
	int vetor_aux[TAM_MAX]; //Vetor auxiliar
	int vetor_melhorcaso_bin[TAM_MAX];  //Vetor que  armazena o melhor caso  da pesquisa binaria
	int vetor_piorcaso_bin[TAM_MAX];  //Vetor que armzena o pior caso da pesquisa binaria
	int vetor_melhorcaso_seq[TAM_MAX];  //Vetor que armazena o melhor caso da pesquisa sequencial
	int vetor_piorcaso_seq[TAM_MAX];  //Vetor que armazena o pior caso da pesquisa sequencial
	int op;
	int i;
	int valor;
	int menor,maior;
	time_t t;
	int aux_seq,aux_bin,menor_bin=9999,menor_seq = 9999,maior_bin = -9999,maior_seq = -9999;
	
	srand((unsigned)time(&t));
	printf("1-Entrada manual\n2-Entrada aleatoria\n3-Sair\n");
	scanf("%d",&op);
	if (op == 1){  //Define se a entrada vai ser via teclado 
		printf("Digite os %d valores\n",TAM_MAX);
		for (i=0;i<TAM_MAX;i++){
			printf("vetor [%-*d] = ",2,i);
			scanf("%d",&aux);
			vetor_aux[i] = aux;
		}
	}else{
		if (op == 2){  //Define se a entrava vai ser gerada aleatoriamente
			printf("Entrada gerada aleatoriamente\n");
			PreencheVetor(vetor_aux,TAM_MAX);
		}else{
			return 0;
		}
	}
	PreencheVetor(vetor,TAM_MAX);	
	for (i=0;i<TESTES;i++){
		aux_seq = comp_seq;
		aux_bin = comp_bin;
		valor = vetor_aux[i];
		if ((aux=(PesquisaSequencial(vetor,TAM_MAX,valor))) > -1){
			printf("Valor %*d encontrado na posicao %d\n",3,valor,aux);
		}
		if ((comp_seq - aux_seq) < menor_seq){
			memcpy(vetor_melhorcaso_seq,vetor,sizeof(vetor));
			menor_seq = comp_seq-aux_seq;
			menor = valor;
		}
		if ((comp_seq - aux_seq) > maior_seq){
			memcpy(vetor_piorcaso_seq,vetor,sizeof(vetor));
			maior_seq = comp_seq-aux_seq;
			maior = valor;			
		}
		QuickSort(vetor,0,TAM_MAX);
		if ((aux=(PesquisaBinaria(vetor,TAM_MAX,valor))) > -1){
			printf("Valor %*d encontrado na posicao %d\n",3,valor,aux);
		}
		if ((comp_bin - aux_bin) < menor_bin){
			memcpy(vetor_melhorcaso_bin,vetor,sizeof(vetor));
			menor_bin = comp_bin - aux_bin;
			menor = valor;
		}
		if ((comp_bin - aux_bin) > maior_bin){
			memcpy(vetor_piorcaso_bin,vetor,sizeof(vetor));
			maior_bin = comp_bin-aux_seq;
			maior = valor;
		}
		PreencheVetor(vetor,TAM_MAX);
	}
	printf("\nMelhor caso pesquisa binaria \n");
	printf("Valor %d no vetor \n",menor);
	ExibeVetor(vetor_melhorcaso_bin,TAM_MAX);
	printf("Melhor caso pesquisa sequencial \n");
	printf("Valor %d no vetor \n",menor);
	ExibeVetor(vetor_melhorcaso_seq,TAM_MAX);
	printf("Pior caso pesquisa binaria\n");
	printf("Valor %d no vetor \n",maior);
	ExibeVetor(vetor_piorcaso_bin,TAM_MAX);
	printf("Pior caso pesquisa sequencial \n");
	printf("Valor %d no vetor \n",maior);
	ExibeVetor(vetor_piorcaso_seq,TAM_MAX);
	printf("\nPesquisa sequencial tem a media de  %.2f comparacoes\nPesquisa binaria tem a media de %.2f comparacoes\n\n",(double)(comp_seq/TAM_MAX),(double)(comp_bin/TAM_MAX));

	return 0;
}



int Random(){
    return ((rand() % MAIOR_VALOR)+1);
}
void PreencheVetor(int *vet, int tam){	
    int i;
    for(i=0;i<tam;i++){
        vet[i] =(int)Random();
    }
}
void QuickSort(int *vet, int esq, int dir){ 
    int pivo = esq, i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
        while(j > pivo){
            vet[j] = vet[j-1];
            j--;
         }
         vet[j] = ch;
         pivo++;
        }
    }
    if(pivo-1 >= esq){
        QuickSort(vet,esq,pivo-1);
    }
    if(pivo+1 <= dir){
        QuickSort(vet,pivo+1,dir);
    }
}

void ExibeVetor(int *vet,int tam){ 
    int i;
    printf("-----------------------------------------\n");
    for (i=0;i<tam;i++){
        printf("vet[%*d] = %-*d\n",3,i,3,vet[i]);
    }
    printf("-----------------------------------------\n");
}
int PesquisaBinaria ( int *vet, int tam, int valor){
	int inf = 0;
	int sup = tam-1; 
	int meio;
	while (inf <= sup){
	  	meio = (inf + sup)/2;
	  	comp_bin+=1;
	  	if (valor == vet[meio])
	       return meio;
	   	comp_bin+=1;
  		if (valor < vet[meio])
	       sup = meio-1;
	  	else
	       inf = meio+1;
	}
	printf("Valor nao encontrado\n");
 	return -1;
}

int PesquisaSequencial(int *vet, int tam, int valor) {
	int i;
	for (i = 0; i < tam; i++){
		comp_seq+=1;
	    if (vet[i] == valor){
	        return i;
	    }

	}
	printf("Valor nao encontrado\n");
	return -1;
}