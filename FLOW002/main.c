#include <stdio.h>

int main(void) {
  int n_a;
  int n_b;
  int n_t;

  scanf("%d", &n_t);

  while(n_t--) {
    scanf("%d %d", &n_a, &n_b);

    printf("%d\n", n_a % n_b);
  }
  
  return 0;
}
