#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int x,y;
	int **m;	
	int valor;
	scanf("%d %d",&x,&y);
	m = (int**)malloc(sizeof(int*)*y);
	for (i=0;i<x;i++){
		m[i] = (int *)malloc(sizeof(int)*y);
	}
	for (i=0;i<x;i++){
		for (j=0;j<y;j++){
			scanf("%d",&valor);
			//printf("%d ",j*i-j+2*i);
			m[i][j] = valor;		
		}
		
//		printf("\n");
	}	
	for (i=1;i<x-1;i++){
		for (j=1;j<y-1;j++){
			if ((m[i][j] == 42) && (i>0) && (i<x) && (j>0) && (j<y)){
				//procedimento
				if ((m[i-1][j-1] == 7) && (m[i-1][j] == 7) && (m[i-1][j+1] == 7) && (m[i-1][j] == 7) && (m[i+1][j] == 7) && (m[i+1][j-1] == 7) && (m[i+1][j] == 7) && (m[i+1][j+1] == 7)){
					printf("%d %d\n",i+1,j+1);
					return 0;
				}
			}
		
		}
	}
	printf("%d %d\n",0,0);
	

	return 0;
}