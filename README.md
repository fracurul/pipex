# PIPEX-42

# Introducción
En este proyecto aprenderas el manejo de pipes, algo que al principio puede parecer complicado de entender, pero que si le coges el truco es sencillo.
	
# Recomendaciones:
En este proyecto vas a aprender el comportamiento de nuevas funciones,
recuerda hacer "man" para buscar información acerca de ellas, te dejo un  listado de las que me han resultado más útiles:
#
	1.access()
	2.dup2()
	3.execve()
	4.fork()
	5.pipe()
	6.wait()
	7.waitpip()

# Explicación :
Puede que no te haya quedado muy claro lo que te piden que hagas en el proyecto (Como me paso a mi), asi que vamos a explicarlo de un modo mas fácil:
#
	$> ./pipex infile "ls -l" | "wc -l" outfile
