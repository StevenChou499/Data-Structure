#include "string.h"

int main(void)
{
    char source1[] = "I like";
    char source2[] = " to learn.";
    string str1, str2, str3;
    strassign(&str1, source1);
    strassign(&str2, source2);
    printf("str1 is :");
    printstr(str1);
    printf("The length of str1 is %u\n", mystrlen(str1));
    printf("str2 is :");
    printstr(str2);
    printf("The length of str2 is %u\n", mystrlen(str2));
    printf("Concatenating str1 and str2...\n");
    mystrcat(&str3, str1, str2);
    printf("str3 is :");
    printstr(str3);
    clrstr(&str1);
    clrstr(&str2);
    clrstr(&str3);
    return 0;
}