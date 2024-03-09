#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int N,dois=2,tres=3,cinco=5;
    double a,b,c,total,m1=0,m2=0,m3=0,media;

    scanf("%d",&N);

    for(int i=0;i<N;i++){
        m1=0;
        m2=0;
        m3=0;
        scanf("%lf %lf %lf",&a,&b,&c);
        m1=a*dois;
        m2=b*tres;
        m3=c*cinco;
        media=(m1+m2+m3)/10;
        printf("%.1lf\n",media);
    }

    return 0;
}



