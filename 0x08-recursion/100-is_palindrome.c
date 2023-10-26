#include "main.h"

/**
 * is_palindrome_helper - checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the substring to check.
 * @end: The end index of the substring to check.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 0
 */
int is_palindrome(char *s)
{
	return (is_palindrome_helper(s, 0, _strlen_recursion(s) - 1));
}
