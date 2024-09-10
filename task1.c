#include <locale.h>
#include <stdio.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Hello World!!");
	return 0;
}
