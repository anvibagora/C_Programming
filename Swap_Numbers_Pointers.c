#include <stdio.h>

void swapWithPointers(int *x, int *y);

int main() {
    int a, b;
    int temp;
    printf("Enter numbers a and b: ");
    scanf("%d%d",&a,&b);

    //Without Pointers
    printf("Method 1: Without Pointers\n");
    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap:  a = %d, b = %d\n\n", a, b);


    //With Pointers 
    printf("Method 2: With Pointers (Function Call)\n");
    printf("Before swap: a = %d, b = %d\n", a, b);

    swapWithPointers(&a, &b);

    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}

void swapWithPointers(int *x, int *y) {
    int temp;
    
    temp = *x;  
    *x = *y;    
    *y = temp;  
}