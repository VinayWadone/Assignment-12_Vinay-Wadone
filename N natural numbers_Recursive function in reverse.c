#include<stdio.h>
void rev_natual(int);
void rev_natual(int n)
{
    if (n==0) return;
    printf("\n%d\n",n);
    rev_natual(n-1);
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d", &a);
    rev_natual(a);
    return 0;
}
