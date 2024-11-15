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
  int num2, position2;
  printf("Please enter a number: ");
  scanf("%d", &num2);
  printf("Please enter a position: ");
  scanf("%d", &position2);
  int bitOn = ((num2 >> position2) | 1) << position2; // this line changes the bit 1 to o for example for 17 position 3: 00011000
  bitOn = num2 | bitOn; // add the changed bit to num 2 for example for 17 position 3 : 00011001
  int bitOff = ((num2 >> position2) & 0) << position2; //@@
  bitOff = num2 ^ bitOff; //@@
  printf("Number with bit %d set to 1: %d\n", position2, bitOn); // prints the new number with the bit that was changed
  printf("Number with bit %d set to 0: %d", position2, bitOff);


  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  int num3, position3;
  printf("Please enter a number: ");
  scanf("%d", &num3);
  printf("Please enter a number: ");
  scanf("%d", &position3);
  int onToOff = ((num3 >> position3) | 1) << position3;
  onToOff = num3 | onToOff;
  printf("Number with bit %d toggled: %d", position3, onToOff);

  
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
