#include <stdio.h>
#include <stdlib.h>

int stackFunc(int counter) {
  int fav = 69;
  printf("stackFunc %p %p %p\n", &fav, &counter, __builtin_frame_address(0));
  return 0;
}

int main() {
  int i;
  printf("main %p %p\n", &i, __builtin_frame_address(0));
  stackFunc(10);
  return 0;
}
