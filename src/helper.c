#include "loader.h"

/* Usable functions */

void  charPrintHelper(char c){
  write(1, &c, 1);
}

long int  stringLengthHelper(const char * s){
  const char *  bfs;

  bfs = s;
  while (*bfs != '\0'){
    ++bfs;
  }

  return bfs - s;
}

void      stringPrintHelper(const char * s){
  const char *  bfs;

  bfs = s;
  while (*bfs != '\0'){
    charPrintHelper(*bfs);
    ++bfs;
  }
}

void  unsignedIntegerPrintHelper(unint n){
  unint	b;

  if (n < 10) {
    charPrintHelper((char) (n + 48));
    return;
  }
  b = 1;
  while (b <= (n / 10)){
    b *= 10;
  }
  while (b >= 1) {
    charPrintHelper((char) (n / b + '0'));
    n %= b;
    b /= 10;
  }
}

void  integerPrintHelper(int n){
  if (n == -2147483647){
    stringPrintHelper((char *) ("-2147483647"));
  }
  if (n < 0) {
    charPrintHelper('-');
    n *= -1;
  }
  unsignedIntegerPrintHelper((unint) n);
}

void  unsignedHexadecimalPrintHelper(long long n){
  long long bfn;

  if (n >= 16){
      bfn = n % 16;
      n /= 16;
      unsignedHexadecimalPrintHelper(n);
  } else if (n > 0){
      bfn = n % 16;
      n /= 16;
  }
  if (bfn > 9){
    charPrintHelper((char) (bfn + 87));
  } else {
    charPrintHelper((char) (bfn + 48));
  }
}

void  unsignedHexadecimalCapitalPrintHelper(long long n){
  long long bfn;

  if (n >= 16){
      bfn = n % 16;
      n /= 16;
      unsignedHexadecimalPrintHelper(n);
  } else if (n > 0){
      bfn = n % 16;
      n /= 16;
  }
  if (bfn > 9){
    charPrintHelper((char) (bfn + 55));
  } else {
    charPrintHelper((char) (bfn + 48));
  }
}

void	addressPrintHelper(long long n){
  stringPrintHelper("0x");
  unsignedHexadecimalPrintHelper(n);
}

void	signedOctalPrintHelper(int n){
  int m;
  int i;

  m = 0;
  i = 1;
  while (n != 0){
    m += (n % 8) * i;
    n /= 8;
    i *= 10;
  }
  integerPrintHelper((signed int) m);
}
