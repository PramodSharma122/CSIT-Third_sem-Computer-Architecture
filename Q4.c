// Q4. c program to design of encoder and decoders binary logical number.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void encode(char *message, int length) {
int i;
 for (i = 0; i < length; i++) {
 // Perform bitwise XOR operation on each character
 message[i] = message[i] ^ 1;
 }
}
void decode(char *message, int length) {
int i;
 for (i = 0; i < length; i++) {
 // Perform bitwise XOR operation again to reverse the encoding
 message[i] = message[i] ^ 1;
 }
}
int main() {
 char message[100];
 int length;
 printf("Enter a binary number: ");
 scanf("%s", message);
 length = strlen(message);
 // Encode the binary number
 encode(message, length);
 printf("Encoded number: %s\n", message);
 // Decode the binary number
 decode(message, length);
 printf("Decoded number: %s\n", message);
 return 0;
}