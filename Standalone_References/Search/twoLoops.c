/*
Finding if Array 'A' contains integer 't' via one loop and if not does Array 'B' contain it.

Still Linear Big O runtime of O(n) like oneLoop but in this case n will be larger causing slower
runtime. Showing what is wrong with this method as hinted at in oneLoop.c but still has big O(n)
rather than writing a search algorithm with say a O(logn) runtime for large sets.
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
    int ArrayB[] = {5, 6, 7, 8, 9};
    int t = 8;

    //Tracker
    int i;

    //Defining bool
    //bool output[2] = {true, false};

    //Two Loop Search
    for(i=0; i < 5; i++){
        if (ArrayA[i] == t){
            printf ("T exists in ArrayA at Element[%d] T is %d\n", i, ArrayA[i]);
            

        } else
        {
            printf ("T is not in ArrayA at Element[%d]. T is not %d\n", i, ArrayA[i]);
        
          
        }

    }
    for(i=0; i < 5; i++){
        if (ArrayB[i] == t){
            printf ("T exists in ArrayB at Element[%d] T is %d\n", i, ArrayB[i]);
            

        } else
        {
            printf ("T is not in ArrayB at Element[%d]. T is not %d\n", i, ArrayB[i]);
        
          
        }
        

    }
     return 0;
}