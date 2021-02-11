/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Two numbers are entered through the keyboard.
  Write a program to find the value of one number raised to the power of another.

*/

#include <stdio.h>

int main()
{
    int num, pow, total = 1;

    printf("Enter a number\n");
    scanf("%d", &num);

    printf("Enter a power\n");
    scanf("%d", &pow);

    for (int i = 1; i <= pow; i++) {
        total = total * num;
    }

    printf("%d\n", total);

    return 0;
}
