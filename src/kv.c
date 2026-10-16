#include <stdlib.h>
#include "kv.h"

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
