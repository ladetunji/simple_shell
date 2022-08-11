#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

#define END_OF_FILE -2
#define EXIT -3

extern char **environ;

char *name;

int hist;


ssize_t getline(char **lineptr, size_t *n, FILE *stream);
char *strtok(char *line, char *delim);

char **_copyenviron(void);
void free_environ(void);
char **_getenviron(const char *var);

char **_copyenviron(void);
void free_env(void);
char **_getenv(const char *var);

void sig_handler(int sig);
char *_strcpy(char *dest, const char *src);
int strlength(char *string);
int proc_file_commands(char *file_path, int *exe_ret);
#endif /* _SHELL_H_ */
