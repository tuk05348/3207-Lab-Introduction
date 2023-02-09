# 3207-Lab-Introductin
Niaz Baharudeen
Lab Section 004
20 January 2023

For this assignment, we utilize the rand() function to generate a number which we use to generate a random alphabetic character. This is done by generating a random
number in the range of 65 to 90. This corresponds to the decimal values of the alphabetic characters on the ASCII table. We then cast the returned integer to a char
to covert it to a character.

The function is kept in its own file, random.c, and has its own header file, random.h. That header is referenced in the preprocessor directives of the main program.
The function file is compiled separately, we then link its output file with the compilation of the main program to be able to use the function and thus generate the
random characters.
