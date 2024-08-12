#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n;
    int j=0;
    char palavra[101];

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        scanf("%s",palavra);

        for(int i=strlen(palavra);i>=0;i--){
            if(islower(palavra[i])){
                printf("%c",palavra[i]);
            }
        }
        printf("\n");

    }

    return 0;
}
