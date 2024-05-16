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
Para entenderlo mejor te dejo esta representación gráfica:

                           -----------------    
                 0         |     stdin     |  
                           -----------------    
                 1         |     stdout    |    
                           -----------------    
                 2         |     stderr    |  
                           -----------------
                 3         |     infile    |  // open()
                           -----------------
                 4         |     outfile   |  // open()
                           -----------------
                 5         |     pipe[0]    | 
                           -----------------
                 6         |     pipe[1]    |  
                           -----------------


// cada cmd necesita una stdin (input) y devuelve un output (como stdout)

    infile                                             outfile
	como stdin para cmd1                                 como stdout para cmd2            
       |                        PIPE                        ↑
       |           |----------------------------|            |
       ↓             |                       |              |
      cmd1   -->    pipe[1]       ↔        pipe[0]   -->     cmd2           
                     |                       |
            cmd1   |---------------------------|  pipe[0]
           output                             lee pipe[1]
         escrito                          y envía cmd1
          en pipe[1]                          output a cmd2
       (pipe[1] pasa a ser                    (pipe[0] pasa a ser
        cmd1 stdout)                           cmd2 stdin)

RECUERDA: esto es una explicación lógica de lo que debe hacer pipex, si necesitas mas información el código esta subido y comentado.

## Como afrontar el proyecto(RoadMap):
	1.Comprobar la cantidad de argumentos que recibimos.
	2.Crear nuestro pipe.
	3.Comprobar si el pipe se ha creado correctamente.
	4.Hacer fork para dividir los procesos.
	5.Comprobar si el fork se ha realizado correctamente.
	6.Si estamos en el proceso hijo, ejecutamos 'X' proceso sino, viceversa.

