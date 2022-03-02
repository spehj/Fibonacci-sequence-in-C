#include <stdio.h>
#include "fibonacci.h"

// Return array from function
int* fibonacci(const int count){
    // Get the value of the array
    int arrayLength = count;
    // Allocate enough memory for the array
    int *nums = (int*)malloc(arrayLength*sizeof(int));

    // First two numbers of the sequence
    int firstNum = 0;
    int secondNum = 1;

    // Counter variable
    int counter = 0;
    // Calculated number of the sequence
    int newNum = 0;

    while (counter <=count){

        if (counter == 0){
            nums[counter]=firstNum;
        }
        else if (counter ==1 ){
            nums[counter]=secondNum;
        }
        else {
            newNum = firstNum + secondNum;
            firstNum = secondNum;
            secondNum = newNum;
            nums[counter]=newNum;
        }
        counter++;
        
    }

    return (nums);
    
}