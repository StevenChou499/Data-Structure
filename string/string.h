#include <stdio.h>
#include <stdlib.h>

typedef char *string;

/* Assign a character array to string */
void strassign(string *str, char *source);

/* Copy source string contents into dest string and return the destination address */
void mystrcopy(string *dest, string source);

/* If string str exist, clear all the contents */
void clrstr(string *str);

/* Calculate the lenght of the string and return (exclude the terminating NULL byte) */
unsigned int mystrlen(string str);

/* If str1 > str2 return -1, if str1 = str2 return 0, else return 1 */
int mystrcmp(string str1, string str2);

/* dest = str1 + str2 */
void mystrcat(string *dest, string str1, string str2);

/* Print the stirng */
void printstr(string str);