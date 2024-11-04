# WSP-Sort-Unstable
© 2024 William Stafford Parsons

## About
WSP-Sort-Unstable is a bitwise calculation for an optimal sequence of unstable Shell Sort gaps as a substantial improvement to Ciura, Knuth, Sedgewick and Tokuda sequences.

Read more [here](https://williamstaffordparsons.github.io/wsp-sort-unstable/).

## Example
``` c
#include <stdio.h>
#include "wsp_sort_unstable.h"

int main(void) {
  unsigned long input[10] = {1, 111, 111, 11, 111111, 111, 1, 11, 111111111, 1};
  unsigned long i = 0;

  wsp_sort_unstable_ascending(10, input);

  while (i != 10) {
    printf("%u\n", input[i]);
    i++;
  }

  wsp_sort_unstable_descending(10, input);
  i = 0;

  while (i != 10) {
    printf("%u\n", input[i]);
    i++;
  }

  return 0;
}
```
