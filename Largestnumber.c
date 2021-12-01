#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three numbers");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2){
        printf("largest number is %d, num1");
    }
    if(num2>num3){
        printf("largest number is %d,num2");
    }
    if(num3>num1){
        printf("largest number is %d, num3");
    }
    return 0;
}