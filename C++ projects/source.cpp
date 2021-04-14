#include <iostream>
extern "C"
{
#include "cfile.h"
}


using namespace std;
int main()
{
    printf("inside cpp");
    sum(10,20);
    return 0;
}
