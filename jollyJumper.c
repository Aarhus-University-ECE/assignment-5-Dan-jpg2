#include "jollyjumper.h"
#include <stdbool.h>
// #include <malloc.h> // 
#include <stdlib.h>


// answer to 7.a
int isJollyJumber(const int seq[], int size) {

    bool diffs_found[size-1]; //Array to keep track of diff numbers in the sequence
    int diff; 
    
    for (int i = 0; i < size - 1; i++){ //Set all slots in array to false
        diffs_found[i] = false; 
    }

    for (int i = 1; i < size; i++){
        diff = abs(seq[i-1] - seq[i]);

        if(diff >= size || diff == 0) { //If true, cannot be a jolly jumper
            return 0;
        }
        if (diffs_found[diff-1] == false){ //If current diff has not been found, make it found
            diffs_found[diff-1] = true; 
        }
    }
    for(int i=0; i<size-1; i++){ //Check if any diff hasn't been found, if there is one missing it can't be a jolly jumper
        if(diffs_found[i]==false){
            return 0;
        }
    }
    return 1; //Otherwise all diffs are found and we have a jolly jumper.
}

