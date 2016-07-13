#include <stdio.h>

int main(void) {
  int   n_t;
  int   n_count;
  char  sz_number[32];
  char *p_i;

  scanf("%d", &n_t);

  while(n_t--) {
    scanf("%s", sz_number);

    for(p_i = sz_number, n_count = 0; *p_i; ++p_i) {
      if('4' == *p_i)
        ++n_count;
    }

    printf("%d\n", n_count);
  }
  
  return 0;
}
