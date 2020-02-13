#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	printf("\n\n\t\t+---------+------+------------------------------+\n");
	printf("\t\t|  Type   | Byte |      Range of values         |\n");
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| boolean | %db   | true-false                   |\n", sizeof(bool));
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| char    | %db   | %d-%d                     |\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| short   | %db   | %d-%d                 |\n", sizeof(short), SHRT_MIN, SHRT_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| int     | %db   | %d-%d       |\n", sizeof(int), INT_MIN, INT_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| long    | %db   | 0-%lu                 |\n", sizeof(long), ULONG_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| float   | %db   | %e-%e    |\n", sizeof(float), FLT_MIN, FLT_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	printf("\t\t| double  | %db   | %e-%e  |\n", sizeof(double), DBL_MIN, DBL_MAX);
	printf("\t\t+---------+------+------------------------------+\n");
	return 0;
}