# PIPEX-42 Español/English version

# ESPAÑOL
## Introducción: 
En este proyecto aprenderas el manejo de pipes, algo que al principio puede parecer complicado de entender, pero que si le coges el truco es sencillo.

## Recomendaciones:
Vas a aprender el comportamiento de nuevas funciones,
recuerda hacer "man" para buscar información acerca de ellas, te dejo un  listado de las que me han resultado más útiles:

	1.access()
	2.dup2()
	3.execve()
	4.fork()
	5.pipe()
	6.wait()
	7.waitpip()

## Explicación: 
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


Aquí tienes un link para entender mejor como redirigir el flujo de datos usando pipes:
https://www.youtube.com/watch?v=8LdQ09Ep9RY&t=263s

RECUERDA: esto es una explicación lógica de lo que debe hacer pipex, si necesitas mas información el código esta subido y comentado.

## Como afrontar el proyecto(RoadMap):
	1.Comprobar la cantidad de argumentos que recibimos.
	2.Crear nuestro pipe.
	3.Comprobar si el pipe se ha creado correctamente.
	4.Hacer fork para dividir los procesos.
	5.Comprobar si el fork se ha realizado correctamente.
	6.Si estamos en el proceso hijo, ejecutamos 'X' proceso sino, viceversa.



# ENGLISH
## Introduction:
In this project, you will learn how to handle pipes, something that might seem complicated at first but becomes easy once you get it.

## Recommendations:
You will learn the behavior of new functions. Remember to use "man" to look up information about them. Here is a list of the ones i found most useful:

	1.access()
	2.dup2()
	3.execve()
	4.fork()
	5.pipe()
	6.wait()
	7.waitpip()

## Explanation :
It might not be very clear what you are being asked to do in the project (as it happened to me), so let's explain it in an easier way:

	$> ./pipex infile "ls -l" | "wc -l" outfile

But what does this mean?
Let's break down the example step by step:

	1.infile ls -l: Redirects the stdin of the ls -l command from the infile.
	2. ls -l | wc -l: Uses a pipe (|) to take the output of the ls -l command and pass it as input to the wc -l command.
	3.wc -l >outfile: Redirects the stdout of the wc -l command to a file called outfile.

In other words, the objective is to redirect the data flow so that:
infile provides data to stdin, and outfile collects data from stdout.
To understand it better, here's a graphical representation:


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

	// each cmd needs a stdin (input) and returns an output (to stdout)
   
	infile                                             outfile
	as stdin for cmd1                                 as stdout for cmd2            
       |                        PIPE                        ↑
       |           |---------------------------|            |
       ↓             |                       |              |
      cmd1   -->    pipe[1]       ↔       pipe[0]   -->     cmd2           
                     |                       |
            cmd1   |---------------------------|  pipe[0]
           output                             reads end[1]
         is written                          and sends cmd1
          to pipe[1]                          output to cmd2
       (pipe[1] becomes                      (pipe[0] becomes 
        cmd1 stdout)                           cmd2 stdin)

REMEMBER: this is a logical explanation of what pipex should do. If you need more information, the code is uploaded and commented.

## How to Approach the Project (Roadmap):

	1.Check the number of arguments received.
	2.Create our pipe.
	3.Check if the pipe was created successfully.
	4.Use fork to split the processes.
	5.Check if the fork was successful.
	6.If we are in the child process, execute 'X' process; otherwise, vice versa.
