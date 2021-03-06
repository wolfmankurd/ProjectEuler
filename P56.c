#include <stdio.h>
#include <gmp.h>

int main(int argc, char *argv) {
  unsigned long int n = 1000;
  mpz_t res, c, q, r, max;

  int a = 0,b = 0,maxb = 0,maxa = 0;
  mpz_init(c);
  mpz_init(q);
  mpz_init(r);
  mpz_init(res);
  mpz_init(max);

  mpz_set_ui(max, 0);



for(a = 1; a < 100; a++) {
  for(b = 1; b < 100; b++){
    mpz_ui_pow_ui(res, a, b);
    mpz_set_ui(c, 0);
    do {
      mpz_fdiv_qr_ui(res, r, res, 10);
      mpz_add(c, c, r);
    } while(mpz_cmp_ui(res, 0) > 0);
    if(mpz_cmp(c, max) > 0) {
      maxa = a;
      maxb = b;
      mpz_set(max, c);
    }
  }
}

 printf("S(%d^%d)=%s\n", maxa, maxb, mpz_get_str(NULL, 10, max));
  return 0;
}
