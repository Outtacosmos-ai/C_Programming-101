#include <stdio.h>

int main() {
    int appleQuantity;
    double applePrice = 1.49;
    double appleReview;
    int appleReviewDisplay;
    const char appleLocation = 'F';
    int dayOfWeek = 0;
    int daysToAdd = 2;

    appleQuantity = 23;

    // Correct average review score calculation (now includes the new review)
    appleReview = (823.0 + 52) / 10.0;
    appleReviewDisplay = (int)appleReview;

    // Update day of week before the if
    dayOfWeek += daysToAdd;

    // Sale condition: either it's day 3 or we have fewer than 10 apples
    if (dayOfWeek == 3 || appleQuantity < 10)
    {
      printf("Sale on apples today, today only they are: $%.2f\n", applePrice * 0.9);
    }

    // Final info output
    printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

    return 0;
}
