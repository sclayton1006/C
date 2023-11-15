#include <stdio.h>

int main(void)
{
	int i = -1, j = -1;
	int w1, w2;

	w1 = (i > 0) && (j < 0) || (i < 0) && (j > 0); // evaluates to 0 || 0
	w2 = (i <= 0) || (j >= 0) && (i >= 0) || (j <= 0); // evaluates to 1 || 0 || 1

	printf(“%d”, w1 == w2); // evaluates to 0 
	return 0;
  /* answer to the question is 1 apparently... */
}
