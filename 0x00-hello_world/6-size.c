#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
		char c;
			int i;
				long int li;
					long long ll;
						float f;

							printf("Size of a char: %ld byte(s)\n", (unsigned int) sizeof(c));
								printf("Size of an int: %ld byte(s)\n", (unsigned int) sizeof(i));
									printf("Size of a long int: %ld byte(s)\n", (unsigned long) sizeof(li));
										printf("Size of a long long int: %ld byte(s)\n", (unsigned long) sizeof(ll));
											printf("Size of a float: %ld byte(s)\n", (unsigned int) sizeof(f));
												return (0);
}
