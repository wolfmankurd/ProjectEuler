#include <stdio.h>
#include <string.h>
#include <gmp.h>

int main() {
  mpz_t res;
  int a = 0;
  int l;
  char *resStr;
  mpz_init(res);
  do {
    ++a;
    mpz_fib_ui(res, a);
    resStr = mpz_get_str(NULL, 10, res);
        l = strlen(resStr);
    //    puts(resStr);
  } while (l < 1000);
  printf("%d\n", a);
}
