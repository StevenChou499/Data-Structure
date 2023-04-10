#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define HASH_CAPACITY 17

typedef struct bucket {
    int data;
    Bckt_t *next;
} Bckt_t;

typedef struct key {
    Bckt_t Index[HASH_CAPACITY];
} Key_t;

/* Initialize the hash key */
void Key_Init(Key_t *key);

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