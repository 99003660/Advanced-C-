#include <iostream>
extern "C" void fun();

using namespace std;
void fun()
{
	cout << "hello" << endl;
}
/*{
#include "cfile.h"
}


using namespace std;
int main()
{
    printf("inside cpp");
    sum(10,20);
    return 0;
}*/
