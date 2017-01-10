#include <stdio.h>
#include <math.h>
int soma_pascal(int);
int main(){
    int n;
    int casos;
    scanf("%d",&casos);
    while (casos>0){
        scanf("%d",&n);
        printf("%d\n",soma_pascal(n));
        casos-=1;
    }
}
int soma_pascal(int n){
    double soma;
    soma = (pow(2,n)/(2-1))-1;
    return soma;
}
