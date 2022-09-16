#include <stdio.h>

int main ()
{
    int B, x, acc;
    float bill, sum, avg;

    printf ("***T&B care-system***");

    printf("\n\nPlease enter the account number : ");
    scanf ("%d",&acc);

    printf ("\nNumber of month : ");
    scanf ("%d",&B);

    for (x = 0; x < B ; x++)
    {
        printf ("\nPlease enter amount for month %d (RM):", x + 1);
        scanf ("%f",&bill);

        sum += bill;
    }

    avg = sum / B;

if (avg > 0.00 && avg < 39.99)
{
        printf ("\nAcc Number: %d", acc);
        printf("\nThe sum of bills electricity charge for %d month is RM %.2f ", B , sum);
        printf ("\nAverage Bill : %.2f", avg);
        printf ("\nLow\n\n");
}
else if (avg  > 40.00 && avg < 109.99)
{
        printf ("\nAcc Number: %d", acc);
        printf("\nThe sum of bills electricity charge for %d month is RM %.2f ", B , sum);
        printf ("\nAverage Bill : %.2f", avg);
        printf ("\nMedium\n\n");
}
else
{
        printf ("\nAcc Number: %d", acc);
        printf("\nThe sum of bills electricity charge for %d month is RM %.2f ", B , sum);
        printf ("\nAverage Bill : %.2f", avg);
        printf ("\nHigh\n\n");
}



    return 0;
}
