#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

   int x1,y1,x2,y2;
   int conta1=0,conta2=0,movi=0;

   scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

   while(x1!=0 && y1!=0 && x2!=0 && y2!=0){

        if(x1<x2){
            conta1=x2-x1;
        }else{
            conta1=x1-x2;
        }

        if(y1<y2){
            conta2=y2-y1;
        }else{
            conta2=y1-y2;
        }

        if(x1==x2 && y1==y2){
            movi=0;
        }else if(x1==x2 || y1==y2 || conta1==conta2){
            movi=1;
        }else{
            movi=2;
        }

        printf("%d\n",movi);

        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

   }
   return 0;
}
