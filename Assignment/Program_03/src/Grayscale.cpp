#include "Grayscale.h"

std::string Grayscale::name() const {
    return "grayscale";
}

void Grayscale::apply(Grid& pixels) {
    for (auto& row : pixels)
    {
         for (Pixel& p : row) 
         {
            int gray = (p.r + p.g + p.b) / 3;
            p.r = gray;
            p.g = gray;
            p.b = gray;
         }

    }