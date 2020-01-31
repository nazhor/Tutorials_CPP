#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a secure server room" << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;

    // Part 1
    // int GuessA = 2;
    // int GuessB = 5;
    // int GuessC = 7;
    // const int GuessSum = GuessA + GuessB + GuessC;
    // const int GuessProduct = GuessA * GuessB * GuessC;
    // int GuessA;
    // int GuessB;
    // int GuessC;
    // std::cin >> GuessA;
    // std::cin >> GuessB;
    // std::cin >> GuessC;
    // std::cout << "You entered: " << GuessA  << GuessB << GuessC << std::endl;

    // Part 2
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC<< std::endl;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    const int resultSum = 10;
    const int resultProduct = 30;

    if(GuessSum == resultSum && GuessProduct == resultProduct)
    {
        std::cout << "You win! The sum is: " << GuessSum << " and the product is: " << GuessProduct << std::endl;
    }
    else
    {
        std::cout << "Nop" << std::endl;
    }

    return 0;
}