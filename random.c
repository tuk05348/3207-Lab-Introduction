//Niaz Baharudeen
//3207 Lab Section 004
//3207 Lab Introduction: randchar() function file for converting a random int into a char
#include <stdio.h>
#include <stdlib.h>

char randchar(){
	int alpha = 25; //Number of letters in alphabet
	int start = 65;	//Decimal number where alphabetic characters start in the ASCII table
	int num = rand()%alpha + start; //Use the rand function modulo alpha to get numbers between 0 and 25. Then add to 65 to get numbers corresponding to letters in the ASCII table
	char c = num; //num is already a digit between 65 and 90 thus we can directly convert it to a char
	return c; //Return the char
}
