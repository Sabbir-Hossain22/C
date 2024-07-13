#include <stdio.h>
#include <stdlib.h>

float avg ()
{
    float x,y,z, result;
    printf ("Enter the value of x : ");
    scanf ("%f", &x);
    printf ("Enter the value of y : ");
    scanf ("%f", &y);
    printf ("Enter the value of z : ");
    scanf ("%f", &z);
    result = (x+y+z)/3;
    return result;
}

int main()
{
    printf("The average is : %f", avg());
    return 0;
}
