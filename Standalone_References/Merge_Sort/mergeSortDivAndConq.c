/*Importing*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

/*Merge Sort Algrotithm - Divide and Conquer with no Implementation*/
int main() {

    //Defining output array containing 10 ints
    int output_array[10];
    
    //Defining input arrays, sorted seperately before to start out. Will work back to an unsorted array
    //then work back to unsorted large user input responsive array to split into two.
    int input_array1[5] = {2, 3, 5, 7, 9};
    int input_array2[5] =  {1, 4, 6, 8, 10};

    //Starting pointers for the for loop 
    int k = 0;
    int i = 0;
    int j = 0;

    //Output pointer array
    int o = 0;

    //For loop to sort the output array
    //Traditional merge-sort has n as the length for now it's 9 (0-9)
    //K can also just be set to 0 in this loop "for ( k = 0, ....)"
    for ( k; k < 10; k++) {
        if (input_array1[i] < input_array2[j]) {
            output_array[k] = input_array1[i];
            i++;
        } else if(input_array2[j] < input_array1[i]) { //else if used (vs else) to prepare for end cases
            output_array[k] = input_array2[j];
            j++;
        }

    // Need end case for last integer in array - notes below:

    /* 
    i pointer goes 1 position past array to an undefined
    which is registering as 0 making the last output 0 rather 
    than 10 (if 1 past it then goes to 10)
    */
    }

    //For loop to print the output array to see test if it is sorted
    for (o; o < 10; o++) {
        printf("Element[%d] = %d\n", o, output_array[o]);
    }

    return 0;

    /*
    Current Result on compile: 
    Element[0] = 1
    Element[1] = 2
    Element[2] = 3
    Element[3] = 4
    Element[4] = 5
    Element[5] = 6
    Element[6] = 7
    Element[7] = 8
    Element[8] = 9
    Element[9] = 0 - should be 10.
    */
}