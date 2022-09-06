#include<stdio.h>
#include<conio.h>
void primeInBetween(int,int);
int main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    primeInBetween(a,b);
    getch();
    return 0;
}

void primeInBetween(int x,int y)
{
    int i,j;
    for(i=(x<y?x:y)+1 ; i<(x>y?x:y) ; i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        printf("%d ",i);
    }
}