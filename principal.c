#include <stdio.h>
#include <stdlib.h>
#include <time.h>  //Utilizado para gerar valores aleatorios
#include <string.h>  //Utilizado para copia de vetores
#define MAIOR_VALOR 4096  //Define o maior valor gerado aleatoriamente
#define TAM_MAX 1024  //Define o tamanho maximo do vetor
#define TAM_BALDE TAM_MAX  //Define o tamanho maximo de um balde da estrutura Balde
#define NUM_BALDE MAIOR_VALOR/TAM_MAX  //Define o numero de baldes
#define testes 100 //Define a quantidade de testes a serem realizados

//Declaracao de variaveis globais e funcoes
double comp_select=0; //Variavel global que conta as comparacoes dentro da funcao select sort
double perm_select=0; //Variavel global que conta as permutacoes dentro da funcao select sort
double comp_quick=0;  //Variavel global que conta as comparacoes dentro da funcao quick sort
double perm_quick=0;  //Variavel global que conta as permutacoes dentro da funcao quick sort
double comp_bucket=0;  //Variavel global que conta as comparacoes dentro da funcao bucket sort
double perm_bucket=0;  //Variavel global que conta as permutacoes dentro da funcao bucket sort

typedef struct { //Estrutura que define uma lista
    int topo;
    int vetor[TAM_BALDE];
}Balde;

int Random(); //Estrutura que gera um inteiro aleatorio entre 0 e MAIOR_VALOR
void SelectSort(int *); //Funcao que ordena um vetor utilizando selection sort
void QuickSort(int *, int, int); //Funcao que ordena um vetor utilizando quick sort
void insertionSort(int *, int);  //Funcao que ordena um vetor utilizando insertion sort
void BucketSort(int *);  //Funcao que ordena um vetor utilizando bucket sort
void PreencheVetor(int *vet, int tam);  //Funcao que preenche um vetor com inteiros aleatorios
void ExibeVetor(int *vet,int tam);  //Funcao que exibe um vetor



int main(){
	//Declaracao de variaveis
    time_t t;
    int i,op;
    int vetor[TAM_MAX];  //Vetor  principal
    int vetor_aux[TAM_MAX]; //Vetor auxiliar 
    
    int vetor_melhor_caso_quick[TAM_MAX],vetor_pior_caso_quick[TAM_MAX]; //Vetor que guarda o melhor caso do quick sort/ Vetor que guarda o pior caso do quick sort
    int melhor_caso_quick=999999,pior_caso_quick=-1,aux_perm_quick,aux_comp_quick;  //Variaveis que armazenam o melhor e pior caso do quick sort

    int vetor_melhor_caso_select[TAM_MAX],vetor_pior_caso_select[TAM_MAX];  //Vetor que guarda o melhor caso do selection sort/ Vetor que guarda o pior caso do selection sort
    int melhor_caso_select=999999,pior_caso_select=-1,aux_perm_select,aux_comp_select;  //Variaveis que armazenam o melhor e pior caso do selection sort

    int vetor_melhor_caso_bucket[TAM_MAX],vetor_pior_caso_bucket[TAM_MAX];  //Vetor que guarda o melhor caso do bucket sort/ Vetor que guarda o pior caso do bucket sort
    int melhor_caso_bucket=999999,pior_caso_bucket=-1,aux_perm_bucket,aux_comp_bucket;  //Variaveis que armazenam o melhor e pior caso do bucket sort
    

    double comp_select2,perm_select2, comp_quick2, perm_quick2, comp_bucket2, perm_bucket2; //Variaveis  auxiliares
    //Fim declaracao de variaveis
    srand((unsigned)time(&t));
    printf("Programa que gera valores aleatorio em um vetor de %d posicoes\n",);
    printf(" 1-Teste de ordenacao\n 2-Sair\n");
    scanf("%d",&op);
    if (op == 1){
	    for (i=0;i<testes;i++){//Realizacao dos testes
	    	aux_comp_quick = comp_quick;
	    	aux_perm_quick = perm_quick;

	    	aux_comp_select = comp_select;
	    	aux_perm_select = perm_select;
	    	
	    	aux_comp_bucket = comp_bucket;
	    	aux_perm_bucket = perm_bucket;

	        PreencheVetor(vetor,TAM_MAX);
	        printf(" Vetor aleatorio\n");
	        ExibeVetor(vetor,TAM_MAX);
	        memcpy(vetor_aux,vetor,sizeof(vetor));
	        SelectSort(vetor);
	        printf(" selection sort\n");
	        ExibeVetor(vetor,TAM_MAX);
	        printf(" comparacoes = %.2f\n permutacoes = %.2f\n\n",comp_select - aux_comp_select,perm_select - aux_perm_select);
	        if ((comp_select - (aux_perm_select + aux_comp_select))<melhor_caso_select){
	        	memcpy(vetor_melhor_caso_select,vetor_aux,sizeof(vetor));
	        	melhor_caso_select = comp_select + perm_select - (aux_comp_select + aux_perm_select);
	        }
	        if ((comp_select - (aux_perm_select + aux_comp_select))>pior_caso_select){
	        	memcpy(vetor_pior_caso_select,vetor_aux,sizeof(vetor));
	        	pior_caso_select = comp_select + perm_select - (aux_comp_select + aux_perm_select);
	        }

	        PreencheVetor(vetor,TAM_MAX);
	        memcpy(vetor_aux,vetor,sizeof(vetor));
	        printf(" Vetor aleatorio\n");
	        ExibeVetor(vetor,TAM_MAX);
	        QuickSort(vetor,0,TAM_MAX-1);
	        printf(" Quick sort\n");
	        ExibeVetor(vetor,TAM_MAX);
	        printf(" comparacoes = %.2f\n permutacoes = %.2f\n\n",comp_quick - aux_comp_quick,perm_quick - aux_perm_quick);
	        if ((comp_quick - (aux_perm_quick + aux_comp_quick))<melhor_caso_quick){
	        	memcpy(vetor_melhor_caso_quick,vetor_aux,sizeof(vetor));
	        	melhor_caso_quick = comp_quick + perm_quick - (aux_comp_quick + aux_perm_quick);
	        }
	       	if ((comp_quick - (aux_perm_quick + aux_comp_quick))>pior_caso_quick){
	        	memcpy(vetor_pior_caso_quick,vetor_aux,sizeof(vetor));
	        	pior_caso_quick = comp_quick + perm_quick - (aux_comp_quick + aux_perm_quick);
	        }

	        PreencheVetor(vetor,TAM_MAX);
	        ExibeVetor(vetor,TAM_MAX);
	        memcpy(vetor_aux,vetor,sizeof(vetor));
	        printf(" Bucket sort\n");
	        BucketSort(vetor);
	        ExibeVetor(vetor,TAM_MAX);
	        printf(" comparacoes = %.2f\n permutacoes = %.2f\n\n",comp_bucket - aux_comp_bucket,perm_bucket - aux_perm_bucket);
	    	if ((perm_bucket - (aux_perm_bucket + aux_comp_bucket))<melhor_caso_bucket){
	    		memcpy(vetor_melhor_caso_bucket,vetor_aux,sizeof(vetor));
	    		melhor_caso_bucket = comp_bucket + perm_bucket - (aux_comp_bucket + aux_perm_bucket);
	    	}
	        if ((comp_bucket - (aux_perm_bucket + aux_comp_bucket))>pior_caso_bucket){
	        	memcpy(vetor_pior_caso_bucket,vetor_aux,sizeof(vetor));
	        	pior_caso_bucket = comp_bucket + perm_bucket - (aux_comp_bucket + aux_perm_bucket);
	        }
	    }
	    printf(" -----------------------------------------\n");

	    //Calculo da media de comparacacoes e permutacoes
	    comp_select2 = (double)(comp_select/testes);
	    perm_select2 = (double)(perm_select/testes);
	    comp_quick2  = (double)(comp_quick/testes);     
	    perm_quick2  = (double)(perm_quick/testes);
	    comp_bucket2 = (double)(comp_bucket/testes);
	    perm_bucket2 = (double)(perm_bucket/testes);
	    
	    //Exibicao dos melhores casos
	    printf("\n Melhores casos\n");
	    printf("\n Melhor caso quick sort %d operacoes\n",melhor_caso_quick);
	    ExibeVetor(vetor_melhor_caso_quick,TAM_MAX);

	    printf("\n Melhor caso selection sort %d operacoes\n",melhor_caso_select);
	    ExibeVetor(vetor_melhor_caso_select,TAM_MAX);

	    printf("\n Melhor caso bucket sort %d operacoes\n",melhor_caso_bucket);
	    ExibeVetor(vetor_melhor_caso_select,TAM_MAX);

	    //Exibicao dos piores casos
	    printf("\n Piores casos\n");
	    printf("\n Pior caso quick sort %d operacoes\n",pior_caso_quick);
	    ExibeVetor(vetor_pior_caso_quick,TAM_MAX);

	    printf("\n Pior caso selection sort %d operacoes\n",pior_caso_select);
	    ExibeVetor(vetor_pior_caso_select,TAM_MAX);

	    printf("\n Pior caso quick bucket %d operacoes\n",pior_caso_bucket);
	    ExibeVetor(vetor_pior_caso_quick,TAM_MAX);

	    //Ordena e imprime a media de operacoes por eficiencia
	    printf("\n Media de valores e ordenacao por eficiencia\n\n");
		if (comp_select2 + perm_select2 < comp_quick2 + perm_quick2){                                         
	        if (comp_quick2 + perm_quick2 < comp_bucket2 + perm_bucket2){    
	    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n",comp_select2,perm_select2,comp_select2+perm_select2);
	    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);
	    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);
	    	}
	    	else {                                            
	            if (comp_select2 + perm_select2 < comp_bucket2 + perm_bucket2){ 
		    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n ",comp_select2,perm_select2,comp_select2+perm_select2);
		    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);
		    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);
				}	
	            else{
		    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);
		    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n ",comp_select2,perm_select2,comp_select2+perm_select2);
		    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);

	            }
	        }
	    }
	    else{                                               
	        if (comp_quick2 + perm_quick2 < comp_bucket2 + perm_bucket2){                                     
	             if (comp_select2 + perm_select2 < comp_bucket2 + perm_bucket2){
		    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);
		    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n",comp_select2,perm_select2,comp_select2+perm_select2);
		    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);
	             }  
	             else{
		    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);
		    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);
		    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n ",comp_select2,perm_select2,comp_select2+perm_select2);

	             } 
	        }
	        else{
	    		printf(" comparacoes bucket sort %.2f\n permutacoes bucket sort %.2f\n total de operacoes %.2f\n\n",comp_bucket2,perm_bucket2,comp_bucket2+perm_bucket2);        	
	    		printf(" comparacoes quick sort %.2f\n permutacoes quick sort %.2f\n total de operacoes %.2f\n\n",comp_quick2,perm_quick2,comp_quick2+perm_quick2);
	    		printf(" comparacoes selection sort %.2f\n permutacoes selection sort %.2f\n total de operacoes %.2f\n\n ",comp_select2,perm_select2,comp_select2+perm_select2);
	        }
	     }
	}    
   	return 0;
}

int Random(){
    return ((rand() % MAIOR_VALOR)+1);
}

void SelectSort(int *vet){
    int i, j, min, aux;
    for (i=0;i<(TAM_MAX-1);i++){
        min = i;
        for (j=i+1;j<TAM_MAX;j++){
            comp_select+=1;
            if (vet[j] < vet[min]){
                min = j;
                perm_select+=1;
            }
        }
        perm_select+=1;
        aux = vet[i];
        vet[i] = vet[min];
        vet[min] = aux;
        
    }
}

void QuickSort(int *vet, int esq, int dir){
    int pivo = esq, i,ch,j;
    for(i=esq+1;i<=dir;i++){
        j = i;
        comp_quick+=1;
        if(vet[j] < vet[pivo]){
            ch = vet[j];
        while(j > pivo){
            perm_quick+=1;
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

void insertionSort(int *vet, int tam) {
    int i, j, atual;

    for (i = 1; i < tam; i++) {
        atual = vet[i];
        j = i - 1;
        while ((j >= 0) && (atual < vet[j])) {
        	comp_bucket+=1;
            vet[j + 1] = vet[j];
            perm_bucket+=1; 
            j = j - 1;
        }
        perm_bucket+=1;
        vet[j + 1] = atual;
    }
}

void BucketSort(int *vet){

    Balde balde[NUM_BALDE];
    int i,j,k;
    for (i=0;i<NUM_BALDE;i++){
        balde[i].topo = 0;
    }
    for (i=0;i<TAM_MAX;i++){
        j = NUM_BALDE - 1;
        while (j>=0){
            if (vet[i]>=j*NUM_BALDE){
                //perm_bucket+=1; 
                balde[j].vetor[balde[j].topo] = vet[i];
                balde[j].topo+=1;
                break;
            }
            j-=1;
        }
    }
    for (i=0;i<NUM_BALDE;i++){
        if (balde[i].topo){
            insertionSort(balde[i].vetor,balde[i].topo);
        }
    }
    i=0;
    for (j=0;j<NUM_BALDE;j++){
        for (k=0;k<balde[j].topo;k++){
            vet[i]=balde[j].vetor[k];
            i++;
        }
    }
}

void PreencheVetor(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++){
        vet[i] =(int)Random();
    }
}
void ExibeVetor(int *vet,int tam){
    int i;
    printf(" -----------------------------------------\n");
    for (i=0;i<tam;i++){
        printf(" vet[%*d] = %-*d\n",4,i,4,vet[i]);
    }
    printf(" -----------------------------------------\n");
}