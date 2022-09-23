#include "main.h"

/**
 * _strcmp: compares two strings
 * *s1: parameter
 * *s2: parameter
 * Return: Comparison
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		i++;
		if (s1[i] != s2[i])
		
			return (s1[i] - s2[i]);
		}
	}while(s1[i] == s2[i] && s1[i] && s2[i]);
}
