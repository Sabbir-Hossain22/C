#include<stdio.h>
int main(){
float num1,num2,num3;
scanf("%f %f %f", &num1,&num2,&num3);
if(num1<=num2 && num1<=num3)
    {
        printf("a is minimum");
    }
    else if(num2<=num1 && num2<=num3)
    {
        printf("b is minimum");
    }
    else
    {
        printf("c is minimum");

    }
    return 0;
}
