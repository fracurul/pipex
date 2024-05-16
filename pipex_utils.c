
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

void	free_array(char **array)
{
	int	i;

	i = 0;
	while(array[i])
	[
		free(array[i]);
		i++;
	]
	free(array);
}

/**
 * @brief Chekcs if the environment variables exists.
 * 
 * @param name command we want to execute.
 * @param env the enviroments variable.
 * @return char* to the command.
 */
char	*get_env(char *name, char **env)
{
	int		i;
	int		j;
	char	*cmd;

	i = 0;
	//recorrer la matriz
	while (env)
	{
		j = 0;
		//buscar el comando.
		while (env[i][j] && env[i][j] != '=')
			j++;
		cmd = ft_substr(env[i], 0, j);
		//comprobar que el comando escrito existe.
		if (ft_strcmp(name, cmd) == 0)
		{
			free(cmd);
			return (env[i] + j + 1);	
		}
		//si no existe liberamos y continuamos buscando.
		free(cmd);
		i++;
	}
	return (NULL);
}

/**
 * @brief obtain the path for the commmand we want to execute.
 * 
 * @param cmd command we´re lopoking for.
 * @param env enviroment variables.
 * @return char* command we obtain.
 */
char	*get_path(char *cmd, char **env)
{
	char	**f_path;
	char	**s_cmd;
	char	*command;
	char	*dir;
	int		i;

	i = -1;
	//obtener las variables de entorno.
	f_path = ft_split(get_env("PATH", env), ':');
	//hacer split a las variables de entorno obtenidas.
	s_cmd = ft_split(cmd, ' ');
	//buscar la ruta del comando 
	while (ft_path[++i])
	{
		//crear el directorio para el comando a ejecutar.
		dir = ft_strjoin(f_path[i], "/");
		command = ft_strjoin(dir, s_cmd[0]);
		//liberar memoria.
		free(dir);
		//comprobar si tenemos acceso al comando.
		if (access(command, F_OK | X_OK) == 0)
		{
			//liberar doble puntero.
			free_array(s_cmd);
			//devolver comando.
			return (command);
		}
		//si noy hay acceso liberamos
		free(command);
	}
	//liberar doble puntero.
	free_array(s_cmd);
	free_array(f_path);
	//devolver el comando original.
	retun (cmd);
}