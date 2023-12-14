size_t i;

	if (String == NULL)
		return (0);
	if (String[0] == '-')
	{
		for (i = 1; i < strlen(String); i++)
		{
			if ((String[i] < '0') || (String[i] > '9'))
				return (0);
		}
	}
	else
	{
		for (i = 0; i < strlen(String); i++)
		{
			if ((String[i] < '0') || (String[i] > '0' + 9))
				return (0);
		}
	}
