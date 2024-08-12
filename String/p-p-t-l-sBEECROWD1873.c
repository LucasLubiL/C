#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  int n;

  scanf("%d",&n);

  for(int i=0;i<n;i++){

      char a[10];
      char b[10];

      scanf("%s %s",a,b);

      if(strcmp(a,b)==0){
        printf("empate\n");
      }else if(strcmp(a,"pedra")==0 && strcmp(b,"lagarto")==0 || strcmp(a,"pedra")==0 && strcmp(b,"tesoura")==0){
        printf("rajesh\n");
      }else if(strcmp(a,"papel")==0 && strcmp(b,"pedra")==0 || strcmp(a,"papel")==0 && strcmp(b,"spock")==0){
        printf("rajesh\n");
      }else if(strcmp(a,"tesoura")==0 && strcmp(b,"papel")==0 || strcmp(a,"tesoura")==0 && strcmp(b,"lagarto")==0){
        printf("rajesh\n");
      }else if(strcmp(a,"spock")==0 && strcmp(b,"tesoura")==0 || strcmp(a,"spock")==0 && strcmp(b,"pedra")==0){
        printf("rajesh\n");
      }else if(strcmp(a,"lagarto")==0 && strcmp(b,"spock")==0 || strcmp(a,"lagarto")==0 && strcmp(b,"papel")==0){
        printf("rajesh\n");
      }else{
        printf("sheldon\n");
      }

  }

  return 0;
}
