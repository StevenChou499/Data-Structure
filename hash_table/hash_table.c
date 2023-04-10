#include "hash_table.h"

/* Initialize the hash key */
void Key_Init(Key_t *key) {
    for (int i = 0; i < HASH_CAPACITY; i++)
        key->
}

/* Hash function */
int hash_function(int value);

/* Insert into hash bucket */
int insert_bckt(int value);

/* Check if the value is in the hash table */
bool check_table(int value);

/* Remove the corresponding bucket in the hash table */
int remove_bckt(int value);

/* Print the whole hash table and all the buckets */
void print_hash_table(Key_t *key);