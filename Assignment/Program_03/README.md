## Christopher Martinez
## Program 03
This program uses the Args parser from Program 02 to drive an image processing pipeline. Each image operation inherits from a common Filter interface. A pipeline object owns a sequence of filters and calls them in order.
### Files

|  #  |  File         |  Description                 |
| :---: |  ------------ | ---------------------------- |
| 2 |  [Args.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Args.cpp)  | ---------------------------- |
| 3 |  [Args.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Args.h)  | ---------------------------- |
| 4 |  [Blur.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Blur.cpp) | ---------------------------- |
| 5 |  [Blur.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Blur.h) | ---------------------------- |
| 6 |  [Brighten.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Brighten.cpp) | ---------------------------- |
| 7 |  [Brighten.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Brighten.h) | ---------------------------- |
| 8 |  [Filter.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Filter.h) | ---------------------------- |
| 9 |  [FlipH.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/FlipH.cpp) | ---------------------------- |
| 10 |  [FlipH.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/FlipH.h) | ---------------------------- |
| 11 |  [FlipV.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/FlipV.cpp) | ---------------------------- |
| 12 |  [FlipV.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/FlipV.h) | ---------------------------- |
| 13 |  [Grayscale.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Grayscale.cpp) | ---------------------------- |
| 14 |  [Grayscale.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Grayscale.h) | ---------------------------- |
| 15 |  [Image.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Image.cpp) | ---------------------------- |
| 16 |  [Image.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Image.h) | ---------------------------- |
| 17 |  [Pipeline.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Pipeline.cpp) | ---------------------------- |
| 18 |  [Pipeline.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Pipeline.h) | ---------------------------- |
| 19 |  [Rotate.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Rotate.cpp) | ---------------------------- |
| 20 |  [Rotate.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/Rotate.h) | ---------------------------- |
| 21 |  [main.cpp](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/src/main.cpp) | ---------------------------- |
| 22 |  [stb_image.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/include/stb_image.h) | ---------------------------- |
| 23 |  [stb_image_write.h](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/include/stb_image_write.h) | ---------------------------- |
| 24 |  [Hulda.jpg](https://github.com/Cmartinez-28/2143-OOP/blob/main/Assignment/Program_03/images/Hulda.jpg) | ---------------------------- |
