#include <stdio.h>

/*
Program to convert a date from mm/dd/yyyy to 'Month DaySuffix, Year.' format
*/
int main(void)
{
    int month, day, year;

    printf("Enter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    // Validate month
    if (month < 1 || month > 12)
    {
        printf("Invalid month\n");
        return 1;
    }

    // Print month name
    switch (month)
    {
        case 1:  printf("January ");   break;
        case 2:  printf("February ");  break;
        case 3:  printf("March ");     break;
        case 4:  printf("April ");     break;
        case 5:  printf("May ");       break;
        case 6:  printf("June ");      break;
        case 7:  printf("July ");      break;
        case 8:  printf("August ");    break;
        case 9:  printf("September "); break;
        case 10: printf("October ");   break;
        case 11: printf("November ");  break;
        case 12: printf("December ");  break;
    }
    
    // Validate day
    if (day < 1 || day > 31)
    {
        printf("Invalid day\n");
        return 1;
    }

    // Determine ordinal suffix for the day
    switch (day)
    {
        case 1: case 21: case 31:
            printf("%dst, ", day);
            break;
        case 2: case 22:
            printf("%dnd, ", day);
            break;
        case 3: case 23:
            printf("%drd, ", day);
            break;
        default:
            printf("%dth, ", day);
            break;
    }

    // Print year
    printf("%d.\n", year);

    return 0;
}
