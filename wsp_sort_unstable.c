#include "wsp_sort_unstable.h"

void wsp_sort_unstable_ascending(unsigned long input_count,
                                 unsigned long *input) {
  unsigned long _input;
  unsigned long gap = (input_count >> 5) + (input_count >> 3) + 1;
  unsigned long i;
  unsigned long j;

  while (gap > 0) {
    i = gap;

    while (i < input_count) {
      _input = input[i];
      j = i;

      while (
        j >= gap &&
        input[j - gap] > _input
      ) {
        input[j] = input[j - gap];
        j -= gap;
      }

      input[j] = _input;
      i++;
    }

    if (
      gap > 3 ||
      gap == 1
    ) {
      gap = (gap >> 5) + (gap >> 2);
    } else {
      gap = 1;
    }
  }
}

void wsp_sort_unstable_descending(unsigned long input_count,
                                  unsigned long *input) {
  unsigned long _input;
  unsigned long gap = (input_count >> 5) + (input_count >> 3) + 1;
  unsigned long i;
  unsigned long j;

  while (gap > 0) {
    i = gap;

    while (i < input_count) {
      _input = input[i];
      j = i;

      while (
        j >= gap &&
        input[j - gap] < _input
      ) {
        input[j] = input[j - gap];
        j -= gap;
      }

      input[j] = _input;
      i++;
    }

    if (
      gap > 3 ||
      gap == 1
    ) {
      gap = (gap >> 5) + (gap >> 2);
    } else {
      gap = 1;
    }
  }
}
