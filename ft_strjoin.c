
#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	calc_size(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;
	int	i;

	total_len = 0;
	sep_len = str_len(sep);
	i = 0;
	while (i < size)
	{
		total_len += str_len(strs[i]);
		if (i < size - 1)
		{
			total_len += sep_len;
		}
		i++;
	}
	return (total_len);
}

int	append_str(char *res, char *str, int pos)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		res[pos] = str[i];
		pos++;
		i++;
	}
	return (pos);
}

char	*concat_strs(int size, char **strs, char *sep, int total_len)
{
	int		pos;
	int		i;
	char	*res;

	i = 0;
	pos = 0;
	res = malloc ((total_len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < size)
	{
		pos = append_str(res, strs[i], pos);
		if (i < size - 1)
			pos = append_str(res, sep, pos);
		i++;
	}
	res[pos] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*empty_str;

	if (size == 0)
	{
		empty_str = malloc(sizeof(char));
		empty_str[0] = '\0';
		return (empty_str);
	}
	else
	{
		total_len = calc_size(size, strs, sep);
		return (concat_strs(size, strs, sep, total_len));
	}
}