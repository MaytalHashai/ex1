/******************
Name:
ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  /*Scan two integers (representing number and a position)
Print the bit in this position. */
  int num1, position1;
  printf("Enter a number: ");
  scanf("%d", &num1);
  printf("Enter a position ");
  scanf("%d", &position1);
  int res = (num1 >> position1) & 1;
  printf("The bit in position %d of number %d is: %d\n", num1, position1, res);
  // printf("What bit:\n"); @@

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  int num2, position2, num_with_1_add, num_with_0_add;
  printf("Please enter a number: ");
  scanf("%d", &num2, &num_with_1_add, &num_with_0_add);
  printf("Please enter a position: ");
  scanf("%d", &position2);
  int turn_on1 = ((num_with_1_add >> position2) & 1) | 1;
  num_with_1_add = num2 | (turn_on1 << position2);
  int turn_off = (num_with_0_add >> position2) & 0;
  num_with_0_add = num2 ^ (turn_off << position2);
  printf("Number with bit %d set to 1: %d\n", position2, num_with_1_add);
  printf("Number with bit %d set to 0: %d", position2, num_with_0_add);

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  
  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
