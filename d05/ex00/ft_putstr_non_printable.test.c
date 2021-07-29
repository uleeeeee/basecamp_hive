#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c)
{
	// write(1, &c, 1);
	printf("%c", c);
}

void	test(char *str, char *expected)
{
	char fmt_str[strlen(str) + 3];
	char fmt_expected[strlen(expected) + 3];

	sprintf(fmt_str, "\"%s\"", str);
	sprintf(fmt_expected, "\"%s\"", expected);
	printf("String: %s:\n\t- Expected: %s\n\t- Result:   \"", fmt_str, fmt_expected);
	ft_putstr_non_printable(str);
	printf("\"\n");
}

int		main(void)
{
	printf("[ ** ] Note: The following tests should always pass.\n");
	test("", "");
	test("Previous was supposed to be empty", "Previous was supposed to be empty");
	test("Printable escapes like \" and \\.", "Printable escapes like \" and \\.");
	test("With new line ->\n<- here", "With new line ->\\0a<- here");
	test("Here is a tab->\t-< and a bell ->\a<-.", "Here is a tab->\\09-< and a bell ->\\07<-.");
	test("Here is a del->\177-< a backspace ->\010<-.", "Here is a del->\\7f-< a backspace ->\\08<-.");
	test("Here is the code for eot/shell's ctrl+c ->\003<-.", "Here is the code for eot/shell's ctrl+c ->\\03<-.");
	return (0);
}