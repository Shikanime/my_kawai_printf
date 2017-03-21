/* local functions */

bool integerCheck(const string query, int n){
  if (query[n] == 'd')
    return true;
  return false;
}

bool longCheck(const string query, int n){
  if (query[n] == 'l' && query[n + 1] == 'd')
    return true;
  return false;
}

bool charCheck(const string query, int n){
  if (query[n] == 'c' || (query[n]))
    return true;
  return false;
}

bool stringCheck(const string query, int n){
  if (query[n] == 's')
    return true;
  return false;
}

bool pointerCheck(const string query, int n){
  if (query[n] == 'p')
    return true;
  return false;
}

bool shortCheck(const string query, int n){
  if (query[n] == 'h' && query[n + 1] == 'd')
    return true;
  return false;
}

bool hexadecimalCheck(const string query, int n){
  if (query[n] == 'x')
    return true;
  return false;
}
