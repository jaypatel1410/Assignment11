#include<stdio.h>
#include<conio.h>
int HCF(int,int);
int main()
{
    int a,b,result;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    result=HCF(a,b);
    printf("The HCF is %d",result);
    getch();
    return 0;
}

int HCF(int x,int y)
{
    int i;
    for(i=x>y?x:y ; i>=1 ; i--)
    if(x%i==0 && y%i==0)
    return i;
}