#include "loader.h"

/* Usable functions */

void  charPrintHelper(char c){
  write(1, &c, 1);
}

long int  stringLengthHelper(char * s){
  char *  bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}

void      stringPrintHelper(char * s){
  char *  bfs;

  bfs = s;
  while (*bfs != '\0'){
    stringPrintHelper(*bfs);
    ++bfs;
  }
}

void  integerPrintHelper(int n){
  int	b;

  if (n == -2147483647) {
    stringPrintHelper((const string) ("-2147483647"));
    return;
  }
  if (n < 0) {
    stringPrintHelper('-');
    n *= -1;
  }
  if (n < 10) {
    stringPrintHelper((char) (n + 48));
    return;
  }
  b = 1;
  while (b <= (n / 10)){
    b *= 10;
  } 
  while (b >= 1) {
    stringPrintHelper((char) (n / b + '0'));
    n %= b;
    b /= 10;
  }
}
