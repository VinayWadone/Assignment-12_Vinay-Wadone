#include<stdio.h>
void rev(int);
void rev (int n)
{
    int rem, s=0;
    if(n==0) return;
    rem=n%10;
    s=s*10+rem;
    printf("%d",s);
    rev(n/10);
}

int main()
{
    int a;
    printf("\n\nEnter a number\n\n");
    scanf("%d",&a);
    printf("\n\n\n");
    rev(a);
    return 0;
}
