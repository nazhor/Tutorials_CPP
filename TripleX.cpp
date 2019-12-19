#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a secure server room" << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    // int GuessA = 2;
    // int GuessB = 5;
    // int GuessC = 7;

    // const int GuessSum = GuessA + GuessB + GuessC;
    // const int GuessProduct = GuessA * GuessB * GuessC;

    int GuessA;
    int GuessB;
    int GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA  << GuessB << GuessC << std::endl;

    return 0;
}