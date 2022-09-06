#include<stdio.h>
#include<conio.h>
float comb(int,int);
int factorial(int);
void pascal(int);

int main()
{
    int x;
    printf("Enter No. of lines for printing pascal\n");
    scanf("%d",&x);
    pascal(x);
    getch();
    return 0;
}

float comb(int n,int r)
{
    float result;
    result=factorial(n)/(factorial(r)*factorial(n-r));
    return result;
}

int factorial(int y)
{
    int i,fact=1;
    for(i=2;i<=y;i++)
    fact=fact*i;
    return fact;
}

void pascal(int a)
{
    int i,j,k,r;
    for(i=1;i<=a;i++)
    {
        k=1;
        r=0;
        for(j=1; j<=2*a-1 ;j++)
        {
            if(j>=a+1-i && j<=a-1+i && k)
            {
                printf("%.0f",comb(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
}