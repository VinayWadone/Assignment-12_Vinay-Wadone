#include<stdio.h>
void odd(int);
void odd(int n)
{
    if(n==0)return;
    odd(n-1);
    printf("\n%d\n",2*n-1);
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    odd(a);
    return 0;
}


