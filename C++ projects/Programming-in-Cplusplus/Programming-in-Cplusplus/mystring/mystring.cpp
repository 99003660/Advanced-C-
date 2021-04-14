#include "mystring.h"
mystring::mystring() : len(0), str(NULL)
{
}
mystring::mystring(const char *strin) : len(strlen(strin)), str(NULL)
{
    str = new char[len + 1];
    strncpy(str, strin, len+1);
}
mystring::mystring(const mystring &ref) : len(ref.len), str(NULL)
{
    str = new char[len + 1];
    strncpy(str, ref.str, len);
    strcat(str, "\0");
}
mystring& mystring::operator=(const mystring &ref)
{
    if (NULL != str)
        delete[] str;

    len = ref.len;
    str = new char[len + 1];
    strncpy(str, ref.str, len);
    strcat(str, "\0");

    return *this;
}
size_t mystring::str_len()
{
    return len ;
}

const char* mystring::get_str()
{
    return str;
}
int mystring::set_str(const char* new_str)
{
    if(NULL == new_str)
        memset(str, '\0', len);
        
    len = strlen(new_str) +1;
    strncpy(str, new_str, len -1);
    return 1;
}
mystring::~mystring()
{
    //delete str;
    delete[] str;
}

