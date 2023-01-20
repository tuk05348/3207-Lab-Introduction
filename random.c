#include <stdio.h>
#include <stdlib.h>

char randchar(){
	int alpha = 25;
	int start = 65;
	int num = rand()%alpha + start;
	char c = itoa(num);
	return c;
}
