#include<stdio.h>

void even_odd(void)
{
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Yes,It's even number");
        return ;
    }
    printf("It's a odd number");
}
