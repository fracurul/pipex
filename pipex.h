

#ifndef PIPEX_H
# define PIPEX_H

#include <libft.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include<sys/types.h>
# include<sys/stat.h>
# include <fcntl.h>  
# include <stdlib.h>

//functions
//->main
void	execute(char *cmd, char **env);
void	c_process(char **argv, char **env, int	*p_fd);
void	p_process(char **argv, char **env, int	*p_fd);
//->utils
void	error_msg();
int		open_file(char *file, int flag);
void	free_array(char **array);
char	*get_env(char *name, char **env);
char	*get_path(char *cmd, char **env);