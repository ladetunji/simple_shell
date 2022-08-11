#include "shell.h"

char **environ;

/**
 * main - Tokenizes and splits strings
 * Return: 
 */

int split(char *buffer)
{
   char *buffer, *copy_buffer = NULL;
   ssize_t num_read;
   size_t n = 0;
   char *token;
   char *delim = " \n";
   int num_tokens = 0, int i = 0;
   char **argv;

   num_read = getline(&buffer, &n, stdin);

   if(num_read == -1){
      exit(EXIT_SUCCESS);
   }

   copy_buffer = malloc(sizeof(char) * num_read)

   _strcpy(copy_buffer, buffer);

   token = strtok(buffer, delim);
   while(token != NULL)
   {
    num_tokens++;
    token = strtok(NULL, delim);
   }
   num_tokens++;
   free(buffer);

   argv = malloc(sizeof(char *) * num_tokens);

   token = strtok(copy_buffer, delim);
   while(token != NULL)
   {
    argv[i] = malloc(sizeof(char) * strlength(token));
    _strcpy(argv[i], token);
    i++;
    token = strtok(NULL, delim);
   } 
   argv[i] = NULL;
   free(copy_buffer);

   return (argv);
}