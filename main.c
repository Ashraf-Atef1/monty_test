#include "monty.h"

void runMonty(char *commands);

int main(int argc, char const *argv[])
{
	if (argc != 2)
		printf("USAGE: monty file\n"), exit(EXIT_FAILURE);
	else
	{
		FILE *f = fopen(argv[1], "r");
		char *content = NULL;
		int contentSize = 0;
		int isEndOfFile = 0;

		if (!f)
			printf("Error: Can't open file %s\n", argv[1]), exit(EXIT_FAILURE);
		while (!isEndOfFile)
		{
			content = _realloc(content, contentSize + 100);
			contentSize += 100;
			isEndOfFile = !fgets(content, 100, f);
		}

		_Free(content);
		printf("the c:%s\n", content);
	}
	return (0);
}

void runMonty(char *commands)
{
	stack_t *stack = NULL;
	instruction_t *instructions[] = {{"push", pushToStack}};
	char *cCommand = strtok(commands, "\n\t ");

	while (cCommand)
	{
	}
}
