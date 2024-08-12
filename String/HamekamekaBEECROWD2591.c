#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

  int n;
  int cont=0;
  int mult=1;
  int soma=0;
  int aux=0;

  scanf("%d",&n);

  for(int i=0;i<n;i++){

      char a[200];
      mult=1;
      cont=0;
      aux=0;

      scanf("%s[^\n]",a);

      for(int i=0;i<strlen(a);i++){

        if(a[i]=='a'){
            cont++;
            aux=1;
        }else{
            cont=0;
            if(aux==1){
                mult=mult*soma;
                aux=0;
            }
        }
        if(cont>0){
            soma=cont;
        }
      }
      printf("k");
      for(int i=0;i<mult;i++){
        printf("a");
      }
      printf("\n");

  }

  return 0;
}
