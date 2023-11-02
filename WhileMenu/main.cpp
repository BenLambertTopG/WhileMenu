#include <iostream>

int main()
{

    char Selection{};

    do
    {
        std::cout << "\n----------------------" << std::endl;
        std::cout << "1: Blue Pill" << std::endl;
        std::cout << "2: Blue Pill" << std::endl;
        std::cout << "3: Red Pill" << std::endl;
        std::cout << "\nMake your choice...";
        std::cin >> Selection;

        if (Selection == '1')
            std::cout << "\nStay on the treadmil" << std::endl;
        else if (Selection == '2')
            std::cout << "\nStay on the treadmil" << std::endl;
        else if (Selection == '3')
            std::cout << "\nThe Spoon isn't real..." << std::endl;
        else
            std::cout << "\nUnknown Option - Try again" << std::endl;
    } while (Selection != '3');

    return 0;
}