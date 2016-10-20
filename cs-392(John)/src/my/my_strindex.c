#include "../../include/my.h"

char* my_strindex(char* str, char c)
{
	if (str == NULL)
	{
		my_str("error: string cannot be NULL\n");
		return NULL;
	}

	int i = 0;
	char *found = NULL;

	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (str[i] == c)
			{
				found = &str[i];
				return found;
			}
			else
				i++;
		}
	}
	my_str("error: character cannot be NULL\n");
	return NULL;
}
