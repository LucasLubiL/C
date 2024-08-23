#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int c=0;
    int tam=0;
    int k=0;
    char um[51];
    char dois[51];
    char palavra[51];

    scanf("%d ",&n);

    for(int i=0;i<n;i++){

        c=0;
        k=0;
        tam=0;

        scanf("%s %s",um,dois);

        for(int j=0;j<102;j++){

            if(j%2==0){
                if(um[c]!='\0'){
                    palavra[tam]=um[c];
                    c++;
                    tam++;
                }
            }else if(j%2!=0){
                if(dois[k]!='\0'){
                    palavra[tam]=dois[k];
                    k++;
                    tam++;
                }
            }

            if(um[c]=='\0' && dois[k]=='\0'){
                break;
            }

        }

        printf("%s\n",palavra);

        memset(palavra, '\0', sizeof(palavra));
        memset(um, '\0', sizeof(um));
        memset(dois, '\0', sizeof(dois));

    }

    return 0;
}
