#include <iostream>
#include "header.h"


int main() {
    std::cout << "Enter the command: " << std::endl;
    std::cout << "1. Add a value to the dictionary" << std::endl;
    std::cout << "2. Find the meaning in the dictionary" << std::endl;
    std::cout << "0. Exit" << std::endl;

    int choice = 0;
    Dictionary control;
    std::string key;
    std::string value;

    while (true)
    {
        std::cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice)
        {
        case 1:
            std::cout << "Enter key: ";
            std::cin >> key;

            std::cout << std::endl;

            std::cout << "Enter value: ";
            std::cin >> value;

            control.addDict(key, value);
            break;
        case 2:
            std::cout << "Enter key: ";
            std::cin >> key;

            std::cout << std::endl;

            control.searchDict(key);

            break;
        default:
            std::cout << "invalid input" << std::endl;
            break;
        }

        std::cout << "Enter command: " << std::endl;
    }
    
    std::cout << "Thanks for using" << std::endl;
    return 0;
}