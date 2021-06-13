#include <stdio.h>

int main(){
  int start = 10;
  int end = 80;

  int size = (end - start) / 2;
  int num[size];

  int j = 0;

  for(int i = start; i <= end; i++) {
    if (i % 2 != 0) {
      num[j] = i;
      j++;
    } 
  }
  
  for (int i = 0; i < size; i++) {
    printf("%d\n", num[i]);
  }

  return 0;
}