#include <iostream>

void PrintIntroduction(int CurrentDifficulty)
{
    std::cout << "You are a secret agent breaking into a secure server room" << std::endl;
    std::cout << "You need to enter the correct codes to continue..." << std::endl;
    std::cout << "-- Difficulty " << CurrentDifficulty << "--" << std::endl;
}

bool PlayGame(int CurrentDifficulty)
{
    PrintIntroduction(CurrentDifficulty);

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC<< std::endl;
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    const int resultSum = 10;
    const int resultProduct = 30;

    if(GuessSum == resultSum && GuessProduct == resultProduct)
    {
        std::cout << "You win! The sum is: " << GuessSum << " and the product is: " << GuessProduct << std::endl;
        return true;
    }
    else
    {
        std::cout << "Nop" << std::endl;
        return false;
    }
}

int main()
{
    int LevelDifficulty = 1;
    while(true)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    return 0;
}