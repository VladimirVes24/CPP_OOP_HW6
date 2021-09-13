#include <iostream>
#include <cstdlib>

//Task 1 ============================================================

int getInt()
{
    int input = 0;
    while (true)
    {
        std::cout << "Enter your number: ";
        std::cin >> input;
        if (std::cin) return input;
        else
        {
            system("cls");
            std::cerr << "Incorrect format!" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');           
        }
    }
}

//Task 2 =============================================================

std::ostream& endll(std::ostream &stream)
{
    stream << "\n\n";
    stream.clear();
    return stream;
}

//Task 3 =============================================================

int main()
{
    int result = getInt();
    std::cout << "Your number is " << result << endll << "Task 2 test";
}


