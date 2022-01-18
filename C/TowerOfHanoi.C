#include <stdio.h>

void hanoi(char, char, char, int);

int main(void)
{
	int num;
	printf(" Enter the number of disks: ");
	scanf("%d", &num);
	printf("\n Solution:- ");
	printf("\n TOWER OF HANOI FOR %d NUMBER OF DISKS: \n", num);
	hanoi('A', 'B', 'C', num);
}
void hanoi(char from, char to, char other, int n)
{

	if (n <= 0)
		printf("\n ILLEGEL NUMBER OF DISKS");
	if (n == 1)
		printf("\n MOVE DISK FROM %c TO %c", from, other);
	if (n > 1)
	{
		hanoi(from, other, to, n - 1);
		hanoi(from, to, other, 1);
		hanoi(to, from, other, n - 1);
	}
}