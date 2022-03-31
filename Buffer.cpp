#include "Buffer.h"
#include <random>
double getProb() {
	float output = (float)(rand() / (float)RAND_MAX);
	return output;
}
int* generateData(int*& inbuf, int& count) {
	int num = rand() % 10;
	if (count < BUFSIZE)
	{
		inbuf[count++] = num;
		return NULL;
	}
	int* temp = inbuf;
	inbuf = (int*)malloc(sizeof(int) * BUFSIZE);
	count = 0;
	return temp;
}
void processData(int*& outbuf, int& count, int& total) {
	if (outbuf == NULL)
		return;
	if(count< BUFSIZE)
	total += outbuf[count++];
	else {
		count = 0;
		free(outbuf);
		outbuf = NULL;
	}
}
