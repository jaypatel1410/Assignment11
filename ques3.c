#include<stdio.h>
#include<conio.h>
int checkprime(int);
int main()
{
    int a,result;
    printf("Enter a number\n");
    scanf("%d",&a);
    result=checkprime(a);
    if(result==0)
    printf("%d is not prime",a);
    else
    printf("%d is prime",a);
    getch();
    return 0;
}

int checkprime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        return 0;
        else
        {
            if(x==i)
            return 1;
        }
    }
}