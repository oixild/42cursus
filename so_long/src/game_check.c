#include "../inc/so_long.h"

void	args_checker(t_game *game, int argc, char **argv)
{
	if (argc != 2)
		ft_exit("Error\nInvalid number of argument\n", game);
	if (ft_strncmp(argv[1] + ft_strlen(argv[1]) - 4, ".ber", 4))
	{
		ft_printf("Error\nFile must be of type \".ber\"\n");
		exit(0);
	}
}