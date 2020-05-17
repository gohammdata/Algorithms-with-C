/*
Finding if Array 'A' contains integer 't' via one loop
Linear Big O runtime of O(n).
*/

/*Importing*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h> //C import for bool


/*One Loop Search algorithm*/
int main(){

    //Input Array 'A' containing 't'
    int ArrayA[] = {0, 1, 2, 3, 4};
    int t = 3;

    //Tracker
    int i = 0;

    //Defining bool
    bool output[2] = {true, false};

    //One Loop Search
    for(i; i < 5; i++){
        if (ArrayA[i] == t){
            printf ("T exists in ArrayA at Element[%d] T is %d\n", i, ArrayA[i]);
            

        } else
        {
            printf ("T is not in ArrayA at Element[%d]. T is not %d\n", i, ArrayA[i]);
        
          
        }
        

    }
     return 0;
}