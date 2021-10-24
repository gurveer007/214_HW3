#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    // user Input
    char *userInput = NULL;
    size_t buf = 0;
    ssize_t userInputlen = 0;
    // int size = 0;

    while (!feof(stdin)) {
        
        if(feof(stdin)){
            break;
        }
        
        printf("> ");
        userInputlen = getline(&userInput, &buf, stdin);
        if (userInputlen != -1)
        {
            // replace \n with \0
            userInput[userInputlen - 1] = '\0';
        }
        if (strcmp(userInput,"exit")==0 )
        {
            break;
        } 
        if (strcmp(userInput,"/bin/ls") == 0)
        {
            int status = system(userInput);
        }else if (strcmp(userInput,"/bin/ls -l") == 0)
        {
            int status = system(userInput);
        }
            
    }
    // whatever
    free(userInput);
    return 0;
}