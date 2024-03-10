#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int N=1,A,B;
    int timeA=0,timeB=0;

    while(N>0){

        timeA=0;
        timeB=0;

        scanf("%d",&N);

        if(N>0){
          for(int i=0;i<N;i++){
              scanf("%d %d",&A,&B);
              if(A>B){
                 timeA++;
              }else if(B>A){
                 timeB++;
              }
          }
          printf("%d %d\n",timeA,timeB);

        }
    }

    return 0;
}



