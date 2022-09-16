#include <stdio.h>
#include <math.h>

int main ()
{
    float area, peri;
    int height, base;

    printf ("Enter height (a) in cm:");
    scanf ("%d",&height);
    printf ("Enter base (b) in cm:");
    scanf ("%d",&base);

    area = 0.5 * height * base;

    peri = height + base + sqrt(pow(height,2)+pow(base,2));

    printf ("\n\nThe perimeter of triangle is: %.2f", peri);
    printf ("\nThe area of triangle is: %.2f", area);



    return 0;
}
