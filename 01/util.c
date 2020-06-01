#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void chiffrer(char tab[])
{
    int i=strlen(tab)-1;
    while(i>=0)
    {
        if(i%2==0)
            tab[i]+=1;
        printf("%c",tab[i]);
        i-=1;
    }
    printf("\n");
}

void dechiffrer(char tab[])
{
    int i=0;
    while(i<=strlen(tab)-1)
    {
        if(i%2==0)
            tab[i+1]-=1;
        i+=1;
    }
    i=strlen(tab)-1;
    while(i>=0)
    {
        printf("%c",tab[i]);
        i-=1;
    }
    printf("\n");
}

void afficher(char tab[])
{
    int i=0;
    for(i;i<=strlen(tab);i++)
    {
        printf("%c",tab[i]);
    }
    printf("\n");
}

int main(void){
    char t[]="013381510303sk";
    char x[]="RYL5qrPfXDw6bvw3M4Nvu7ADmc4:tjGyb[H[UwhzcnubTWnZ58zSGcvS9tTBHnBIsNkEcGxf";
    dechiffrer(t);
    dechiffrer(x);    
    return 0;
}