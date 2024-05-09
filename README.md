# pipex

# Funciones permitidas en el proyecto:

->Fork: Crea un subproceso(Hijo) que se ejecuta a la par del primer proceso(Padre)
	1. Return tipo int, recibimos un int por cada proceso, int = 0 corresponde al subproceso,
	int = -1 si fork() falla, int != 0 corresponde al proceso principal.

->Wait: Para la ejecucion de un proceso(Padre) hasta que un subproceso(Hijo) termina.

->Waitpid:

->Pipe: Crea un canal de comunicacion unidireccional.
	1. Los bytes escritos en PIPEDES[1] se pueden ver en PIPEDES[0].
	2. Return tipo int, int = 0 completado, int = -1 error.