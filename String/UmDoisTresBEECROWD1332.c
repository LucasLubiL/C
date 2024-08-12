#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    char numero[6];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%s",numero);

        if(strlen(numero)>3){
            printf("3\n");
        }else{
            for(int i=1;i<strlen(numero);i++){
                if(numero[i-1]=='t' && numero[i]=='w' || numero[i-1]=='t' && numero[i+1]=='o' || numero[i]=='w' && numero[i+1]=='o'){
                    printf("2\n");
                    break;
                }else{
                    printf("1\n");
                    break;
                }
            }
        }
    }

    return 0;
}
