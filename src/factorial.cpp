#include <iostream>
#include <stdlib.h>
#include "inc/InfInt.h"

using namespace std;

InfInt fact(InfInt num)
{
    if (num == "0LL")
    {
        return 1LL;
    }
    return num * fact(num - 1LL);
}

int main(int argc, char *argv[])
{
    InfInt temp = argv[1];
    cout << fact(temp) << endl;
    return EXIT_SUCCESS;
}
