/*
  Khaldoon Mutahar (61930208)
  CSCI250 - Introduction to Programming
  Mr. Omar Al-Fakih

  Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, ø).
  Hint: r = sqrt ( x2 + y2 ) and ø= tan-1 ( y / x )  *(include the math.h header file)*

*/

#include <math.h>
#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter Cartesian co-ordinates (x,y) to convert into polar co-ordinates \n");

    printf("Enter the X Value\n");
    scanf("%f", &x);

    printf("Enter the Y Value\n");
    scanf("%f", &y);

    float r, o;
    r = sqrt(x * x + y * y);

    o = atan(y / x);

    printf("The polar co-ordinates of (%f,%f) is (%f, %f)", x, y, r, o);

    return 0;
}
