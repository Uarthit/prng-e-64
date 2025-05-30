#ifndef PRNG_E_64_H
#define PRNG_E_64_H

#include <stdint.h>

struct prng_e_64_s {
  uint64_t blocks[1024];
  uint64_t a;
  uint64_t b;
};

uint64_t prng_e_64(struct prng_e_64_s *s);

#endif
