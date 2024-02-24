#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int A,B,divi,x,N,cont=1;

    scanf("%d",&N);

    if(N<2){
        cont=0;
    }else{
      for(int i=3;i<=N;i+=2){
          x=0;
          for(int j=i-1;j>1;j--){
              divi=i%j;
              if(divi==0){
                  x=1;
              }
          }
          if(x!=1){
              cont+=1;
          }
      }
      }
    printf("%d",cont);

    return 0;
}


