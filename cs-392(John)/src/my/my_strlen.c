#include "../../include/my.h"

int my_strlen(char* str)
{
	int len = 0;
	int i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			len++;
			i++;
		}
		return len;
	}
	my_str("error: string cannot be NULL\n");
	return -1;
}
