#include<stdio.h>

int main(){

    // int i = 0;
    // for( ;i < 5; )
    // {
    //     i++;
    //     printf("%d\n", i);
    // }

    

    // for(int i = 0, j=1; i< 5; i++)
    // {
    //     printf("%d\n", i);
    //     printf("%d\n", j);
    // }

    // for(int i = 0, j=1; i<=5, j<=3; i++,j++)
    // {
    //     printf("%d\n", i);
    //     printf("%d\n", j);
    // }

    // int i ;
    // int j ;
    // for(i = 1; i<= 10; i++)
    // {
    //     j = 2 * i;
    //     printf("2 * %d = %d\n",i,j);
    // }

int num;
printf("Enter the num:");
scanf("%d",&num);

for(int i = 1; i<= 10; i++)
    {
        
        printf("%d * %d = %d\n",num,i,i*num);
    }


}