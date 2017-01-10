#include <stdio.h>
#define max_x 12
#define max_y 12

int main(){
    double matriz[max_x][max_y],media=0;
    int i,j,cont=0,sent_x=0;
    char c;
    scanf("%c",&c);
    for (i=0;i<max_x;i++){
        for (j=0;j<max_y;j++){
            scanf("%lf",&matriz[j][i]);
            if (j>sent_x && (max_x-sent_x)>j+1){
                cont+=1;
                media+=matriz[j][i];
            }
        }
        sent_x+=1;
    }
    if (c == 'M')
        printf("%.1f\n",(media/cont));
    else
        printf("%.1f\n",media);
    return 0;
}
