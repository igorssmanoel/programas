#include <stdio.h>
void main(){
    int num,cont=0;
    int valor=100;
    scanf("%d",&num);
    printf("%d\n",num);
    while (num>0){
        printf("%d nota(s) de R$ %d,00\n", (int)(num/valor),valor);
        num = num % valor;
        cont++;
        if (valor >10){
            valor = ((int)((int)(valor/10)/2))*10;
        }
        else{
            valor = (int)valor/2;
        }
    }
    if (cont < 7){
        printf("%d nota(s) de R$ %d,00\n", (int)(num/valor),valor);

    }
}
