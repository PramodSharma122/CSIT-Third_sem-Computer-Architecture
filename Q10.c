// Q10.C program for binary division.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Function to perform binary multiplication
// Function to perform binary division
char* binaryDivision(const char* binary1, const char* binary2) {
 int length1 = strlen(binary1);
 int length2 = strlen(binary2);
 // Check for division by zero
 if (length2 == 1 && binary2[0] == '0') {
 printf("Error: Division by zero\n");
 return NULL;
 }
 // Check if dividend is smaller than divisor
 if (strcmp(binary1, binary2) < 0) {
 char* result = (char*)malloc(2 * sizeof(char));
 result[0] = '0';
 result[1] = '\0';
 return result;
 }
 int resultLength = length1 - length2 + 1;
 char* result = (char*)malloc((resultLength + 1) * sizeof(char));
 result[resultLength] = '\0';
 char* remainder = (char*)malloc((length1 + 1) * sizeof(char));
 strcpy(remainder, binary1);
 // Perform binary division
 int i,j;
 for (i = 0; i < resultLength; i++) {
 if (remainder[i] == '0') {
 result[i] = '0';
 } else {
 result[i] = '1';
 for (j = 0; j < length2; j++) {
 remainder[i + j] = (remainder[i + j] == binary2[j]) ? '0' : '1';
 }
 }
 }
 return result;
}
int main() {
 const char* binary1 = "1101";
 const char* binary2 = "101";
 // Perform binary division
 char* divisionResult = binaryDivision(binary1, binary2);
 if (divisionResult != NULL) {
 printf("Division Result: %s\n", divisionResult);
 free(divisionResult);
 }
 return 0;
}