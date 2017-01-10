#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Nodo{
    char valor[30];
    struct Nodo *prox;
    int tam;
}Pilha;

void IniciaPilha(Pilha * pilha){
    pilha->prox = NULL;
    pilha->tam = 0;
}
int VaziaPilha(Pilha * pilha){
    return (pilha->prox == NULL);
}
int Push(Pilha * pilha,char *elem){
    Pilha * aux = (Pilha*)malloc(sizeof(Pilha));
    aux = pilha;
    while (aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = (Pilha*)malloc(sizeof(Pilha));
    aux = aux->prox;
    aux->prox = NULL;
    strcpy((aux->valor),elem);
    pilha->tam+=1;
    return 1;
}
char * Pop(Pilha * pilha){
    Pilha * ultimo=pilha->prox,*penultimo=pilha;
    if (VaziaPilha(pilha)){
        printf("Pilha vazia\n");
        return NULL;
    }
    else{
        while (ultimo->prox != NULL){
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        penultimo->prox = NULL;
        pilha->tam -=1;
        return ultimo->valor;
    }
}
int ImprimePilha(Pilha * pilha){
    Pilha * aux;
    aux = pilha;
    if (aux->prox == NULL){
        printf("Pilha vazia\n");
        return -1;
    }
    while (aux != NULL){
        aux = aux->prox;
        printf("%s\n",aux->valor);
    }
    return 0;
}

int main(){
    Pilha * pilha = (Pilha*)malloc(sizeof(Pilha));
    char * linha = "(A*2+c-d)/2";
}
