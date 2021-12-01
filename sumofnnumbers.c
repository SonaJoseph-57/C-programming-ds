#include<stdio.h>
int main()
{
    int i,number,sum=0;
    printf("enter a number");
    scanf("%d",&number);
    for(i=0;i<=number;i++){
        sum = sum+i;
    }
    printf("result%d",sum);
    return 0;
}
