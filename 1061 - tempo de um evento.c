#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 5
int main(){
    int n1,n2,dia1s,dia2s,hora,minuto,segundo,aux2;
    char aux[TAM_MAX];

    scanf("%s %d",aux,&n1);
    scanf("%d : %d : %d",&hora,&minuto,&segundo);
    dia1s = hora*3600 + minuto*60 + segundo + n1*86400;

    scanf("%s %d",aux,&n2);
    scanf("%d : %d : %d",&hora,&minuto,&segundo);
    dia2s = hora*3600 + minuto*60 + segundo + n2*86400;

    aux2 = dia2s - dia1s;

    dia1s = (int)aux2 /(86400);
    hora = (int)((aux2-(dia1s*86400)) /3600);
    minuto = (int)(((aux2-dia1s*86400) - (hora*3600))  / 60) ;
    segundo =   aux2 -(dia1s*24*60*60) - (hora*3600) - (minuto*60);



    //printf("segundos totais = %d\n",aux2);
    printf("%d dia(s)\n",dia1s);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",minuto);
    printf("%d segundo(s)\n",segundo);

    return 0;
}

/*
1dia = 86400s
    x  =  m
    x = 86400/m
1d = 24h = (60*24)m = (60*24)*3600s

1h = 60m = 3600s
zh = x

x = (z*3600)s


Dia 5
10 : 13 : 23
Dia 9
10 : 13 : 23
*/
