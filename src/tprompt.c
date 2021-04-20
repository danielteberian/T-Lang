#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>
#include <histedit.h>

int main(int argc, char** argv)
{
	puts("T-LANG - v0.2");
	puts("CTRL+C TO EXIT");

	while (1)
	{
	char* input = readline("T-LANG: ");
	add_history(input);
	printf("INPUT: %s\n", input);

	free(input);

	}

return 0;
}

