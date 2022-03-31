#include <iostream>
#include<random>
#include<string.h>
#include"Buffer.h"
using namespace std;
void f3() {// a program  to demonstrate the use of &(address of) and *(value at address) operator
	int m = 300;
	float	fx = 300.600006;
	char cht = 'z';
	int* mm = &m;
	float* fxx = &fx;
	char* chtt = &cht;
	cout << "pointer : Demonstrate the use of & and * operator :    ";
	cout << m;
	cout << fx;
	cout << cht;
	cout << "Using & operator :  ";
	cout << "address of m = " << &m;
	cout << "address of fx = " << &fx;
	cout << "address of cht = " << &cht;
	cout << "Using & and * operator :    ";
	cout << "value at address of m " << *(&m);
	cout << "value at address of fx" << *(&fx);
	cout << "value at address of cht" << *(&cht);
	cout << "using only pointer variable :    ";
	cout << "address of m = " << mm;
	cout << "address of fx = " << fxx;
	cout << "address of cht = " << chtt;
	cout << " Using only pointer operator :  ";
	cout << "value at address of m " << *mm;
	cout << "value at address of fx" << *fxx;
	cout << "value at address of cht" << *chtt;
}
void f14(int* arr, int size) {//sort an array using Pointer
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = *(arr+i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	}
	cout << "the sorted array: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
void f17(int* arr, int size) {// print the elements of an array in reverse order
	cout << " The elements of array in reverse order are :  "<<endl;
	for (int i = size - 1; i >= 0; i--)
	{
		cout << "element-" << i << " " << arr[i]<<endl;
	}
}
void f22(char* str) {//print a string in reverse using a pointer
	int k = 0;
	cout << "  Pointer : Print a string in reverse order :   ";
	char* temp = new char[strlen(str)+1];
	for (int i = strlen(str) -1; i >= 0; i--)
	{
		*(temp+k++)= *(str+i);
	}
	temp[k] = NULL;
	cout << " Reverse of the string is :" << temp;
	delete[]temp;
}
int main()
{
	int* fillbuffer = new int[BUFSIZE];
	int fillcnt = 0;
	int* processbuffer = NULL;
	int processcnt = 0;
	int tcount = 0;
	for (int i = 0; i < ITERATIONS; i++)
	{
		int* temp;
		if (getProb() <= 0.40)
		{
			temp = generateData(fillbuffer, fillcnt);
			if (temp != NULL)
				processbuffer = temp;
		}
		if (getProb() <= 0.60)

			processData(processbuffer, processcnt, tcount);
		cout << fillcnt << '\t' << processcnt << endl;
	}
	cout << "Total value: " << tcount << endl;
	return 0;
	char str[4] = "lov";
	f22(str);
}



