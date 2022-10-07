#include <stdio.h>
int main() {
  int number;
  int flag = 0; // Not a prime number

  printf("Please enter an integer greater than 2 and less than 10000 to test its primality\n");
  scanf("%d", &number);

  while (1) {
    if (number > 2 && number < 10000) // range of input validation
    {
      int x;
      x = number / 2;
      for (int i = 2; i <= x;
           i++) // 
      {
        if (number % i == 0) {
          flag = 1; // not a prime
          break;
        }
      }
      //  it is prime or not
      if (flag == 0)
        printf("%d is a prime number!\n", number);
      else
        // The flag value is 1
        printf("%d is not a prime number!\n", number);
      break;
    } else {
      printf("Please enter an integer greater than 2 and less than 10000 to test its primality\n");
      scanf("%d", &number);
    }
  }
}
