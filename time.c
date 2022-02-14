#include<stdio.h>

void main()
{
    int N,M;
    scanf("%d %d",&N,&M);
    int day= (N+M)/86400;
    int hour=(N+M)/3600;
    int min=((N+M)-(3600*hour))/60;
    int seconds=(N+M)-(3600*hour)-(min*60);
    printf("%d %d %d %d",day,hour,min, seconds);
}