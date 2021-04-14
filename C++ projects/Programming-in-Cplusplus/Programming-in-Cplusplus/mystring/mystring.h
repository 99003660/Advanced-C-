#include <string.h>
class mystring{
  int len;
  char* str;
  public:
    mystring();
    mystring(const char* strin);
    mystring(const mystring&);
    mystring& operator=(const mystring&);
    size_t str_len();
    const char* get_str();
    int set_str(const char*);
    ~mystring();
};
