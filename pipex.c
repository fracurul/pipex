


#include <pipex.h>

void	execute(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;
	//hacer split de los argumentos.
	s_cmd = ft_split(cmd, ' ');
	//obtener la ruta de los comandos.
	path = get_path(s_cmd[0], env);
	//comprobar que los comandos existen.
	if (execve(path, s_cmd, env) == -1)
	{
		write(1, "Command not found:\n", 19);
		write(1, &s_cmd[0], sifeof(s_cmd[0]));
		free_array(s_cmd);
		exit (1);
	}
}

void	c_process(char **argv, char **env, int	*p_fd)
{
	int	fd;
	//abrir archivo.
	fd = open_file(argv[1], 0);
	//duplicar archivo con el contenido de stdin (fd = 0).
	dup2(fd, 0)
	//duplicar el archivo obtenido en stdout del pipe p_fd[1].
	dup2(p_fd[1], 1);
	//cerrar stdin del pipe ya que no lo usamos.
	close(p_fd[0]);
	// crear funcione para ejecutar comando, 
	//para ello hay que parsear la entrada de datos.
	execute(argv[2], env);
}

void	p_process(char **argv, char **env, int	*p_fd)
{
	int	fd;
	//abrir archivo.
	fd = open_file(argv[4], 1);
	//duplicar archivo con el contenido de stdout (fd = 1).
	dup2(fd, 1)
	//duplicar el archivo obtenido en stdin del pipe p_fd[0].
	dup2(p_fd[0], 0);
	//cerrar stdout del pipe ya que no lo usamos.
	close(p_fd[1]);
	// crear funcione para ejecutar comando, 
	//para ello hay que parsear la entrada de datos.
	execute(argv[3], env);
}

int	main(int argc, char **argv, char **env)
{
	int	m_fd[2];
	int	id;

	//Checkear cantidad de args.
	if (argv != 5)
		error_msg();
	//Crear pipe y comprobar.
	if (pipe(m_fd) == -1)
		exit(-1);
	//Hacer Fork para los comandos.
	id = fork();
	if (id == -1)
		exit(-1);
	//Crear las funciones para cada uno de los comandos.
	if (!id)
		c_process(argv, env, m_fd);
	p_process(argv, env, m_fd);
}