#include<stdio.h>

void main()
{
    int N;
    scanf("%d",&N);
    if (N%2==0)
    {
     if (N>=0 && N<5)
    printf("very small even");
    if(N>5 && N<=20)
    printf("small even");
    if(N>20)
    printf("even");
    }
    else
    printf("odd");
}