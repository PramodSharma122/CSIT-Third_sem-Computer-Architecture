// Q6. c program to Design of registers and memory implementation.
 
#include <stdio.h>
#include <stdlib.h>
#define MEMORY_SIZE 20 // Size of the memory
#define REGISTER_COUNT 8 // Number of registers
int registers[REGISTER_COUNT]; // Array to store register values
int memory[MEMORY_SIZE]; // Array to represent memory
void initializeRegisters() {
int i;
for (i = 0 ; i < REGISTER_COUNT ; i++) 
{
 registers[i] = 0;
 }
}
void initializeMemory() {
int i;
 for (i = 0; i < MEMORY_SIZE; i++) {
 memory[i] = 0;
 }
}
void printRegisters() {
 printf("Registers:\n");
 int i;
 for (i = 0; i < REGISTER_COUNT; i++) {
 printf("R%d: %d\n", i , registers[i]);
 }
 printf("\n");
}
void printMemory() {
 printf("Memory:\n");
 int i;
 for (i = 0; i < MEMORY_SIZE; i++) {
 printf("M[%d]: %d\n", i, memory[i]);
 }
 printf("\n");
}
void setRegisterValue(int registerIndex, int value) {
 if ( registerIndex >= 0 && registerIndex < REGISTER_COUNT) {
 registers[registerIndex] = value;
 } else {
 printf("Invalid register index.\n");
 }
}
int getRegisterValue(int registerIndex) {
 if (registerIndex >= 0 && registerIndex < REGISTER_COUNT) {
 return registers[registerIndex];
 } else {
 printf("Invalid register index.\n");
 return -1; // Return an invalid value
 }
}
void setMemoryValue(int memoryIndex, int value) {
 if (memoryIndex >= 0 && memoryIndex < MEMORY_SIZE) {
 memory[memoryIndex] = value;
 } else {
     printf("Invalid memory index.\n");
 }
}
int getMemoryValue(int memoryIndex) {
 if (memoryIndex >= 0 && memoryIndex < MEMORY_SIZE) {
 return memory[memoryIndex];
 } else {
 printf("Invalid memory index.\n");
 return -1; // Return an invalid value
 }
}
int main() {
 initializeRegisters();
 initializeMemory();
 setRegisterValue(0, 42);
 setMemoryValue(10, 100);
 printf("Register 0 value: %d\n", getRegisterValue(0));
 printf("Memory location 10 value: %d\n", getMemoryValue(10));
 printRegisters();
 printMemory();
 return 0;
}