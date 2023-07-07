#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: NULL or pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (0);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!(table->array))
	{
		free(table);
		return (0);
	}
	return (table);
}
