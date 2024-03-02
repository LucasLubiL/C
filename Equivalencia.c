#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,m;
    int um,dois;

    scanf("%d %d %d",&a,&b,&m);

    um=a%m;
    dois=b%m;

    if(um==dois){
        printf("1\n");
    }else{
        printf("0\n");
    }

    return 0;
}
