/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  int average;

  printf("Enter mark 1:");
  scanf("%d", &m1);

  printf("Enter mark2:");
  scanf("%d", &m2);

  average = (m1+m2)/2;

  printf("Avergae is: %d", average);
  
  
  return 0;
}

