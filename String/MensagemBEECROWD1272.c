#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n, k=0;
    int aux=0;
    int fim=0;
    char frase[51];
    char palavra[51];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        aux=0;
        fim=0;
        k=0;

        scanf(" %[^\n]",frase);

        for(int j=0;j<strlen(frase);j++){

            if(aux==1){
                if(frase[j]!=' '){
                    continue;
                }else{
                    aux=0;
                }
            }
            if(aux==0){
                if(frase[j]==' '){
                    aux=0;
                    fim++;
                    continue;
                }else{
                    palavra[k]=frase[j];
                    k++;
                    aux=1;
                    fim=0;
                }
            }

        }

        printf("%s\n",palavra);


        memset(palavra, '\0', sizeof(palavra));
        memset(frase, '\0', sizeof(frase));


    }

    return 0;
}
