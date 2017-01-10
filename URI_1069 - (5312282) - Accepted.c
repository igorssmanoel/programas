#include <stdio.h>
#include <string.h>

int main(){
    char linha[1000];
    int i,tam,j,aux,cont_d_a,cont_d_f,diamante;
    scanf("%d",&tam);
    i=0;
    while(i<tam){
        cont_d_a = 0;
        cont_d_f = 0;
        i++;
        diamante=0;
        scanf("%s",&linha);
        for (j=0;j<strlen(linha);j++){
            if (linha[j] == '<'){
                cont_d_a += 1;
            }
            if ((linha[j] == '>') && (cont_d_a > 0)){
                cont_d_a -= 1;
                diamante+=1;
            }
            //printf("%c",linha[j]);
        }
        printf("%d\n",diamante);
    }
    return 0;

}
