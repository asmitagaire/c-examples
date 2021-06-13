#include <stdio.h>

int main(){
  int start = 0;
  int end = 20;

  int size = (start + end)/2;
  int num[size];
  int a = 0;
  
  for(int i = start; i <= end; i++){
    if(i % 2 == 0){
      num [a] = i;
      a++;
    }
  }

  for (int i = 1 ; i < size; i++){
    printf("%d\n", num[i]);
  }
   
  return 0;
}

