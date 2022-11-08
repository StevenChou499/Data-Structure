#include "string.h"

/* Assign a character array to string */
void strassign(string str, char *source) {
    char *tmp = source;
    unsigned int length = 0;
    while (*tmp)
        length++;
    *str = malloc(sizeof(char) * (length + 1));
    for (unsigned int i = 0; i < length; i++)
        *(*str + i) = *(source + i);
    *(*str + length) = '\0';
    return;
}

/* Copy source string contents into dest string and return the destination address */
char *strcopy(string dest, string source) {
    char *tmp = *source;
    unsigned int length = 0;
    while (*tmp)
        length++;
    *dest = malloc(sizeof(char) * (length + 1));
    for (unsigned int i = 0; i < length; i++)
        *(*dest + i) = *(*source + i);
    *(*dest + length) = '\0';
    return;
}

/* If string str exist, clear all the contents */
void clrstr(string str) {
    if (*str)
        free(*str);
    return;
}

/* Calculate the lenght of the string and return (exclude the terminating NULL byte) */
unsigned int strlen(string str) {
    char *tmp = *str;
    unsigned int length = 0;
    while (*tmp) {
        length++;
        tmp++;
    }
    return length;
}

/* If str1 > str2 return -1, if str1 = str2 return 0, else return 1 */
int strcmp(string str1, string str2);

/* dest = str1 + str2 */
void strcat(string dest, string str1, string str2);

/* Print the stirng */
void printstr(string str) {
    printf("%s\n", *str);
    return;
}