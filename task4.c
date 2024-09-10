#include <locale.h>
void name()
{
	setlocale(LC_CTYPE, "RUS");

	puts("* * * * * * * * * * * * * * * * * * * * *");
	puts("*                                       *");
	puts("*Тема: Разработка консольного приложения*");
	puts("*                                       *");
	puts("*       Выполнила Герасимова К.П.       *");
	puts("*                                       *");
	puts("* * * * * * * * * * * * * * * * * * * * *");
}
void data()
{
	setlocale(LC_CTYPE, "RUS");

	puts(" _  _   _ _   _  _  ");
	puts("  ||_  | | | | ||_  ");
	puts(" /_|_|.|_| |.|_||_|.");
}
void main()
{
	name();
	data();
}
