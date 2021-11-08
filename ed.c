#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char *line;
	size_t line_size = 0;
	while(1)
	{
		getline(&line, &line_size, stdin);
		if(!strcmp(line, ".\n"))
			printf("?\n");
		free(line);
		line = 0;
	}
}
