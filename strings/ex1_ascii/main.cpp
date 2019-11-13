/*! \file       ex_1.cpp
 *  \author     Sergey Shershakov
 *  \version    0.1
 *  \date       15.01.2019
 *
 *  Prints printable characters of the current codepage.
 *  Печатает печатное.
 */

#include <iostream>

int main()
{
    const short MAX_IN_THE_ROW = 8;

    for(int i = 32; i < 256; ++i)
    {
        char ch = (char)i;
        std::cout << ch << " (" << i << ")\t";

        if( ((i - 31) % MAX_IN_THE_ROW) == 0)
            std::cout << std::endl;
    }

    return 0;
}
