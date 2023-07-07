#include "hash_tables.h"

/**
 * free_node - frees hash table
 * @p: current node
*/

void free_node(hash_node_t *p)
{
	free(p->key);
	free(p->value);
	if (p->next)
		free_node(p->next);
	free(p);
}

/**
 * hash_table_delete -  function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *p = 0;

	for (i = 0; i < ht->size ; i++)
	{
		p = ht->array[i];
		if (p)
			free_node(p);
	}
	free(ht->array);
	free(ht);
}
