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
       
    }
}