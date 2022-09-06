#include<stdio.h>
#include<conio.h>
int nextprime(int);
int main()
{
    int a,result;
    printf("Enter a number\n");
    scanf("%d",&a);
    result=nextprime(a);
    printf("The next prime number is %d",result);
    getch();
    return 0;
}

int nextprime(int x)
{
    int i,j;
    for(i=x+1 ; 1 ; i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        return i;
    }
}