#include<stdio.h>
#include<conio.h>
void fibonacci(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    fibonacci(n);
    getch();
    return 0;
}

void fibonacci(int x)
{
    int a=1,b=0,c,i;
    for(i=1;i<=x;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}