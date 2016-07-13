#include <stdio.h>

int main(void) {
  int n_n;
  int n_k;
  int n_value;
  int n_count = 0;

  scanf("%d %d", &n_n, &n_k);

  while(n_n--) {
    scanf("%d", &n_value);

    if(!(n_value % n_k))
      ++n_count;
  }

  printf("%d\n", n_count);
  
  return 0;
}
