#include "prng_e_64.h"

uint64_t prng_e_64(struct prng_e_64_s *s) {
  uint64_t block = s->blocks[s->b & 1023] + s->a;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111ULL;
  s->blocks[s->b & 1023] += (block << 23) | (block >> 41);
  return block;
}
