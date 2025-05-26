#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// PROTOTYPES
char *strip(char *input_text);

int main()
{
    bool loop_active = true;

    while (loop_active)
    {
        // Flush after every printf
        setbuf(stdout, NULL);

        // Prompt
        printf("$ ");

        // Wait for user input
        char input[100];
        fgets(input, sizeof(input), stdin);
        input[strlen(input) - 1] = '\0';

        // Possible commands
        char exit_code[] = "exit 0";
        char echo_command[] = "echo";

        if (strcmp(exit_code, input) == 0)
        {
            exit(0);
        }

        strip("   Hello      ");
        // else if (strstr(echo_command, input) != NULL)
        // {
        // }

        printf("%s: command not found\n", input);
    }

    return 0;
}