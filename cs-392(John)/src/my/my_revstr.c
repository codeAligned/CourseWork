#include "../../include/my.h"

int my_revstr(char *str)
{
	if (str == NULL)
	{
		my_str("error: input string cannot be NULL\n");
		return -1;
	}

	int end = my_strlen(str) - 1;
	int start = 0;

	while (start < end)
	{
		char temp1 = str[start];
		char temp2 = str[end];
		str[end] = temp1;
		str[start] = temp2;
		start++;
		end--;
	}
	return my_strlen(str);

}
