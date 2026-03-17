#include "Args.h"
using namespace std;
#include<iostream>
#include <cstring>

    Args :: Args()
    {
        grayscale = false;
        blur = false;
        flipH = false;
        flipV = false;
    }

    void Args :: printSummary()
    {
        string flags = "" , delim = "";
        if (grayscale)
        {
            flags = "grayscale";
            delim = " ";
        }
        if (blur)
        {
            flags = flags + delim + "blur";
            delim = " ";
        }
        if (flipH)
        {
            flags = flags + delim + "flipH";
            delim = " ";
        }
        if (flipV)
        {
            flags = flags + delim + "flipV";
            delim = " ";
        }
        cout << "Input: " << input << endl;
        cout << "Output: " << output << endl;
        cout << "Flags: " << flags << endl; 
    }

    bool Args::parse(int argc, char* argv[])
    {
        bool result = false;
        if (argc < 3)
        {
            error_message = "Required parameters not provided";
        }
        else
        {
            input = argv[1];
            output = argv[2];
            for (int i = 3; i < argc; i++)
            {
                if (strcmp (argv[i],"--grayscale") == 0 || strcmp(argv[i], "-g") == 0)
                {
                    grayscale = true;
                }

                if (strcmp (argv[i],"--blur") == 0 || strcmp(argv[i], "-l") == 0)
                {
                    blur = true;
                }
                if (strcmp (argv[i],"--flipH") == 0 || strcmp(argv[i], "-h") == 0)
                {
                    flipH = true;
                }
                if (strcmp (argv[i],"--flipV") == 0 || strcmp(argv[i], "-v") == 0)
                {
                    flipV = true;
                }
            }
            result = true;
        }
        return result;
    }
