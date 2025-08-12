#include <stdio.h>

int main(void) {
    int numOfLoops = 100;
    float f_sum = 0.0f;
    double d_sum = 0.0;

    for (int i = 0; i < numOfLoops; i++) {
        f_sum += 0.1f;
        d_sum += 0.1;
    }

    printf("Float result:  %.10f\n", f_sum);
    printf("Double result: %.10lf\n", d_sum);
    return 0;
}
