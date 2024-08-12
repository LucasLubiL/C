#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[101];
    char palavra[101];
    char final[101];
    int maior=0;
    int j=0;
    int aux=0;

    while(scanf(" %[^\n]",frase) && strcmp(frase,"0")!=0){

        int letra=0;
        int cont=0;
        j=0;
        aux=0;

        for(int i=0;i<strlen(frase);i++){

            if(frase[i]!=' '){

                cont++;
                palavra[j]=frase[i];
                j++;

            }else{

                if(strlen(palavra)>=maior){

                    maior=strlen(palavra);
                    strcpy(final,palavra);

                    aux=1;

                    memset(palavra, '\0', sizeof(palavra));

                }

                j=0;
                printf("%d-",cont);
                cont=0;

            }

        }

        if(aux==0 && strlen(palavra)>=maior){

                maior=strlen(palavra);
                strcpy(final,palavra);

                j=0;

                memset(palavra, '\0', sizeof(palavra));

        }

        printf("%d\n",cont);

        cont=0;

    }

    printf("\n");
    printf("The biggest word: %s\n",final);


    return 0;
}
