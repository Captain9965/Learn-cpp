/*
* Does the same task of parsing a string into a series of tokens
* It is a reentrant version of strtok()
* the third argument is a pointer to char * and is used internally by str_tok() to maintain 
* context betwwen successive calls that parse the same string
*/
#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[] = "Geeks for Geeks";
    char *token;
    char *rest = str;
 
    while ((token = strtok_r(rest, " ", &rest)))
        printf("%s\n", token);
 
    return(0);
}