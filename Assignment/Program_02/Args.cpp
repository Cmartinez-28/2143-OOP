#include "Args.h"
using namespace std;
#include<iostream>
#include <cstring>
#include <string>

    Args :: Args()
    {
        grayscale = false;
        blur = false;
        flipH = false;
        flipV = false;
        brighten = false;
        rotate = false;
    }

    void Args :: printSummary()
    {
        string flags = "" , delim = "";
        string params = "";
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
        if (brighten)
        {
            val = stoi(brlevel);
            params = params + delim + "brighten=" + to_string(val);
            delim = " ";
        }
        if (rotate)
        {
            val = stoi(rotlevel);
            params = params + delim + "rotate=" + to_string(val);
            delim = " ";
        }
        cout << "Input: " << input << endl;
        cout << "Output: " << output << endl;
        cout << "Flags: " << flags << endl; 
        cout << "Params: " << params << endl;
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
            {   //if statements for all flags
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
                //logic for options with values
                if (strcmp(argv[i], "--brighten") == 0 || strcmp(argv[i], "-b") == 0)
                {
                    if (i+1 < argc)
                    {
                        brighten = true;
                        brlevel = argv[++i];
                    }
                    else 
                    {
                        cout << "Brighten requires another argument" << endl;
                    }
                }
                if(strncmp(argv[i], "--brighten=", 11) ==0)
                {
                    brighten = true;
                    brlevel = argv[i] + 11;
                }
                if (strcmp(argv[i], "--rotate") == 0 || strcmp(argv[i], "-r") == 0)
                {
                    if (i+1 < argc)
                    {
                        rotate = true;
                        rotlevel = argv[++i];
                    }
                    else 
                    {
                        cout << "Rotate requires another argument" << endl;
                    }
                }
                 if(strncmp(argv[i], "--rotate=", 9) ==0)
                {
                    rotate = true;
                    rotlevel = argv[i] + 9;
                }
            }
            result = true;
        }
        return result;
    }
