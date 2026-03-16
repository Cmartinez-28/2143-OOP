using namespace std;
#include<iostream>

class Args
{
    string input,output;
    bool grayscale, blur = false;
public:
    string error_message;
    Args();
    bool parse(int argc, char* argv[]);
    void printSummary();
};
