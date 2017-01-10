//#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <sys/stat.h>
#include <sys/types.h>
#define PATH_MAX 99
int dirExists(const char *path){
    struct stat info;

    if(stat( path, &info ) != 0)
        return 0;
    else if(info.st_mode & S_IFDIR)
        return 1;
    else
        return 0;
}

int main(){
    int i;
    int  op;
    FILE * arq;
    //mkdir(".//%s","ABOBORAGIGANTE");
    //system("dir");
    char str[PATH_MAX];
    char path[PATH_MAX];
    //printf("%s\n",str);
    printf("Escolha uma op:\n");
    printf("1-Criar diretorio\n");
    printf("2-Teste\n");
    scanf("%d",&op);
    if (op == 1){
        for (i=0;i<30;i++){
            sprintf(str, "rmdir %ds",i);
            if (!(dirExists(str))){
                printf("%s\n",system(str)==0?"Criada com sucesso":"Falha na criacao");

            }else{
                printf("Pasta %s ja criada \n",str);
            }
        }
    }
    if (op == 2){
        arq = popen("dir /b /o:n /ad","w");
        if (arq = NULL){
            printf("Nao foi possivel gerar o arquivo\n");
        }
        printf("??\n");
        if (arq == NULL){
            printf("ARQUIVO VAZIO\n");
        }
        printf("??\n");
        while (fgets(path, PATH_MAX,arq) != NULL){
            printf("%s",path);
        }
        fclose(arq);

    }


    /*for (i=0;i<10;i++){
        mkdir("C:\\Users\\igors\\Documents\\Programas\\ ", + i);
        //printf("criando pasta\n");
        //if ()
        //sprintf("%s %s","mkdir",i);
    }*/
    //system("dir");
    return 0;
}
