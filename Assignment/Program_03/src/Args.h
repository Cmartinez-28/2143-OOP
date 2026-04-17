
using namespace std;
#include<iostream>

class Args
{
    string input,output, brlevel, rotlevel;
    bool grayscale, blur, flipH, flipV,brighten, rotate;
    int brightenval, rotateval;
    
public:
    string error_message;
    Args();
    bool parse(int argc, char* argv[]);
    bool argTester(string arg);
    void printSummary();
    bool isInteger(const string& value);
};
