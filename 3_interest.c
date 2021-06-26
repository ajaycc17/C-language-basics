#include <stdio.h>
void main()
{
    float interest;
    int principal, time;

    // For Simple Interest
    printf("Enter the principal amount, rate of interest and no. of years resspectively: ");
    scanf("%d %f %d", &principal, &interest, &time);
    printf("The Simple Interest after %d years will be: %f\n", time, principal * interest / 100 * time);

    // For compund interest
    float compound = 0;
    for (int i = 1; i <= time; i++)
    {
        compound += principal * interest / 100;
        principal += compound; // same as principal = principal + compound
    }
    printf("The Compound interest after %d years will be: %f", time, compound);
}