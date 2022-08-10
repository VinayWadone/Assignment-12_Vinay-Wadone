#include<stdio.h>
void even(int);
void even(int n)
{
    if (n==0) return;
    even(n-1);
    printf("\n%d\n",2*n);
}
int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    even(a);
    return 0;
}

