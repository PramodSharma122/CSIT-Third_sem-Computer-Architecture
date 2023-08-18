// Q1. Dsigne of n-bit 2`s complement adder/subtractor.

#include<stdio.h>
void towsComplementAdder(int a[],int b[],int n,int sum[]);
void twosComplementSubtractor(int a[],int b[],int n,int diff[]);
void displayBinaryNumber(int arr[],int n);
int main() {
    int n;
    int i;
    printf("Enter the number of bits:");
    scanf("%d",&n);

    int a[n],b[n],sum[n],diff[n];

    printf("Enter the first binary number:");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the second binary number:");
    for(i=0;i<n;i++) {
    scanf("%d",&b[i]);
    }
    printf("\nPerforming 2`s complement addition:");
    towsComplementAdder(a,b,n,sum);
    displayBinaryNumber(sum,n);

    printf("\nPerforming 2`s complement subtrection:");
    twosComplementSubtractor(a,b,n,diff);
    displayBinaryNumber(diff,n);

    return 0;
}

void towsComplementAdder(int a[],int b[],int n,int sum[]) {
    int carry=0,i;

    for(i=n-1;i>=0;i--) {
        int temp=a[i]+b[i]+carry;
        sum[i]=temp %2;
        carry=temp/2;
    }
}

void twosComplementSubtractor(int a[],int b[],int n,int diff[]) {
    int carry = 1,i;

    for(i=n-1;i>=0;i--) {
        int temp=a[i]+(1-b[i])+carry;
        diff[i]=temp%2;
        carry=temp/2-1;
    }
}
void displayBinaryNumber(int arr[],int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("%d",arr[i]);
    }
    printf("\n");
}