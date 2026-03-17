using namespace std;
#include<iostream>

class Args
{
    string input,output, brlevel, rotlevel;
    bool grayscale, blur, flipH, flipV,brighten, rotate;
    int val;
public:
    string error_message;
    Args();
    bool parse(int argc, char* argv[]);
    void printSummary();
};
