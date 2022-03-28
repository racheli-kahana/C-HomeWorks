#include <iostream>
using namespace std;
//racheli kahana part1
//20
//Swap adjacent bits of a number
int SwapBits(int num) {
	return (((num & 0xAAAAAAAA) >> 1)|((num & 0x55555555) << 1));
}
//23
//Given two positive integers n and k, 
//perform a circular shift on the binary representation of n by k positions
int CircularShift(unsigned n, int k, char* leftOrright) {
	if (leftOrright == "left")
		return n << k|n>>(sizeof(int)*8 -k);
	else
		return n >> k | n <<(sizeof(int)* 8 - k);;
}
//24
//Given two integers, find their XOR without using the XOR operator
unsigned XorOperator(unsigned n1, unsigned n2) {
	return (n1 | n2) - (n1 & n2);
}
//41
//Find the square of a number without using the multiplicationand division operator
int Squre(int num)
{
	int result = 0;
	for (int i = 0; i < num; i++)
	{
		result += num;
	}
	return result;
}
//47
//Find minimum or maximum of two integers without using branching
int FindMinimum(int num1, int num2) {
	if (num1 + ((~num2) + 1) > 0) return num2;
	else
	return num1;
}
int FindMaximum(int num1, int num2) {
	if (num1 + ((~num2) + 1) > 0) return num1;
	else
		return num2;
}
int main()
{
}
