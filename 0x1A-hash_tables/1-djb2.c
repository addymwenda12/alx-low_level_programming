#include "hash_tables.h"

/**
 * hash_djb2 - Hashes a string using a djb2 algorithm
 * @str: string to be hashed
 * 
 * Return: The hash value of the string in unsigned long int
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		/* Update the hash using djb2 algorithm */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
