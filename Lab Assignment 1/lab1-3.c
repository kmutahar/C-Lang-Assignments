/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to check whether a triangle is valid or not,
  when the three angles of the triangle are entered through the keyboard.
  A triangle is valid if the sum of all the three angles is equal to 180 degrees.

*/

#include <stdio.h>

int main()
{

    int a, b, c, sum;

    printf("Enter the values of the triangles 3 angles\n\n");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    if (sum == 180) {
        printf("Total sum of all angles is %d which means this triangle is valid \n\n\n", sum);
    } else {
        printf("Total sum of all angles is %d which means this triangle is NOT valid \n\n\n", sum);
    }

    main();

    return 0;
}
