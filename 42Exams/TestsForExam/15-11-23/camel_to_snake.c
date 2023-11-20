#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	char *str = argv[1];
	int i = 0;
	
	while(str[i])
	{
		if (str[i] && str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		if (str[i] && !(str[i + 1] >= 'A' && str[i + 1] <= 'Z'))
		{
			write(1, &str[i], 1);
		}
		else if (str[i] && str[i + 1] >= 'A' && str[i + 1] <= 'Z' )
		{
			write(1, &str[i], 1);
			write(1, "_", 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;	
}
