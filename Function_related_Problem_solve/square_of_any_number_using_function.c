#include<stdio.h>

 int squ(int a)
 {
     int sque=a*a;
     return sque;

 }

 int main()
 {
    int a;
    scanf("%d",&a);
    int square=squ(a);
    printf("%d\n",square);


     return 0;
 }
