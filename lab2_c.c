#include <stdio.h>

int main()
{
	int a = 0, b = 1, c = 1, d, n;
	printf("Enter the number of terms of the Tribonacci series you want to print: ");
	scanf("%d", &n);
	
	printf("The series is as follows: %d %d %d ", a, b, c);

	for (int i = 3; i < n; ++i)
	{
		d = a + b + c;
		printf("%d ", d);

		a = b;
		b = c;
		c = d;
	}

	printf("\n");
}
