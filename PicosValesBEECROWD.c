#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int N,cont=0;

    scanf("%d",&N);

    int H[N];

    for(int i = 0 ; i < N ; i++){
        scanf("%d",&H[i]);
    }
    if(N==1){
       cont=1;
    }else if(N==2){
       if(H[0] != H[1]) {
          cont = 1;
       }
    }else if(N==3){
       if(H[0] == H[1] || H[1] == H[2] || H[0] > H[1] && H[1] > H[2] || H[0] < H[1] && H[1] < H[2]){
          cont = 0 ;
       }else{cont=1;}
    }else{
         if(H[0] > H[1] || H[1] > H[0]){
           for(int i = 2 ; i < N ; i++){

               if(H[i] == H[i-1] || H[i] > H[i-1] && H[i-1] > H[i-2] || H[i] < H[i-1] && H[i-1] < H[i-2]){
                   cont=0;
                   break;
               }else{
                   cont=1;
               }
           }
         }
    }
    if(N>0){
      printf("%d\n",cont);
    }

    return 0;
}
