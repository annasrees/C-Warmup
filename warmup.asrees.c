/**
 * Anna Rees
 * Operating Systems Warmup Assignment
 * 23 Jan 2024
 */
#include "warmup.asrees.h"
#include <string.h>
#include <stdlib.h>

//first function
Collectible *createCollectible(char *name, unsigned int value, unsigned int weight){
    //check if inputs are valid - returns NULL if conditions not met
    if(name == NULL || strlen(name) == 0 || strlen(name) > MAX_NAME_LENGTH || value <= 0 || weight <= 0) {
        return NULL;
    }
    //inputs are valid, allocate and return a Collectible structure
    Collectible *newColl = (Collectible*)malloc(sizeof(Collectible));
    //allocating memory for the newColl name
    strcpy(newColl->name, name);

    newColl->value = value;
    newColl->weight = weight;

    return newColl;
}

//Second function
int compareCollectibles(Collectible *collectibleOne, Collectible *collectibleTwo){
    if(collectibleOne->value < collectibleTwo->value){
        return -1;
    }
    else if(collectibleOne->value > collectibleTwo->value) {
        return 1;
    }
    else{ //values are equal
        int res = strcmp(collectibleOne->name, collectibleTwo->name);
        return(res);
    }
}