 * tokenise - create token from
 * argument
 *
 * @str: argument str
 * Return: array of argmuent pointer
 */
char **tokenise(char *str)
{
	int i, *p_id;
	char **argv, *token;

	argv = malloc(sizeof(char *) * 64);
	if (argv == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		p_id = &id;
		*p_id = -1;
		return (NULL);
	}

	token = strtok(str, " ");
	i = 0;
	while (token != NULL)
	{
