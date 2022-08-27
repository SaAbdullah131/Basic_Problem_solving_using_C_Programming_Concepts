#include<stdio.h>
//accesending order sorting
void sort(int *a,int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        for(int check=pos+1;check<n-1;check++){
            if(a[check]<a[pos]){
                int temp=a[check];
                a[check]=a[pos];
                a[pos]=temp;
            }
        }
    }
}
int main()
{
    int ar[6]={5,10,2,3,15,20};
    sort(ar,6);

    for(int i=0;i<5;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}
