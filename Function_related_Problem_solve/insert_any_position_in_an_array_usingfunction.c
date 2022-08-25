#include<stdio.h>

insert(int *a,int n,int pos,int value)
{
    for(int i=n-2;i>=pos;i--)
    {
    a[i+1]=a[i];
    }
    a[pos]=val;
}

int main()
{

int arr[7]={5,10,2,3,14,20};
int pos,value;
scanf("%d %d",&pos,&value);
insert(arr,7,pos,value);

for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
