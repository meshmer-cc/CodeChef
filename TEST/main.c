#include <stdio.h>

int main(void) {
  int n_value;
  
  for(;;) {
    scanf("%d", &n_value);

    if(42 == n_value)
      return 0;

    printf("%d\n", n_value);
  }
}
