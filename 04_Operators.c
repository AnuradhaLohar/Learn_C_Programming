#include<stdio.h>

int main()
{

//pre-increment
    // int a = 2;
    // int ans;
    // ans = ++a;
    // printf("a=%d ans=%d",a,ans);

//post-increament
    // int a = 2;
    // int ans;
    // ans = a++;
    // printf("a=%d ans=%d",a,ans);

//pre-Decrement
    // int a = 10;
    // int ans;
    // // ans = --a;
    // ans = a--;
    // printf("a=%d ans=%d",a,ans);


    int a = 10;
    int b = 5;
    // int ans = a && b;
   int ans = a-- && b++;
    printf("%d %d ",ans);

    return 0;
}