#include<stdio.h>
#include<conio.h>
int LCM(int,int);
int main()
{
    int a,b,result;
    printf("Enter a number\n");
    scanf("%d%d",&a,&b);
    result=LCM(a,b);
    printf("The LCM is %d",result);
    getch();
    return 0;
}

int LCM(int x,int y)
{
    int i;
    for(i=x>y?x:y ; i<=x*y ; i=i+(x>y?x:y))
    if(i%x==0 && i%y==0)
    return i;
}