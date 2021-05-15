
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(int file)
{
	char	buffer;

	while (read(file, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int ac, char **av)
{
	if (ac == 1)
		write(1, "File name missing\n", 18);
	else if (ac > 2)	
		write(1, "Too many arguments\n", 19);
	else
	{
		int		file;

		file = open(av[1], O_RDONLY);
		if (file == -1)
			write(1, "Cannot read file\n", 17);
		ft_putstr(file);
		close(file);
	}
	return (0);
}
