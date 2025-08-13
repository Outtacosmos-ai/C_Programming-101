#include <stdio.h>

int main() {
    int number1 = 1, numbers_entered1 = 0;
    int number2 = 2, numbers_entered2 = 0;
    int exit_flag = 0; // flag to exit both loops

    while (numbers_entered1 < 10 && !exit_flag) {
        printf("Loop 1 - Please enter a number: ");
        scanf("%d", &number1);

        if (number1 <= 0) {
            exit_flag = 1;
            break;
        }

        while (number2 > 0 && numbers_entered2 < 10 && !exit_flag) {
            printf("Loop 2 - Please enter a number: ");
            scanf("%d", &number2);

            if (number2 <= 0) {
                exit_flag = 1;
                break;
            }
            numbers_entered2++;
        }

        numbers_entered1++;
    }

    printf("Good job! You’ve broken out!\n");
    return 0;
}
