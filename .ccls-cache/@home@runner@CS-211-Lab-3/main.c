#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//Test comment for Lab 13

  int i = 3; 
  int j = 2;

void print2Darray(int *ptr, int int1, int int2) {

  int *intPtr = ptr;
  int i = int1;
  int j = int2;
  
  for (int n = 0; n < i; ++n) {
    for (int u = 0; u < j; ++u) {
      printf("\n%d", intPtr[n * j + u]);
    }
  }
  free(ptr);
}

void make2Darray(int num1, int num2) {
  int i = num1, j = num2;
  
  int* intPtr = malloc(sizeof(int) * (i * j));

  for (int n = 0; n < i * j; ++n) {
    intPtr[n] = n + 1;
  }
  print2Darray(intPtr, i, j);
}

int main(void) {

  make2Darray(i, j);

  return 0;
}