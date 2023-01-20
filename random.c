#include <stdio.h>
#include <stdlib.h>

char randchar(){
	int alpha = 25; //Number of letters in alphabet
	int start = 65;	//Decimal number where alphabetic characters start in the ASCII table
	int num = rand()%alpha + start; //Use the rand function modulo alpha to get numbers between 0 and 25. Then add to 65 to get numbers corresponding to letters in the ASCII table
	char c = '0' + num; //To convert the number to a char add '0' in char form
	return c; //Return the char
}
