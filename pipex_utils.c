
#include <pipex.h>

void	error_msg()
{
	write(1, "./pipex infile cmd cmd outfile", 31);
	exit(0);
}

int	open_file(char *file, int flag)
{
	int	fd;
	//abrir archivo
	if (flag == 0)
		fd = open(file, O_RDONLY, 777);
	//Si no esta creado, crearlo y abrirlo
	if (flag == 1)
		fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 777);
	if (res == -1)
		exit(0)
	return(fd);
}

char	*get_path(char *cmd, char **argv)
{
	//hacer split a las variables de entorno obtenidas
}