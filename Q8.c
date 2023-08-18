// Q8. c program to Design of CPU implementation. 

#include <stdio.h>
// Control signals
#define FETCH 3
#define DECODE 2
#define ADDITION 3
#define HALT 4
int main() {
 int program[] = {FETCH, DECODE, ADDITION, HALT}; // Sample program
 // Registers
 int pc = 0; // Program Counter
 int ir = 0; // Instruction Register
 int mar = 0; // Memory Address Register
 int mdr = 0; // Memory Data Register
 int accumulator = 0; // Accumulator register
 int operand = 5; // Operand for addition
 // Control unit
 int running = 1; // Flag to indicate if the program is running
 
 // Fetch
 mar = pc; // Load the program counter into the memory address register
 mdr = program[mar]; // Fetch the instruction from memory
 ir = mdr; // Store the instruction in the instruction register
 pc++; // Increment the program counter
 // Decode
 // Additional decoding and register manipulation can be performed here based on the instruction set
 // Execute
 switch (ir) {
 case ADDITION:
 accumulator += operand; // Perform addition operation
 break;
 case HALT:
 running = 0;
 break;
 default:
 // Handle unsupported instructions or errors
 printf("Invalid instruction\n");
 running = 0;
 break;
 }
 // Print the final result
 printf("Result: %d\n", accumulator);
 return 0;
}