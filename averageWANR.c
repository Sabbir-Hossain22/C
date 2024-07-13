#include <stdio.h>
#include <stdlib.h>

void avg (float x, float y, float z)
{
    printf ("The average is : %f",(x+y+z)/3);
}

int main()
{
    float x, y, z;
    printf ("Enter the value of x : ");
    scanf ("%f", &x);
    printf ("Enter the value of y : ");
    scanf ("%f", &y);
    printf ("Enter the value of z : ");
    scanf ("%f", &z);
    avg(x,y,z);
    return 0;
}
