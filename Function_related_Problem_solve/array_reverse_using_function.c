#include<stdio.h>

void reverse(int *a,int n)
{
    int i=0,j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
}

int main()
{
int arr[]={1,2,3,4,5};
reverse(arr,5);
for(int i=0;i<5;i++){
    printf("%d ",arr[i]);
}
    return 0;
}
