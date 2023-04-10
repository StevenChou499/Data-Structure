#include "hash_table.h"

/* Initialize the hash key */
void Key_Init(Key_t *key) {
    memset(key, 0, HASH_CAPACITY);
    return;
}

/* Hash function */
int hash_function(int value) {
    return value % HASH_CAPACITY;
}

/* Insert into hash bucket */
int insert_bckt(Key_t *key, int value) {
    int hash_val = hash_function(value);
    Bckt_t *insert = (key->Index + hash_val);
    while (insert)
        insert = insert->next;
    insert = malloc(sizeof(Bckt_t));
    insert->data = value;
    insert->next = NULL;
    return 0;
}

/* Check if the value is in the hash table */
bool check_table(int value);

/* Remove the corresponding bucket in the hash table */
int remove_bckt(int value);

/* Print the whole hash table and all the buckets */
void print_hash_table(Key_t *key);