/* Usable functions */

long int char *LengthHelper(char * s){
  char *	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}

void	charPrintHelper(char c){
  write(1, &c, 1);
}

void      char *PrintHelper(char * s){
  char *	bfs;

  bfs = s;
  while (*bfs != '\0'){
    charPrintHelper(*bfs);
    ++bfs;
  }
}

void  integerPrintHelper(int n){
  int	b;
  if (n == -2147483647) {
    char *PrintHelper((const char *) ("-2147483647"));
    return EXIT_NEUTRE;
  }
  if (n < 0) {
    charPrintHelper('-');
    n *= -1;
  }
  if (n < 10) {
    charPrintHelper((char) (n + 48));
    return EXIT_NEUTRE;
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
