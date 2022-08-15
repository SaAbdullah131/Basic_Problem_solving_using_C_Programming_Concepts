#include<stdio.h>
int sum(int a,int b)
{
    int s=a+b;
    return s;
}

int main()
{
    int a=5,b=6;
    int res=sum(a,b);
    printf("%d",res);

    return 0;
}
