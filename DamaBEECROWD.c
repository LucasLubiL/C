#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int x1=1,y1=1,x2=1,y2=1;
    int conta1,conta2,conta3,raiz;

    while(x1!=0 && y1!=0 && x2!=0 && y2!=0){


        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        conta1=(x2-x1)*(x2-x1);
        conta2=(y2-y1)*(y2-y1);

        conta3=conta1+conta2;

        raiz=sqrt(conta3);

        printf("%d\n",raiz);

    }

    return 0;
}






