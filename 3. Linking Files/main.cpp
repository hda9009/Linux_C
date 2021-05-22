#include <iostream>
#include "dll.h"
#include "head.h"


using namespace std;

void mul(int a, int b)
{
	cout << "Multiply: " << a*b << endl;
}
/*
void div(int a, int b)
{
	cout << "Divide " << a/b << endl;
}
*/


int main()
{
	sum(1,2);
	subst(10, 5);
	mul(2,4);
	mod (10, 3);
	cal(2, 4, 6);
	//div(4,2);
/*
	for (int i = 0; i< 10; i++)
	{
		arr[i] = i*10;
	}

	for (int i = 0; i< 10; i++)
        {
                cout << "\nPtr: " << ptr[i];
        }
	cout << endl;
*/

}
