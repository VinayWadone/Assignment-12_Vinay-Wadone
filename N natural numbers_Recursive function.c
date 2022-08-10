#include<stdio.h>
void natural(int);
void natural(int n)
{
    if(n==0)return;
    natural(n-1);
    printf ("\n%d\n", 2*n-1);
}

int main()
{
int a;
printf ("\n\nEnter a number\n\n");
scanf("%d",&a);
natural(a);
return 0;
}

