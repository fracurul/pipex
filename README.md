# PIPEX-42

## Introducción
En este proyecto aprenderas el manejo de pipes, algo que al principio puede parecer complicado de entender, pero que si le coges el truco es sencillo.
	
## Recomendaciones:
En este proyecto vas a aprender el comportamiento de nuevas funciones,
recuerda hacer "man" para buscar información acerca de ellas, te dejo un  listado de las que me han resultado más útiles:

	1.access()
	2.dup2()
	3.execve()
	4.fork()
	5.pipe()
	6.wait()
	7.waitpip()

## Explicación :
Puede que no te haya quedado muy claro lo que te piden que hagas en el proyecto (Como me paso a mi), asi que vamos a explicarlo de un modo mas fácil:

	$> ./pipex infile "ls -l" | "wc -l" outfile

¿Pero que significa esto?
Bueno vamos a descomponer el ejemplo por partes:

	stdin: entrada estandar(teclado, fd = 0).
	stdout: salida estandar(pantalla, fd = 1).
	1. infile ls -l: Redirige la (stdin) del comando ls -l desde el archivo infile.
	2. ls -l | wc -l: Usa un pipe (|) para tomar la salida del comando ls -l y pasarlo como entrada al comando wc -l.
	3. wc -l >outfile: Redirige (stdout) del comando wc -l a un archivo llamado outfile.

Es decir el objetivo es redirigir el flujo de datos para que:
infile obtenga los datos de stdin y outfile los de stdout. 

## Como afrontar el proyecto(RoadMap):
	1.

