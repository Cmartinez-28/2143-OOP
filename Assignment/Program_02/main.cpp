using namespace std;
#include<iostream>
#include "Args.h"

int main(int argc, char* argv[])
{
    Args arg;
    if (arg.parse(argc, argv))
    {
        arg.printSummary();
    }
    else 
    {
        cout << "Failed" << endl;
        cout << arg.error_message << endl;
    }
}
