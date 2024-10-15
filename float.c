#include <stdio.h>

int main() {
  float myFloatNum = 3.5;

  printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
  printf("%.1f\n", myFloatNum); // Only show 1 digit
  printf("%.2f\n", myFloatNum); // Only show 2 digits
  printf("%.4f\n", myFloatNum);   // Only show 4 digits
  printf("%.lf\n", myFloatNum);   // Only show 4 reason my value is 3.5 
  return 0;
}