
#include "dll.h"

void getDetails(Person *head)
{
        printf("Enter the name: ");	    
        scanf("%[^\n]%*c", head->name);
        printf("Enter the age: ");
    	scanf("%d", &head->age);
        printf("Enter the weight: ");
    	scanf("%d", &head->weight);
}


void printDetails(Person *head)
{
	printf("Name: %s, Age: %d, Weight: %d\n", head->name, head->age, head->weight);
}


