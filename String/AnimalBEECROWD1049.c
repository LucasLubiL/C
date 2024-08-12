#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char um[20];
    char dois[20];
    char tres[20];

    scanf("%s %s %s",um,dois,tres);

    if(strcmp(um,"vertebrado")==0){
        if(strcmp(dois,"ave")==0){
            if(strcmp(tres,"carnivoro")==0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if(strcmp(tres,"onivoro")==0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else if(strcmp(um,"invertebrado")==0){
        if(strcmp(dois,"inseto")==0){
            if(strcmp(tres,"hematofago")==0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if(strcmp(tres,"onivoro")==0){
                printf("minhoca\n");
            }else{
                printf("sanguessuga\n");
            }
        }
    }

    return 0;
}
