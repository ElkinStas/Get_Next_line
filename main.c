int main(void)
{
	int	fd;
	char *line;
	int d;

	fd = open("file2.txt", O_RDONLY);//присваивает файловый дескриптор типа инт
	if (fd == -1) //защита от ошибок
		return (-1);
	if (BUFF_SIZE == -1 || BUFF_SIZE == 0)//защита от невалидных значений
	   return (-1);
	while (get_next_line(fd, &line))
	{
		//get_next_line(fd, &line);
		ft_putstr(line);
		ft_putchar('\n');
		free(line);
	}
	/*
	if (get_next_line(fd, &line) > 0)//логическое выражение - если есть дескриптор и массив - то выполнять
	{
		    // get_next_line(fd, &line);
			ft_putstr(line);
			ft_putchar('\n');
	}
	if (get_next_line(fd, &line) > 0)//логическое выражение - если есть дескриптор и массив - то выполнять
	{
		     //get_next_line(fd, &line);
			ft_putstr(line);
		//ft_putchar('\n');
	}
	//if (get_next_line(fd, &line) > 0)//логическое выражение - если есть дескриптор и массив - то выполнять
	{
		    // get_next_line(fd, &line);
			// ft_putstr(line);
		//ft_putchar('\n');
	}
	*/
	return (0);
}