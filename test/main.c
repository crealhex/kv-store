#include "kv.h"

int main(void) {
  struct hashmap *hm = kv_init(16);
  if (NULL == hm) {
    return 1;
  }
  free(hm->entries);
  free(hm);
  return 0;
}

