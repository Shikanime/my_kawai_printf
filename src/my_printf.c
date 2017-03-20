#include "headers/loader.h"

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

void		str_print(const string s)
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

void        my_printf(const string * query, ...) {
    int     i;
    size_t  querySize;
    va_list ap;

    querySize = str_length(query);

    va_start(ap, texte);

    i = 0;
    while (i < querySize) {
        if (query[i] == '%') {
            i++;
            // Integer
            if (query[i] == 'd') {
                nbr_print(var_arg(ap, int));
            }
        } else {
            chr_print(query[i]);
        }
    }
    var_end(ap);
}

/*
void my_printf(string str, int intArgs, float fltArgs, const string strArgs, ...) {
    va_list ap;
    string  array[MAXARGS + 1];
    int     argno;

    argno = 0;

    va_start(ap, args);
    while(argds != 0 && argno < MAXARGS) {
        array[argno++] = args;
        args = va_arg(ap, const string);
    }
    array[argno] = (string) 0;
    va_end(ap);
}
*/