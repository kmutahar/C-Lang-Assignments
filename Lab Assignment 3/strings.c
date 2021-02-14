#include <stdio.h>
#include <string.h>

int k_strlen();
int k_strlwr();
int k_strupr();
int k_strcat();
int k_strncat();
int k_strrev();
int k_strset();
int k_strnset();

int main()
{
    char string1[100];
    char string2[100];
    scanf("%s", string1);
    scanf("%s", string2);

    k_strlen(string1, string2);
    printf("\n\n");
    k_strlwr(string1, string2);
    printf("\n\n");
    k_strupr(string1, string2);
    printf("\n\n");
    k_strrev(string1, string2);
    printf("\n\n");
    k_strncat(string1, string2);
    printf("\n\n");
    k_strset(string1, string2);
    printf("\n\n");
    k_strcat(string1, string2);
    printf("\n\n");
}

int k_strlen(const char a[100], const char b[100])
{
    printf("Length of string string 1: %d\n", strlen(a));
    printf("Length of string string 2: %d\n", strlen(b));
}

int k_strlwr(const char a[100], const char b[100])
{
    printf("The lowercase of 1 is : %s\n", strlwr(a));
    printf("The lowercase of 2 is : %s\n", strlwr(b));
}

int k_strupr(const char a[100], const char b[100])
{
    printf("The uppercase of string 1 is : %s\n", strupr(a));
    printf("The uppercase of string 2 is : %s\n", strupr(b));
}

int k_strcat(const char a[100], const char b[100])
{
    printf("Appends one string at the end of another is: %s\n", strcat(a, b));
}

int k_strncat(const char a[100], const char b[100])
{
    printf("Enter number of letters to append to string\n");
    int n;
    scanf("%d", &n);
    printf("Appends first %d characters at the end of another: %s\n", n, strncat(a, b, n));
}

int k_strrev(const char a[100], const char b[100])
{
    printf("Revers of the first string is : %s\n", strrev(a));
    printf("Revers of the second string is : %s\n", strrev(b));
}

int k_strset(const char a[100], const char b[100])
{

    printf("All first string  will be # : %s\n", strset(a, '#'));
    printf("All second string  will be $ : %s\n", strset(b, '$'));
}

int k_strnset(const char a[100], const char b[100])
{
    printf("Enter number of char to set\n");
    int c1;
    scanf("%d", &c1);
    printf("set number %d char in first string  will be # : %s\n", strnset(c1, a, '#'));

    printf("Enter number of char to set\n");
    int c2;
    scanf("%d", &c2);
    printf("set number %d char in second string  will be $ : %s\n", strnset(c2, b, '$'));
}
