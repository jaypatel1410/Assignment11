#include<stdio.h>
#include<conio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    square(n);
    getch();
    return 0;
}

void square(int x)
{
    printf("%d",x*x);
}