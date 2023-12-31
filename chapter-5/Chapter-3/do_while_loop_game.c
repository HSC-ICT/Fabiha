// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);

    sum += number;
  }
  while(number != 0.0);
  // 0 == 0 // true
  // 0 != 0 // false

  printf("Sum = %.2lf\n",sum);

  return 0;
}