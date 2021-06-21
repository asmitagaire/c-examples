#include <stdio.h>
// this is pre-processer approach
// #define uint unsigned int

// this is c approach
typedef unsigned int uint;

int main() {
  uint num;
  printf("Enter a number: ");
  scanf("%d", &num );

  printf("Factors of the number: \n");
  if(num <= 0){
    printf("Sorry,this num is invalid . Try again.\n");
    // return 0;
    return 0;
  }

  for(uint i = 1; i <= num; i++){
    if (num % i == 0) {
      printf(" %d ", i);
    }
  }
  printf("\n");
  return 0;
}
  
