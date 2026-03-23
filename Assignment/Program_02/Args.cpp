#include "Args.h"
using namespace std;
#include<iostream>
#include <cstring>
#include <string>
#include<vector>

    //flags are set to false as default
    Args :: Args()
    {
        grayscale = false;
        blur = false;
        flipH = false;
        flipV = false;
        brighten = false;
        rotate = false;
        brightenval = 0;
        rotateval= 0;
    }
    //isInteger receives the string argument entered after an option such as
    //--brighten or --rotate and checks to see if it's an integer, which is required
    bool Args::isInteger(const string& value)
    {
        try
        {
            size_t position;
            stoi(value, &position);
            return position == value.length();
        }
        catch(const invalid_argument& e)
        {
            return false;
        }
    }
    //Create string vector to hold all valid string arguments
    vector<string> valid = {"--grayscale", "--brighten", "--rotate", "--blur"};
    //Test to see if string arguments are valid
    bool Args:: argTester(string arg)
    {
        for (auto &item : valid)
        {
            if(arg==item)
            {
                return true;
            }
        }
        return false;
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
            params = params + delim + "brighten=" + to_string(brightenval);
            delim = " ";
        }
        if (rotate)
        {
            params = params + delim + "rotate=" + to_string(rotateval);
            delim = " ";
        }
        cout << "Input: " << input << endl;
        cout << "Output: " << output << endl;
        cout << "Flags: " << flags << endl; 
        cout << "Params: " << params << endl;
    }

    bool Args::parse(int argc, char* argv[])
    {
        bool result = true;
        if (argc < 3)
        {
            error_message = "Required parameters not provided. Must provide input and output file.";
            result = false;
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
                //logic for options that require values 
                if (strcmp(argv[i], "--brighten") == 0 || strcmp(argv[i], "-b") == 0)
                {
                    if (i+1 < argc)
                    {
                        brighten = true;
                        brlevel = argv[++i];
                    }
                }
                else if(result && strncmp(argv[i], "--brighten=", 11) ==0)
                {
                    string current = argv[i];
                    if(current.length() > 11)
                    {
                        brighten = true;
                        brlevel = current.substr(11);
                    }
                }
                
                if (!brlevel.empty())
                {
                    if(isInteger(brlevel))
                    {
                        brightenval = stoi(brlevel);
                        if (brightenval < -255 || brightenval > 255)
                        {
                            error_message = "Error: brightness must be in [-255,255]";
                            result = false;
                        }
                    }
                    else
                    {
                        error_message = "Brighten requires integer value.";
                        result = false;
                    }
                }
                else if(brighten)
                {
                    error_message = "Brighten requires integer value.";
                    result = false;
                }

                if (result && (strcmp(argv[i], "--rotate") == 0 || strcmp(argv[i], "-r") == 0))
                {
                    if (i+1 < argc)
                    {
                        rotate = true;
                        rotlevel = argv[++i];
                    }
                }
                else if(result && strncmp(argv[i], "--rotate=", 9) ==0)
                {
                    string current = argv[i];
                    if(current.length() > 9)
                    {
                        rotate = true;
                        rotlevel = current.substr(9);
                    }
                }
                if (!rotlevel.empty())
                {
                    if(isInteger(rotlevel))
                    {
                        rotateval = stoi(rotlevel);
                        if (rotateval == 0 || rotateval == 90 || rotateval == 180 || rotateval == 270)
                        {
                            rotate = true;
                        }
                        else
                        {
                            error_message = "Error: Rotate must be 0, 90, 180, 270";
                            result = false;
                        }
                    }
                    else
                    {
                        error_message = "Rotate requires integer value.";
                        result = false;
                    }
                }
                else if(rotate)
                {
                    error_message = "Rotate requires integer value.";
                    result = false;
                }
            }
        }
        return result;
    }
