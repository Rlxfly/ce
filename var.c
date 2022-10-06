#include <stdio.h>

int main(void) {
  char name[] = "Re7";
  int age = 16; // Only number
  printf("Hello Im %s!\n", name);
  printf("My age is %d old's\n", age);

  age = 17;
  printf("In the next b'day im %d old's", age);
  return 0;
}
