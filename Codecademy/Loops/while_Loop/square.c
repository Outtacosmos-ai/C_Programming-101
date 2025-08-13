#include <stdio.h>

int main() {

  int i = 9;
  int square = 9;

  // Write a while loop here:
  while (i >= 0)
  {
    printf("%d\t%d\n", i, i * square);
    i--;
    square--;
  }
}