#include<stdio.h>
int main ()
{
    int num[7];
    int sum = 0;
    printf("enter 7 integers:\n");
    for(int i=0; i<7; i++)
    {
        scanf("%d", &num[i]);
    }
    for(int i=0; i<7; i++)
    {
    sum= sum + num[i];
    }
    printf("sum = %d", sum);
    return 0;
}