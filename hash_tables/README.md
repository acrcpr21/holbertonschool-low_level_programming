# Hash Tables

This project implements a hash table data structure in C using the djb2 hash function and chaining for collision resolution.

## Overview

A hash table is a data structure that provides efficient key-value storage and retrieval. It uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.

## Implementation Details

- **Hash Function**: djb2 algorithm
- **Collision Resolution**: Chaining (linked lists)
- **Data Structures**: 
  - `hash_table_t`: Main hash table structure containing size and array of buckets
  - `hash_node_t`: Node structure for chained elements

## Files

- `hash_tables.h`: Header file with struct definitions and function prototypes
- `0-hash_table_create.c`: Creates a new hash table
- `1-djb2.c`: Implementation of the djb2 hash function
- `2-key_index.c`: Computes the index for a given key
- `3-hash_table_set.c`: Adds or updates a key-value pair
- `4-hash_table_get.c`: Retrieves a value by key
- `5-hash_table_print.c`: Prints the hash table contents
- `6-hash_table_delete.c`: Frees all memory allocated for the hash table

## Compilation

All files are compiled on Ubuntu 20.04 LTS using:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Usage

Include `hash_tables.h` in your C files and link with the implementation files when compiling.
