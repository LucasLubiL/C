#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    int cont=0;
    char frase[51];
    int a;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        cont=0;

        scanf("%s",frase);
        scanf("%d",&a);

        for(int j=0;j<strlen(frase);j++){

            frase[j]=(int)frase[j]-a;

        }

        for(int j=0;j<strlen(frase);j++){

            if(!isalpha(frase[j])){

                for(int k=(int)frase[j];k<(int)'A';k++){
                    cont++;
                }

                frase[j]=(int)'['-cont;
                cont=0;

            }

        }
        //A B C D E F G H I J K L M N O P Q R S T U V W Y Z
        printf("%s\n",frase);
        memset(frase, '\0', sizeof(frase));

    }
    return 0;
}
