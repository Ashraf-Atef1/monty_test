#include "monty.h"

void file_reader(char* file, char *content)
{
	FILE *f;
	int content_size = 0;

	f = fopen(file, "r");
	if (!f)
	{
		 printf("Error: Can't open file %s", file);
		 exit(EXIT_FAILURE);
	}
	do {
		content_size += 100;
		content = realloc(content, content_size);
		if (!content)
		{
			printf("Error: malloc failed");
			exit(EXIT_FAILURE);
		}
	       	fgets(content, 100, f);
	}while(!feof(f));
	fclose(f);
}
