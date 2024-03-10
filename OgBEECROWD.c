#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int L,R,soma=0;

  do{
    scanf("%d %d",&L,&R);
    soma=L+R;

    if(L!=0 && R!=0){
       printf("%d\n",soma);
    }

  }while(L>0 && R>0);

    return 0;
}



