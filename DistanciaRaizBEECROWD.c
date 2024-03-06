#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    double x1,x2,y1,y2;
    double p1,p11,p2,p22,total,raiz;

    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

    p1=x2-x1;
    p11=p1*p1;

    p2=y2-y1;
    p22=p2*p2;

    total=p11+p22;
    raiz=sqrt(total);

    printf("%.4lf",raiz);
    return 0;
}


