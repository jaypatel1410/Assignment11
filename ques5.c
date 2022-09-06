#include<stdio.h>
#include<conio.h>
void Nprime(int);
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    Nprime(a);
    getch();
    return 0;
}

void Nprime(int x)
{
    int i,j;
    for(i=1 ; x!=0 ; i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
        x--;
    }
}