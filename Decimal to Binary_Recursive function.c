#include<stdio.h>
void dtob(int);
void dtob(int n)
{
    if(n==0)return;
    int m;
    m=(n&1);
    dtob(n>>1);
    //return m;
    printf("%d",m);
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\n");
    dtob(a);
    printf("\n\n");
    return 0;
}
