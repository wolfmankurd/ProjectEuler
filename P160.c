#include <stdio.h>
#include <gmp.h>

int main(int argc, char *argv) {
  unsigned long int n = 999999999999;
  mpz_t rop;

  mpz_init(rop);
  mpz_fac_ui(rop, n);
  
  printf("%s\n", mpz_get_str(NULL, 10, rop));
  
  return 0;
}
