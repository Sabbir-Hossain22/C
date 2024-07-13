#include <stdio.h>
#include <stdlib.h>
void avg ()
{
    float x,y,z;
    printf("Enter the value of x,y,z :");
    scanf("%f,%f,%f",&x,&y,&z);
    float result = (x+y+z)/3;
    printf("The average is : %f",result);
}
int main()
{
    avg();
    return 0;
}
