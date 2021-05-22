#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>


// *************************************************** //

#include "dll.h"


int main()
{ 
    Person *person = (Person*)calloc (1, sizeof(Person));
    getDetails(person);
    printDetails(person);
}
       


    
