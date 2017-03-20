typedef struct sky_s {

} sky_t;

typedef struct string_s {
    size_t (*lenght)(void string s)
} string_t;

size_t		str_length(string s) {
  string	bfs;

  for (bfs = s; *bfs != '\0'; ++bfs);

  return bfs - s;
}