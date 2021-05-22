#include "B.h"
#include "B.h"
#include <stdio.h>

#define subs(a,b)	(a-b)


int main()
{
	int a;
	a = MUL(2,4);
	printf("%d\n",a);
	int b;
        b = ADD(5,10);
        printf("%d\n",b);
	int c;
        c = subs(4,2);
        printf("%d\n",c);
}

