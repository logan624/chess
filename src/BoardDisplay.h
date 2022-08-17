#include <iostream>

void displayBoard()
{
    std::cout << "      a       b       c       d       e       f       g       h" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "8 |       |       |       |       |       |       |       |       | 8" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "7 |       |       |       |       |       |       |       |       | 7" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "6 |       |       |       |       |       |       |       |       | 6" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "5 |       |       |       |       |       |       |       |       | 5" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "4 |       |       |       |       |       |       |       |       | 4" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "3 |       |       |       |       |       |       |       |       | 3" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "2 |       |       |       |       |       |       |       |       | 2" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "1 |       |       |       |       |       |       |       |       | 1" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "      a       b       c       d       e       f       g       h" << std::endl;
}

void displayPopulatedBoard()
{
    std::cout << "      a       b       c       d       e       f       g       h" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "8 |  BRo  |  BKn  |  BBi  |  BQu  |  BKi  |  BBi  |  BKn  |  BRo  | 8" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "7 |  BPa  |  BPa  |  BPa  |  BPa  |  BPa  |  BPa  |  BPa  |  BPa  | 7" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "6 |       |       |       |       |       |       |       |       | 6" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "5 |       |       |       |       |       |       |       |       | 5" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "4 |       |       |       |       |       |       |       |       | 4" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "3 |       |       |       |       |       |       |       |       | 3" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "2 |  WPa  |  WPa  |  WPa  |  WPa  |  WPa  |  WPa  |  WPa  |  WPa  | 2" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "1 |  WRo  |  WKn  |  WBi  |  WQu  |  WKi  |  WBi  |  WKn  |  WRo  | 1" << std::endl;
    std::cout << "  |       |       |       |       |       |       |       |       |" << std::endl;
    std::cout << "   --------------------------------------------------------------- " << std::endl;
    std::cout << "      a       b       c       d       e       f       g       h" << std::endl;
}
