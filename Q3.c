// Q3. c program to Design of even parity generator and parity checker.

#include <stdio.h>
// Even Parity Generator
int generateEvenParity(int data) {
 int count = 0;
 int temp = data;
 while (temp != 0) {
 if (temp & 1)
 count++;
 temp = temp / 10;
 }
 return (count % 2 == 0) ? 0 : 1;
}
int main() {
 int data;
 int parity;
 printf("Enter data to generate even parity: ");
 scanf("%d", &data);
 parity = generateEvenParity(data);
 printf("Generated Parity: %d\n", parity);
 return 0;
}