#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Skip printing when i is 5
        }
        printf("%d\n", i);
    }
    return 0;
}
