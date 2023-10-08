#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */

int main(void)
{
0-positive_or_negative.c int n, m;

0-positive_or_negative.c srand(time(0));
0-positive_or_negative.c n = rand() - RAND_MAX / 2;
0-positive_or_negative.c m = n % 10;
0-positive_or_negative.c if (m > 5)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is greater than 5\n", n, m);
0-positive_or_negative.c }
0-positive_or_negative.c else if (m < 6 && m != 0)
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
0-positive_or_negative.c }
0-positive_or_negative.c else
0-positive_or_negative.c {
0-positive_or_negative.c 0-positive_or_negative.c printf("Last digit of %d is %d and is 0\n", n, m);
0-positive_or_negative.c }
0-positive_or_negative.c return (0);
}
