#include "string.h"

/* Assign a character array to string */
void strassign(string *str, char *source) {
    char *tmp = source;
    unsigned int length = 0;
    while (*tmp) {
        length++;
        tmp++;
    }
    *str = malloc(sizeof(char) * (length + 1));
    for (unsigned int i = 0; i < length; i++)
        *(*str + i) = *(source + i);
    *(*str + length) = '\0';
    return;
}

/* Copy source string contents into dest string and return the destination address */
void mystrcopy(string *dest, string source) {
    char *tmp = source;
    unsigned int length = 0;
    while (*tmp)
        length++;
    *dest = malloc(sizeof(char) * (length + 1));
    for (unsigned int i = 0; i < length; i++)
        *(*dest + i) = *(source + i);
    *(*dest + length) = '\0';
    return;
}

/* If string str exist, clear all the contents */
void clrstr(string *str) {
    if (*str)
        free(*str);
    return;
}

/* Calculate the lenght of the string and return (exclude the terminating NULL byte) */
unsigned int mystrlen(string str) {
    char *tmp = str;
    unsigned int length = 0;
    while (*tmp) {
        length++;
        tmp++;
    }
    return length;
}

/* If str1 > str2 return -1, if str1 = str2 return 0, else return 1 */
int mystrcmp(string str1, string str2) {
    char *tmp1 = str1, *tmp2 = str2;
    while(*tmp1 && *tmp2) {
        if (*tmp1 > *tmp2)
            return -1;
        else if (*tmp1 < *tmp2)
            return 1;
        tmp1++;
        tmp2++;
    }

    if (*tmp1)
        return -1;
    if (*tmp2)
        return 1;
    return 0;
}

/* dest = str1 + str2 */
void mystrcat(string *dest, string str1, string str2) {
    unsigned len1 = mystrlen(str1);
    unsigned len2 = mystrlen(str2);
    *dest = malloc(sizeof(char) * (len1 + len2 + 1));
    for (unsigned int i = 0; i < len1; i++)
        *(*dest + i) = *(str1 + i);
    for (unsigned int i = len1; i < len1 + len2; i++)
        *(*dest + i) = *(str2 + (i - len1));
    *(*dest + (len1 + len2)) = '\0';
    return;
}

/* Print the stirng */
void printstr(string str) {
    printf("%s\n", str);
    return;
}