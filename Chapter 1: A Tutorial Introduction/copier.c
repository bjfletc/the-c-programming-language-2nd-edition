/* code that copies standard i/o */

#include <stdio.h>

main() {
  int c;
  c = getchar();

  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
}
