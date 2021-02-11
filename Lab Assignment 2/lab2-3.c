/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to find the factorial value of any number entered through the keyboard.

*/

#include <stdio.h>

int main()
{

    int num, i = 1, fact = 1;

    printf("Enter number to find factorial.\n");

    scanf("%d", &num);

    do {
        fact = fact * i;
        i++;
    } while (i <= num);

    printf("The Factorial of %d is %d", num, fact);

    return 0;
}
