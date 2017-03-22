#include "headers/loader.h"

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

void            unsignedIntegerPrintHelper(unsigned int n){
  unsigned int	b;

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
  unsignedIntegerPrintHelper((unsigned int) n);
}

void  hexadecimalPrintHelper(unsigned long long n){
  unsigned long long bfn;

	while (n != 0){
		bfn = n % 16;
		if (bfn < 10)
      charPrintHelper((char) (bfn + 48));
    else
      charPrintHelper((char) (bfn + 87));
		n = n / 16;
	}
}

void  hexadecimalCapitalPrintHelper(unsigned long long n){
  unsigned long long bfn;

	while (n != 0){
		bfn = n % 16;
		if (bfn < 10)
      charPrintHelper((char) (bfn + 48));
    else
      charPrintHelper((char) (bfn + 55));
		n = n / 16;
	}
}

void	addressPrintHelper(unsigned long long n){
  stringPrintHelper("0x");
  hexadecimalPrintHelper(n);
}

void	octalPrintHelper(unsigned int n){
  unsigned int m;
  unsigned int i;

  m = 0;
  i = 1;
  while (n != 0){
    m += (n % 8) * i;
    n /= 8;
    i *= 10;
  }
  integerPrintHelper((int) m);
}
