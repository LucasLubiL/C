#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int vezes,j;
    char frase[1000];

    scanf("%d",&vezes);

    for(int i=0; i<=vezes; i++)
    {
        gets(frase);
        int tamanho=strlen(frase);
        for(int i=0; i<tamanho; i++)
        {
            if(frase[i]=='a' || frase[i]=='A')
            {
                frase[i]='@';
            }
            else if(frase[i]=='e' || frase[i]=='E')
            {
                frase[i]='&';
            }
            else if(frase[i]=='i' || frase[i]=='I')
            {
                frase[i]='!';
            }
            else if(frase[i]=='o' || frase[i]=='O')
            {
                frase[i]='*';
            }
            else if(frase[i]=='u' || frase[i]=='U')
            {
                frase[i]='%';
            }
        }
        printf("%s\n",frase);

    }


    return 0;
}
