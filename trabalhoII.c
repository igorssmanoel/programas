#include <stdio.h>
#include <stdlib.h>

typedef struct{

}
int main(){
    FILE * lista = fopen("nomes.txt","r");
    char nome[30];
    float nota;
    int tam;
    while (fscanf(lista,"%s %f",nome,&nota)!= EOF){
        printf("%s ",nome);
        printf(" %.2f \n",nota);
    }
    return 0;
}
