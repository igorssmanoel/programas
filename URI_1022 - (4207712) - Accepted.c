#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct{
    //   (N/D)
    int N;//Numerador
    int D;//Denominador
}Racional;
/*
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
*/

int MDC(int a, int b){
    if (b == 0)
        return a;
    else
        return (MDC(b,fmod(a,b)));
}

void Simplifica(int S, int L){
    int auxs = S;
    int auxl = L;
    int divisor = abs(MDC(S,L));
    while ((divisor) >1) {
        S = S/divisor;
        L = L/divisor;
        divisor = abs(MDC(S,L));
    }
    printf("%d/%d = ",auxs,auxl);
    printf("%d/%d\n",S,L);
}

void Soma(Racional * num, Racional * num2){
    int D;
    int N;
    N = ((num->N * num2->D) + (num2->N * num->D));
    D = (num->D * num2->D);
    Simplifica(N,D);

}
void Subtracao(Racional * num, Racional * num2){
    int D;
    int N;
    N = ((num->N * num2->D) - (num2->N * num->D));
    D = (num->D * num2->D);
    Simplifica(N,D);
}
void Multiplicacao(Racional * num, Racional * num2){
    int D;
    int N;
    N = num->N * num2->N;
    D = num->D * num2->D;
    Simplifica(N,D);
}
void Divisao(Racional * num, Racional * num2){
    int D;
    int N;
    N = num->N * num2->D;
    D = (num->D * num2->N);
    Simplifica(N,D);
}
void main(){
    int quant;
    int i;
    char sinal;
    Racional * a = (Racional*)malloc(sizeof(Racional));
    Racional * b = (Racional*)malloc(sizeof(Racional));
    scanf("%d",&quant);
    //printf("fora\n");
    for (i=0;i<quant;i++){
        //printf("entrou\n");
        scanf("%d / %d %c %d / %d",&(a->N),&(a->D),&sinal,&(b->N), &(b->D));
        //fflush(stdin);
        //scanf("%c",&sinal);
        //scanf("%d / %d",&(b->N), &(b->D));
        //printf("sinal = %c\n",sinal);
        switch (sinal){
            case '+':
                Soma(a,b);
                break;
            case '*':
                Multiplicacao(a,b);
                break;
            case '-':
                Subtracao(a,b);
                break;
            case '/':
                Divisao(a,b);
                break;
        }

    }
    //printf("saiu\n");
    free(a);
    free(b);

}
