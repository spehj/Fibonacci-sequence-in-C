#include <stdio.h>
#include "fibonacci.h"

int main(int argc, char** argv){

    // Enter how many fibonacci numbers you want
    int seqNum;
    printf("Enter number of fibonacci sequence: ");
    scanf("%d", &seqNum);

    // Create int pointer
    int *a;
    
    // Function that returns an array
    a = fibonacci(seqNum);

    // Address pointed to by *a
    printf("a: %d\n", a);
    // Value of the first element of where *a pointed to
    printf("*a: %d\n", *a);
    // Address of the a pointer itself
    printf("&a: %d\n", &a);


    // Print fibonacci sequence number in one line
    printf("Fibonacci sequence: ");
    for (int i=0; i<seqNum; i++){
        printf("%d ", a[i]);
    }

    printf("\n");
    
    
    
    return 0;
}