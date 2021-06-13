#include <stdio.h>

int main() {
  for (int row = 3; row >= 1; row--) {
    for (int col = 1; col <= row; col++) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  for (int row = 3; row > 0; row--) {
    for (int col = row; col > 0; col--) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}