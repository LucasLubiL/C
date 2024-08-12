#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char frase[201];
    char final;
    int quant[27];
    char letra[] = "abcdefghijklmnopqrstuvwxyz";
    int x, t=0;
    int maior=0;

    scanf("%d",&x);

    for(int i=0;i<x;i++){

        t=0;
        maior=0;
        for(int i=0;i<26;i++){
            quant[i]=0;
        }

        scanf(" %[^\n]",frase);

        for(int j=0;j<strlen(frase);j++){
            if(isupper(frase[j])){
                frase[j]=tolower(frase[j]);
            }
        }

        for(int j=0;j<strlen(frase);j++){
            for(int k=0;k<26;k++){
                if(frase[j]==letra[k]){
                    quant[k]++;
                    break;
                }
            }
        }

        for(int m=0;m<26;m++){
            if(quant[m]>maior){
                final=letra[m];
                maior=quant[m];
            }
        }

        printf("%c",final);
        for(int c=0;c<26;c++){
            if(final!=letra[c]){
               if(quant[c]==maior){
                   printf("%c",letra[c]);
               }
            }
        }

        printf("\n");

        memset(frase, '\0', sizeof(frase));

    }

    return 0;
}
