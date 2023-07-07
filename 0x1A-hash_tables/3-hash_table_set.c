#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: key and cannot be empty string
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_e = 0, *p = 0;
	int index = 0;

	if (!ht || !ht->array || !key)
		return (0);
	if (!value)
		value = "";
	index = key_index((const unsigned char *)key, ht->size);
	p = ht->array[index];
	new_e = malloc(sizeof(hash_node_t));
	memset(new_e, 0, sizeof(hash_node_t));
	if (!new_e)
		return (0);
	new_e->next = 0;
	if (p && strcmp(p->key, key) != 0)
		new_e->next = p;
	else if (p)
	{
		free(p->value);
		free(p->key);
		free(p);
	}
	new_e->key = strdup(key);
	if (!new_e->key)
	{
		free(new_e);
		return (0);
	}
	new_e->value = strdup(value);
	if (!new_e->value)
	{
		free(new_e->key);
		free(new_e);
		return (0);
	}
	ht->array[index] = new_e;
	return (1);
}
