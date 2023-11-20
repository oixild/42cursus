#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char *str;
	char *letter1;
	char *letter2;

	i = 0;
	str = argv[1];
	letter1 = argv[2];
	letter2 = argv[3];

	if (argc != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	if (letter1[1] != '\0' || letter2[1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	 while(str[i])
	 {
		if (str[i] == letter1[0] && str[i])
			str[i] = letter2[0];
		write(1, &str[i], 1);
		i++;
	 }
	write(1, "\n", 1);
	return 0;
}

