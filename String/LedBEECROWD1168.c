#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        char num[10*100];

        int soma=0;

        scanf("%s",num);

        for(int i=0;i<strlen(num);i++){
            if(num[i]=='1'){
                soma=soma+2;
            }else if(num[i]=='2'){
                soma=soma+5;
            }else if(num[i]=='3'){
                soma=soma+5;
            }else if(num[i]=='4'){
                soma=soma+4;
            }else if(num[i]=='5'){
                soma=soma+5;
            }else if(num[i]=='6'){
                soma=soma+6;
            }else if(num[i]=='7'){
                soma=soma+3;
            }else if(num[i]=='8'){
                soma=soma+7;
            }else if(num[i]=='9'){
                soma=soma+6;
            }else if(num[i]=='0'){
                soma=soma+6;
            }
        }

        printf("%d leds\n",soma);

    }

    return 0;
}
