#include "shell.h"

char **_copyenviron(void);
void free_environ(void);
char **_getenviron(const char *var);

/**
 * _copyenviron - Makes a copy of the environment.
 * 
 * Return: If an error occurs - NULL, 
 *         Otherwise, a double pointer to the copy.
 */
 char **_copyenviron(void){
    char **new_env;
    size_t size;
    int i;

    for(size = 0; environ[size]; size++)
    ;

    new_env = malloc(sizeof(char *) * (size + 1));
    if(!new_env) 
    return (NULL);

    for(i = 0; environ[i]; i++)
    {
        new_env[i] = malloc(_strlength(environ[i]) + 1);
        
        if(!new_env[i])
        {
            for(i--; i >= 0; i--)
            free(new_env[i]);
            free(new_env);
            return(NULL);
        }

        _copy(new_env[i], environ[i]);
    }

    new_env[i] = NULL;

    return (new_env);
 }

/**
 * free_env - Releases the environment copy's memory space.
 */
 void free_env(void)
 {
    int i;

    for(i = 0; environ[i]; i++)
    free(environ[i]);
    free(environ);
 }

 /**
  * _getenv - Fetches an environment variable from the PATH.
  * @var: The name of the environment variable to fetch.
  * 
  * Return: If the environment variable does not exist - NULL.
  *         Otherwise - a pointer to the environment variable.
  */
  char **_getenv(const char *var)
  {
    int i, len;

    len = _strlength(var);
    for(i = 0; environ[i]; i++)
    {
        if(_strcompre(var, environ[i], len) == 0)
        return (&environ[i]);
    }

    return (NULL);
  }