//
// Created by vvanamadi on 7/13/16.
//
#include<stdio.h>

main(){
char c='A';
int i,j,k,s;
int len=6;

    for(i=0;i<len;i++)
    {
        printf("%c ",c+i);
    }
    printf("%c ",c+i);
   
    for(k=len-1;k>=0;k--)
    {
        printf("%c ",c+k);
    }
    printf("\n");

    for(j=0;j<len;j++)
    {

        for(i=0;i<len-j;i++)
        {
            printf("%c ",c+i);
        }


        for(s=0;s<2*j+1;s++)
        {
            printf("  ");//insert space
        }
        for(k=len-j-1;k>=0;k--)
        {
            printf("%c ",c+k);
        }
        printf("\n");
    }
}
