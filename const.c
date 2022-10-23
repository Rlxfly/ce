#include <stdio.h>

int main(void) {
  const int num = 5; // tidak bisa di ubah lgi karena sudah di declare
  printf("%d\n", num);
  num = 8; // err
  printf("%d\n", num);

  return 0;
}
