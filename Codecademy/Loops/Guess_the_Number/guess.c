#include <stdio.h>

int main() {

  int guess;
  int tries = 0;

  printf("I’m thinking of a number in the range 1-10.\n");
  printf("Try to guess it: ");
  scanf("%d", &guess);
  /*
  printf("Guess again!: ");
  scanf("%d", &guess);
  */
  // Write a while loop here:
  while (guess != 8 && tries < 50)
  {
    printf("Wrong guess, try again: ");
    scanf("%d", &guess);
    tries++;
  }
  
  // If the user took too long to guess, print a message
  if (tries > 50)
  {
    printf("You took too long to guess!\n");
  }

  if (guess == 8) 
  {
    printf("You got it!\n");
  }
}
