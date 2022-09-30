#include <stdio.h>

float square_root(float n);

void main () {
  float n;
  
  printf("Enter the number: ");
  scanf("%f", &n);
  printf("\n");

  printf("Square root is: %f", square_root(n));

  getchar();
  return;
}

// babylonian method
float square_root(float n) {
  float x = n;
  float y = 1;
  float a = 0.000001;

  while ((x-y) > a) {
    x = (x + y) / 2;
    y = n / x;
  }

  return x;
}