#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double n1,n2,n3,n4,media=0,fim=0,nota;

    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if(media>=7.0){

        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");

    }else if(media<5.0){

        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");

    }else if(media>=5.0 && media<=6.9){

        scanf("%lf",&nota);
        fim=(nota+media)/2;

        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",nota);

        if(fim>=5.0){

            printf("Aluno aprovado.\n");

        }else{

            printf("Aluno reprovado.\n");

        }

        printf("Media final: %.1lf\n",fim);

    }


    return 0;
}
