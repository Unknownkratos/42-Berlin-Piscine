int	count_lines(char *text)
{
	int	number_of_lines;

	number_of_lines = 1;
	while (*(text + 1))
	{
		if (*text == '\n' && *(text + 1) != '\n' && *(text + 1) != '\0')
			number_of_lines++;
		text++;
	}
	return (number_of_lines);
}
int main()
{
	char *str = "1111\n1111\n\n\n\n\n\n\0";

	printf("%d\n", count_lines(str));
}
