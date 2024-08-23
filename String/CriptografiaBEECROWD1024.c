#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    int aux=0;
    int pos=0;
    int k=0;
    char frase[1001];
    char palavra[1001];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        k=0;
        pos=0;
        aux=0;

        scanf(" %[^\n]",frase);

        for(int j=0;j<strlen(frase);j++){

            if(isalpha(frase[j])){
                frase[j]=(int)frase[j]+3;
            }
        }

        for(int j=strlen(frase)-1;j>=0;j--){

            palavra[k]=frase[j];
            k++;

        }

        palavra[k]='\0';

        aux=strlen(palavra);
        aux=(aux/2);

        for(int j=0;j<strlen(palavra);j++){

            if(j>=aux){
                palavra[j]=(int)palavra[j]-1;
                printf("%c",palavra[j]);
            }else{
                printf("%c",palavra[j]);
            }

        }

        printf("\n");

        memset(palavra, '\0', sizeof(palavra));
        memset(frase, '\0', sizeof(frase));

    }

    return 0;
}
