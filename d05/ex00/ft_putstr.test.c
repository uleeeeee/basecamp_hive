#include <stdio.h>
#include <limits.h>
#include <unistd.h>

void	ft_putstr(char *c);

void	ft_putchar(char c)
{
	// write(1, &c, 1);
	printf("%c", c);
}

void	test(char *str)
{
	printf("String: \"%-10s\" | Result: \"", str);
	ft_putstr(str);
	printf("\"\n");
}

int		main(void)
{
	printf("[ ** ] Note: The following tests should always pass.\n");
	test("");
	test("Previous was supposed to be empty");
	test("With \"escape\"<- Here");
	test("Yep cock");
	test("With new line\n<- Here");
	test("COGGERS");
	return (0);
}