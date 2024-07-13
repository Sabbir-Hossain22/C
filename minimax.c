#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float min, max;
    printf("Enter three numbers for minimum and maximum : ");
    scanf("%f %f %f", &a, &b, &c);
    min =a;
    max =a;

    if (b<min)
    {
        min = b;
    }
    if (c<min)
    {
        min =c;
    }
    if (b>max)
    {
        max =b;
    }
    if(c > max)
    {
        max = c;
    }
    printf("The minimum value is : %.2f", min);
    printf("The maximum value is : %.2f", max);
    return 0;
}
