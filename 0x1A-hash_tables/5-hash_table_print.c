#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	int j = 0;

	if (!ht)
		return;
	putchar('{');
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (j)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			j = 1;
		}
	}
	putchar('}');
	putchar(10);
}
