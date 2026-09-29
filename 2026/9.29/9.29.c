#include <stdio.h>
int main()
{
	int n;
	//int i;
	scanf_s("%d", &n);
	int fact = 1;
	//for ( i = 1;i <= n;i++) {
	//	fact *= i;
	//}
	int i = n;
	for (/*i = n*/;n > 1;n--) {
		fact *= n;
	}
	//printf("%d!=%d\n", n, fact);
	printf("%d!=%d\n", i, fact);
	return 0;
}