## Program 02
## Christopher Martinez

### Files

|  #  |  File         |  Description                 |
|:---:|  ------------ | ---------------------------- |
|  1  |  [main.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_02/main.cpp)     |Parsing & printing function is called if valid arguments are input; if arguments are not valid, error message is printed|
|  2  |  [Args.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_02/Args.cpp)     |All data members are assigned value; includes all method definitions and logic for testing arguments|
|  3  |  [Args.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_02/Args.h)     |Includes Args class definition with data members and method prototypes|

## Instructions
Must include all three files  

How to run the code:\
./imgtool <input_image> <output_image> [options]

Command line input example:\
./imgtool input.png output.png -g --brighten 20 --rotate=90

Brighten value must be in [-255,255]\
Rotate value must be one of (0,90,180,270)

Valid arguments (N being an integer)\
[--grayscale | -g] [--blur | -l] [--flipH | -h] [--flipV | -v] [--brighten N | -b N | --brighten=N] [--rotate N | -r N | --rotate=N]
