#ifndef KV_H
#define KV_H

#include <stdlib.h>

struct entry {
  char* key;
  char* value;
};
typedef struct entry kv_entry_t;

struct hashmap {
  struct entry* entries;
  size_t capacity;
  size_t count;
};
typedef struct hashmap kv_t;

struct hashmap *kv_init(size_t capacity);

#endif
