#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key of slot to get
 * Return: value associated with the element, or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ke;
	hash_node_t *p = 0;

	if (!ht || !key)
		return (0);
	ke = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[ke]))
		return (0);
	p = ht->array[ke];
	for (; p->next; p = p->next)
	{
	}
	return (p->value);
}
