#include "Rotate.h"
#include <algorithm>
using namespace std;

Rotate::Rotate(int degrees) : degrees_(degrees) {}

std::string Rotate::name() const {
    return "rotate(" + std::to_string(degrees_) + ")";
}

void Rotate::apply(Grid& pixels) 
{
    int height = static_cast<int>(pixels.size());
    if (height == 0) return;
    int width  = static_cast<int>(pixels[0].size());
    (void)width;  // used in the TODO branches — remove this line when implementing

    if (degrees_ == 0) 
    {
        return;  // nothing to do
    }

    if (degrees_ == 180)
    {
        for(auto& row : pixels)
        {
            for (int col = 0; col < width / 2; ++col)
            {
                swap(row[col], row[width - 1 - col]);
            }
        }
        for(int row = 0; row < height / 2; ++row)
        {
            swap(pixels[row],pixels[height - 1- row]);
        }
    }

    if (degrees == 90)
    {
        
    }
}