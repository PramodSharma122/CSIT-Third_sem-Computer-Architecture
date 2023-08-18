// Q7. c program to Design of ALU implementation.

#include <stdio.h>
// ALU operations
#define ADD 1
#define SUBTRACT 2
#define MULTIPLY 3
#define DIVIDE 4
int main() {
 int operation = ADD; // ALU operation to perform
 int operand1 = 10; // First operand
 int operand2 = 5; // Second operand
 int result; // ALU result
 // ALU operation
 switch (operation) {
 case ADD:
 result = operand1 + operand2;
 break;
 case SUBTRACT:
 result = operand1 - operand2;
 break;
 case MULTIPLY:
 result = operand1 * operand2;
 break;
 case DIVIDE:
 if (operand2 != 0) {
 result = operand1 / operand2;
 } else {
 printf("Error: Division by zero\n");
 return 1;
 }
 break;
 default:
 printf("Invalid operation\n");
 return 1;
 }
 // Print the ALU result
 printf("Result: %d\n", result);
 return 0;
}