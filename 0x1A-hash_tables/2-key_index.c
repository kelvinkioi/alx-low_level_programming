#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ke;

	if (!key || !size)
		return (0);
	ke = hash_djb2(key);
	return (ke % size);
}
