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

struct hashmap *kv_init(size_t capacity) {
  struct hashmap *hm = malloc(sizeof(struct hashmap));
  if (NULL == hm) {
    return NULL;
  }
  hm->entries = calloc(capacity, sizeof(struct entry));
  if (NULL == hm->entries) {
    free(hm);
    return NULL;
  }
  hm->capacity = capacity;
  hm->count = 0;
  return hm;
}

int main(void) {
  struct hashmap *hm = kv_init(16);
  if (NULL == hm) {
    return 1;
  }
  free(hm->entries);
  free(hm);
  return 0;
}

