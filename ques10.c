#include<stdio.h>
#include<conio.h>
int SumOfSeries(int);
int factorial(int);
int main()
{
    int n;
    float Sum=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    Sum=SumOfSeries(n);
    printf("The Sum of Series is %f",Sum);
    getch();
    return 0;
}

int SumOfSeries(int x)
{
    int i;
    float result=0;
    for(i=x;i>=1;i--)// or for(i=1;i<=x;i++)
    {
        result=result+(factorial(i)/i);
    }
    return result;
}

int factorial(int y)
{
    int i,fact=1;
    for(i=2;i<=y;i++)
    fact=fact*i;
    return fact;
}