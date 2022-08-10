#include<stdio.h>
void rev_even(int);
void rev_even(int n)
{
    if(n==0)return;
    printf("\n%d\n",2*n);
    rev_even(n-1);
}
int main()
{
    printf("\n\nEnter a number\n\n");
    int a;
    scanf("%d",&a);
    rev_even(a);
    return 0;
}
