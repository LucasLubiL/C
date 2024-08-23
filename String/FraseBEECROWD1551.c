#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int soma=0;
    char alfa[] = "abcdefghijklmnopqrstuvwxyz";
    char frase[1001];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        char letra[26] = {0};

        soma=0;

        scanf(" %[^\n]",frase);

        for(int j=0;j<strlen(frase);j++){

           for(int k=0;k<26;k++){

               if(frase[j]==alfa[k]){
                   letra[k]=1;
                   break;
               }

           }

        }

        for(int i=0;i<26;i++){
            if(letra[i]==1){
                soma=soma+1;
            }
        }

        if(soma==26){
            printf("frase completa\n");
        }else if(soma>=13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }

        memset(frase, '\0', sizeof(frase));

    }

    return 0;
}
