#include<stdio.h>

void input(int *i)
{
    printf("Enter a number: ");
    scanf("%d",&*i);
    (*i)++;
}