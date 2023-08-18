// Q5. c program to Design of multiplexer.

#include <stdio.h>
int multiplexer(int input0, int input1, int input2, int input3, int control) {
 int output;
 switch (control) {
 case 00:
 output = input0;
 break;
 case 01:
 output = input1;
 break;
 case 10:
 output = input2;
 break;
 case 11:
 output = input3;
 break;
 default:
 printf("Invalid control signal!\n");
 output = -1; // Return -1 for error case
 break;
 }
 return output;
}
int main() {
 int input0, input1, input2, input3, control;
 printf("Enter input0: ");
 scanf("%d", &input0);
 printf("Enter input1: ");
 scanf("%d", &input1);
 printf("Enter input2: ");
 scanf("%d", &input2);
 printf("Enter input3: ");
 scanf("%d", &input3);
 printf("Enter control signal (0-3): ");
 scanf("%d", &control);
 int output = multiplexer(input0, input1, input2, input3, control);
 if (output != -1) {
 printf("Output: %d\n", output);
 }
 return 0;
}