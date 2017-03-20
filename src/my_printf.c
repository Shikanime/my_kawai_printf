#include "headers/loader.h"
#define PROCESS_NUMBER 7

/* Local helpers */

size_t		stringLengthHelper(string s){
  string	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}

void	charPrintHelper(const char c){
  write(1, &c, 1);
}

void      stringPrintHelper(const string s){
  string	bfs;

  bfs = s;
  while (*bfs != '\0'){
    charPrintHelper(*bfs);
    ++bfs;
  }
}

void  integerPrintHelper(int n){
  int	b;

  if (n == -2147483647) {
    stringPrintHelper("-2147483647");
    return VOID;
  }
  if (n < 0) {
    charPrintHelper('-');
    n *= -1;
  }
  if (n < 10) {
    charPrintHelper(n + 48);
    return VOID;
  }
  b = 1;
  while (b <= (n / 10)){
    b *= 10;
  } 
  while (b >= 1) {
    charPrintHelper(n / b + '0');
    n %= b;
    b /= 10;
  }
}

/* Internal prototype */

bool integerCheck();
bool longCheck();
bool charCheck();
bool stringCheck();
bool pointerCheck();
bool shortCheck();
bool hexadecimalCheck();

bool (*check[])(const string query, int i) = {
   integerCheck,
   longCheck,
   charCheck,
   stringCheck,
   pointerCheck,
   shortCheck,
   hexadecimalCheck
} ;

void integerPrint();
void longPrint();
void charPrint();
void stringPrint();
void pointerPrint();
void shortPrint();
void hexadecimalPrint();

void (*print[])(var_list ap, char* opt) = {
   integerPrint,
   longPrint,
   charPrint,
   stringPrint,
   pointerPrint,
   shortPrint,
   hexadecimalPrint
} ;

/* Usable functions */

void        my_printf(const string query, ...) {
    int     i,
            j;
    size_t  querySize;
    va_list ap;

    querySize = stringLengthHelper(query);

    va_start(ap, query);

    i = 0;
    while (i < querySize) {
        if (query[i] == '%') {
          ++i;

          // Options
          // TODO

          // Process
          j = 0;
          while (j < PROCESS_NOMBER) {
             if ((*check[j])(query, j))
                (*print[j])(ap, opt);
             ++j;
          }
        } else {
            chr_print(query[i]);
        }
        ++i;
    }

    var_end(ap);
}

/* Local functions */

// Checker
bool integerCheck(const string query, int n){
  if (query[n] == 'd')
    return true;
}

bool longCheck(const string query, int n){
  if (query[n] == 'l' && query[n + 1] == 'd')
    return true;
}

bool charCheck(const string query, int n){
  if (query[n] == 'c' || (query[n]))
    return true;
}

bool stringCheck(const string query, int n){
  if (query[n] == 's')
    return true;
}

bool pointerCheck(const string query, int n){
  if (query[n] == 'p')
    return true;
}

bool shortCheck(const string query, int n){
  if (query[n] == 'h' && query[n + 1] == 'd')
    return true;
}

bool hexadecimalCheck(const string query, int n){
  if (query[n] == 'x')
    return true;
}


// Printer
void integerPrint(var_list ap, char* opt){
  integerPrintHelper(var_arg(ap, int));
}

void longPrint(var_list ap, char* opt){
}

void charPrint(var_list ap, char* opt){
  charPrintHelper(var_arg(ap, char));
}

void stringPrint(var_list ap, char* opt){
  stringPrintHelper(var_arg(ap, string));
}

void pointerPrint(var_list ap, char* opt){
}

void shortPrint(var_list ap, char* opt){
}

void hexadecimalPrint(var_list ap, char* opt){
}