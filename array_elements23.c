// Program to demonstrate an array with 10 integer elements initialization and printing their value.
#include <stdio.h>

int main() {
  int values[10];

  printf("Enter 10 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 10; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 10; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
} 