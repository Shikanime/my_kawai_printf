#include "headers/loader.h"
#define PROCESS_NUMBER 7

// /!\ DEV /!\ NEED TO BE SEPARATE
size_t		str_length(string s)
{
  string	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}

void	chr_print(const char c)
{
  write(1, &c, 1);
}

bool		str_print(const string s)
{
  string	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs)
    chr_print(*bfs);
}

void	nbr_print(int n)
{
  int	b;

  if (n == -2147483647) {
    str_print("-2147483647");
    return VOID;
  }
  
  if (n < 0) {
    chr_print('-');
    n *= -1;
  }
  
  if (n < 10) {
    chr_print(n + 48);
    return VOID;
  }

  for (b = 1; b <= (n / 10); b *= 10);
  
  while (b >= 1) {
    chr_print(n / b + '0');
    n %= b;
    b /= 10;
  }
}
// /!\ DEV /!\ NEED TO BE SEPARATE - END

// FUNCTIONNAL CODE

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

    querySize = str_length(query);

    va_start(ap, query);

    i = 0;
    while (i < querySize) {
        if (query[i] == '%') {
          ++i;
          j = 0;
          while(j < PROCESS_NOMBER) {
             if((*check[j])(query, j))
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
  nbr_print(var_arg(ap, int));
}

void integerPrint(var_list ap, char* opt){
}

void charPrint(var_list ap, char* opt){
}

void stringPrint(var_list ap, char* opt){

}

void pointerPrint(var_list ap, char* opt){

}

void shortPrint(var_list ap, char* opt){

}

void hexadecimalPrint(var_list ap, char* opt){

}