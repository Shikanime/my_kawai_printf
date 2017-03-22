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

void  integerPrintHelper(int n){
  int	b;

  if (n == -2147483647) {
    stringPrintHelper((char *) ("-2147483647"));
    return;
  }
  if (n < 0) {
    charPrintHelper('-');
    n *= -1;
  }
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

void  hexadecimalPrintHelper(long long n){
  long long	bfn;

  if (n > 15){
      bfn = n % 16;
      n /= 16;
      hexadecimalPrintHelper(n);
  } else if (n > 0) {
      bfn = n % 16;
      n /= 16;
  }
  if (bfn > 9){
    charPrintHelper((char) (bfn + 87));
  } else {
    charPrintHelper((char) (bfn + 48));
  }
}

void  hexadecimalCapitalPrintHelper(long long n){
  long long	bfn;

  if (n > 15){
      bfn = n % 16;
      n /= 16;
      hexadecimalPrintHelper(n);
  } else if (n > 0) {
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
  hexadecimalPrintHelper(n);
}

void	octalPrintHelper(int n){
  int	bfn;

  if (n >= 8){
      bfn = n % 8;
      n = n / 8;
      octalPrintHelper(n);
  } else if (n > 0) {
      bfn = n % 8;
      n = n / 8;
  }
  charPrintHelper((char) (bfn + 48));
}
