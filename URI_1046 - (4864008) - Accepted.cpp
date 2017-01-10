#include <stdio.h>
int main(){
    int a,b,t1,t2;
    scanf("%d %d", &a,&b);
    t1 = a*60;
    t2 = b*60;
    if (t1<t2) printf("O JOGO DUROU %d HORA(S)\n", ((t2-t1)/60));
    else printf("O JOGO DUROU %d HORA(S)\n" , ((24*60 + (t2-t1))/60));
    return 0;

}
