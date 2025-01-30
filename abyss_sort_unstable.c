#include "abyss_sort_unstable.h"

void abyss_sort_unstable_ascending(const unsigned long input_count,
                                   unsigned long *input) {
  unsigned long input_capture;
  unsigned long gap = (input_count >> 5) + (input_count >> 3) + 1;
  unsigned long i;
  unsigned long j;

  while (gap > 0) {
    i = gap;

    while (i < input_count) {
      input_capture = input[i];
      j = i;

      while (
        j >= gap &&
        input[j - gap] > input_capture
      ) {
        input[j] = input[j - gap];
        j -= gap;
      }

      input[j] = input_capture;
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

void abyss_sort_unstable_descending(const unsigned long input_count,
                                    unsigned long *input) {
  unsigned long input_capture;
  unsigned long gap = (input_count >> 5) + (input_count >> 3) + 1;
  unsigned long i;
  unsigned long j;

  while (gap > 0) {
    i = gap;

    while (i < input_count) {
      input_capture = input[i];
      j = i;

      while (
        j >= gap &&
        input[j - gap] < input_capture
      ) {
        input[j] = input[j - gap];
        j -= gap;
      }

      input[j] = input_capture;
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
