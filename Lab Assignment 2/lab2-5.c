/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to print all the ASCII values and their equivalent characters using a while loop.
  The ASCII values vary from 0 to 255.

*/

#include <stdio.h>

int main()
{
    for (int i = 0; i < 255; i++) {
        printf("ASCII value %d is equivalent to  %c \n", i, i);
    }

    return 0;
}
