#include <stdio.h>

static int xor_all(int n_n) {
  int n_xor;
  int n_i;
  int n_part_1;
  int n_part_2;

  for(n_i = n_xor = 0; (1 << n_i) <= n_n; ++n_i) {
    n_part_1 = (n_n >> (n_i + 1)) << n_i;
    n_part_2 = (((n_n & (1 << n_i)) >> n_i)
                * (n_n + 1 - ((n_n >> n_i) << n_i)));

    n_xor |= (((n_part_1 + n_part_2) & 1)
              * (1 << n_i));
  }

  return n_xor;
}

int main(void) {
  int n_t;
  int n_n;
  int n_i;
  int n_1;
  int n_2;

  scanf("%d", &n_t);

  while(n_t--) {
    scanf("%d", &n_n);

    for(n_i = 0; n_i < n_n; ++n_i)
      scanf("%d %d", &n_1, &n_2);

    printf("%d\n", xor_all(n_n));
  }
  
  return 0;
}
