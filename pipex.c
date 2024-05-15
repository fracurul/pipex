


#include <pipex.h>

void	execute(char *cmd, char **argv)
{
	//hacer split de los argumentos.
	//obtener la ruta de los comandos, para ello hay que crear una funcion.
		//-> get_path() funciona para obterner la ruta de los comandos
	//comprobar que los comandos existen.
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
}

int	main(int argc, char **argv, char **env)
{
	int	p_fd[2];
	int	id;

	//Checkear cantidad de args.
	if (argv != 5)
		error_msg();
	//Crear pipe y comprobar.
	if (pipe(p_fd) == -1)
		exit(-1);
	//Hacer Fork para los comandos.
	id = fork();
	if (id == -1)
		exit(-1);
	//Crear las funciones para cada uno de los comandos.
	if (!id)

}