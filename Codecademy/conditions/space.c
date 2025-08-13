#include <stdio.h>

int main(void)
{
    double weight;
    int planet;

    printf("Please enter your current earth weight: ");
    scanf("%lf", &weight); // Read user input for earth weight

    printf("\nI have information for the following planets:\n\n");
    printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
    printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

    printf("Which planet are you visiting? ");
    scanf("%d", &planet);

    if (planet == 1)
        weight *= 0.38;
    else if (planet == 2)
        weight *= 0.91;
    else if (planet == 3)
        weight *= 0.38;
    else if (planet == 4)
        weight *= 2.34;
    else if (planet == 5)
        weight *= 1.06;
    else if (planet == 6)
        weight *= 0.92;
    else if (planet == 7)
        weight *= 1.19;
    else {
        printf("Invalid planet number!\n");
        return 1; // Exit if invalid choice
    }

    printf("\nYour weight on that planet would be: %.2lf\n", weight);

    return 0;
}
