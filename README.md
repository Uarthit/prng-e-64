# PRNG E 64

It's a fast, statistically-strong PRNG with 64-bit integers and a minimum period of 2¹⁰²⁴ to 2⁶⁵⁵³⁶.

`prng_e_64()` is the randomization function that generates a 64-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It returns a 64-bit unsigned integer pseudorandom number result.

It's in the same class as 64-bit SIMD-enhanced Mersenne Twister.

It has an adjustable minimum period of 2¹⁰²⁴ to 2⁶⁵⁵³⁶ without broken cycles.

The period is adjustable to doubled or halved amounts by adjusting the 1024 64-bit state `blocks`, meaning the possible state sizes are 1024, 512, 256, 128, 64, 32 and a minimum of 16.

Whenever the count of `blocks` is adjusted, the default `& 1023` masks must be adjusted accordingly.

The minimum period increases linearly based on the count of `blocks` as the following table demonstrates.

```
Blocks   Minimum     & Mask
Count    2ⁿ Period

16       1024        15
32       2048        31
64       4096        63
128      8192        127
256      16384       255
512      32768       511
1024     65536       1023
```

1024 isn't a hard maximum and varying state sizes may result in varying statistical quality.

Incrementing `b` outside of `prng_e_64()` behaves as an interdimensional jump function that starts a different cycle.

Zeroland escapes quickly after generating 3 subsequent numbers.

It's the fastest 64-bit PRNG that generates numbers individually, has a period of at least 2¹⁰²⁴ and passes statistical tests in `stdin64` PractRand with TBs of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
