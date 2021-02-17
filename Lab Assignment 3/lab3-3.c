/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a C Program that takes two integer arrays whose values are entered through the keyboard and then swaps them.
  Elements of first array shift to second array and vice versa.

*/

#include <stdio.h>

int main()
{

    int ary1[5] = { 1, 2, 3, 4, 5 };
    int ary2[5] = { 5, 4, 3, 4, 5 };
    int temp[5];

    for (int i = 0; i < 5; i++) {
        printf("DEFAULT in first array position %d is %d\n", i, ary1[i]);
    }

    printf("=================\n");

    for (int i = 0; i < 5; i++) {
        printf("DEFAULT in second array position %d is %d\n", i, ary2[i]);
    }

    printf("=================\n");
    printf("=================\n");
    printf("=================\n");

    for (int i = 0; i < 5; i++) {
        temp[i] = ary1[i];
        ary1[i] = ary2[i];
        ary2[i] = temp[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("In first array position %d is %d\n", i, ary1[i]);
    }

    printf("=================\n");

    for (int i = 0; i < 5; i++) {
        printf("In second array position %d is %d\n", i, ary2[i]);
    }
}
