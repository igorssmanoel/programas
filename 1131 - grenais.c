#include <stdio.h>

int main(){
    int inter,gremio,quant_vit_int=0,quant_vit_gremio=0,empates=0,quant=0;
    int op=1;
    //scanf("%d %d",&inter,&gremio);
    while (op!=2){
        scanf("%d %d",&inter,&gremio);
        quant+=1;
        if (inter > gremio){
            quant_vit_int+=1;
        }
        if (gremio > inter){
            quant_vit_gremio+=1;
        }
        if (gremio == inter){
            empates+=1;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
    }
    printf("%d grenais\n",quant);
    printf("Inter:%d\n",quant_vit_int);
    printf("Gremio:%d\n",quant_vit_gremio);
    printf("Empates:%d\n",empates);
    if (quant_vit_int == quant_vit_gremio) printf("Nao houve vencedor\n");
    if (quant_vit_gremio > quant_vit_int) printf("Gremio venceu mais\n");
    if (quant_vit_int > quant_vit_gremio) printf("Inter venceu mais\n");
    return 0;

}
