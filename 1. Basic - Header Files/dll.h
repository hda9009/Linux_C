
#ifndef __DLL_H
#define __DLL_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>

typedef struct
{
	char name[30];
	int age;
	int weight;
}Person;


void getDetails(Person *head);
void printDetails(Person *head);

#define add(x,y)	(x+y)


//#include "dll.c"

#endif
