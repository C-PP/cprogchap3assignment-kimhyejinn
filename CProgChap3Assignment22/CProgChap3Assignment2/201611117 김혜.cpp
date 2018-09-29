#include <stdio.h>
#include <stdlib.h>
void func(float height);

int main(void)
{
	float height;
	printf("Please enter your height in inches: ");
	printf(" _______\b\b\b\b\b\b\b");
	scanf_s("%f", &height);
	func(height);
	getchar();
	return 0;

}

void func(float height)
{
	float centi;

	centi = height * 2.54;
	printf("\n\t your height is %f centimeters", centi);
	printf("\rGee!\n");
	system("pause");
	return;


}