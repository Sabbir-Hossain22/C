#include <stdio.h>
#include <stdlib.h>
float division (float a, float b)
{
    return a/b;
}
int main()
{
    float x, y;
    printf("Enter the value of x : ");
    scanf ("%f",&x);
    printf ("Enter the value of y : ");
    scanf ("%f",&y);
    printf("The division of %f / %f is : %.2f ",x,y, division(x,y));
    return 0;
}
