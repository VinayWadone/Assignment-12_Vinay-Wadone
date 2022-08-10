#include<stdio.h>
void rev_odd(int);
void rev_odd(int n)
{
    if(n==0) return;
    printf("\n%d\n",2*n-1);
    rev_odd(n-1);
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    rev_odd(a);
    return 0;
}
