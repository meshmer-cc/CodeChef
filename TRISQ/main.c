#include <stdio.h>

int main(void) {
  int n_t;
  int n_b;

  scanf("%d", &n_t);

  while(n_t--) {
    scanf("%d", &n_b);

    if(n_b > 2) {
      n_b >>= 1;
      n_b = (n_b * (n_b - 1)) >> 1;
    } else n_b = 0;

    printf("%d\n", n_b);
  }
  
  return 0;
}
