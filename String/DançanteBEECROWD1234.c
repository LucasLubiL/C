#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char frase[51];
    int aux=0;

    while(scanf("%[^\n]%*c",frase)!=EOF){


        aux=0;

        for(int i=0;i<strlen(frase);i++){

            if(isalpha(frase[i])){
                if(aux==0){
                    frase[i]=toupper(frase[i]);
                    aux=1;
                }else{
                    frase[i]=tolower(frase[i]);
                    aux=0;
                }
            }
        }

        printf("%s\n",frase);

    }

    return 0;
}
