#include<stdio.h>
int main(void) {
	int M, D, S;
	scanf("%d %d", &M, &D);
	S = (2 * M + D) % 3;
	if (S == 0)
	{
		printf("´¶³q\n");
	}
	else if (S == 1)
	{
		printf("¦N\n");
	}
	else if (S == 2)
	{
		printf("¤j¦N\n");
	}
}