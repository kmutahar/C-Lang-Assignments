/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Using conditional operators determine:
   1. Whether the character entered through the keyboard is a lower-case alphabet or not.
   2. Whether a character entered through the keyboard is a special symbol or not.

*/

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character to classify it.\n");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("The Letter %c is an Upper Case Letter", c);
    } else if (c >= 'a' && c <= 'z') {
        printf("The Letter %c is a Lower Case Letter", c);
    } else {
        printf("%c is a special Character", c);
    }

    return 0;
}
