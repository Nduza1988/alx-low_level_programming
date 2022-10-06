#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * findword - find position of next word
 * @s: string
 * Return: position of next word
 */

int findword(char *s)
{
	int i;

	for (i = 0; s[i] == ' '; i++)
		;

	return (i);
}
/**
 * wordlen - find length of word
 * @s: string
 * Return: length of word
 */

int wordlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
		;
	return (i);
}
/**
 * word_count- find number of words in string
 * @s: string
 * @word: switch used to track if currently in word
 * Return: number of words in string
 */


int word_count(char *s, int word)
{
	if (s == NULL || s[0] == '\0')
		return (0);

	if (s[0] == ' ')
		return (word_count(++s, 0));

	else if (s[0] != ' ' && s[0] != '\0' && word == 1)
	{
		return (word_count(++s, 1));
	}
	else if (s[0] != ' ' && s[0] != '\0' && word == 0)
	{
		return (word_count(++s, 1) + 1);
	}
	return (0);
}

/**
 * strtow - create an array of words from string
 * @str: string
 * Description: create array of words from string, last element should be null
 * Return: pointer to strings, NULL if fails
 */

char **strtow(char *str)
{
	char **list;
	int num_words, m, k, j;

	j = 0;
	num_words = word_count(str, 0);

	if (str == NULL || num_words == 0)
		return (NULL);
	list = malloc((num_words + 1) * sizeof(char *));
	if (list[m] == NULL)
		return (NULL);

	for (m = 0; m < num_words; m++)
	{
		j += findword(&str[j]);
		list[m] = (char *)malloc((wordlen(str) + 1) * sizeof(char));
		if (list[m] == NULL)
		{
		for (m = m - 1; m >= 0; m--)
			free(list[m]);
		free(list);
		return (NULL);
		}

	for (k = 0; str[j] != ' ' && str[j] != '\0'; k++)
	{
		list[m][k] = str[j];
		j++;
	}
	list[m][k] = '\0';
	}
	list[m] = NULL;
	return (list);
}
