/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
  *(include the math.h header file)*

*/

#include <math.h>
#include <stdio.h>

int main()
{

    int degree;
    float ratio;
    const float pi = 3.14159;

    printf("Input angle in degree\n");
    scanf("%d", &degree);
    printf("\n");

    ratio = degree * (pi / 180.0);

    printf("Sin(%d) = %f\n", degree, sin(ratio));
    printf("Cos(%d) = %f\n", degree, cos(ratio));
    printf("tan(%d) = %f\n", degree, tan(ratio));
    printf("Cosec(%d) = %f\n", degree, 1 / sin(ratio));
    printf("Cosec(%d) = %f\n", degree, 1 / cos(ratio));
    printf("Cosec(%d) = %f\n", degree, 1 / tan(ratio));

    return 0;
}
