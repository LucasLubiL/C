#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    int cont=0;
    int k=0;
    char a[1001];
    char b[1001];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        k=0;
        cont=0;

        scanf("%s%s",a,b);

        if(strlen(a)<strlen(b)){
            printf("nao encaixa\n");
        }else{
            int tam=strlen(b)-strlen(a);
            if(tam!=0){
                tam=tam*(-1);
            }
            for(int j=0;j<strlen(a);j++){
                if(j>=tam){
                    if(a[j]==b[k]){
                        k++;
                        cont++;
                    }
                }
            }
            if(cont==strlen(b)){
                printf("encaixa\n");
            }else{
                printf("nao encaixa\n");
            }
        }

    }

    return 0;
}
