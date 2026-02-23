#include <iostream>

#include "src/where.hpp"

int main()

{
    std::string phrase = "My dog is a golden retriever";

    std::cout << "i\t" << find(phrase, 'i') << std::endl;

    std::cout << "' '\t" << find(phrase, ' ') << std::endl;

    std::cout << "a\t" << find(phrase, "a") << std::endl;

    std::cout << "dog\t" << find(phrase, "dog") << std::endl;

    std::cout << "Horse\t" << find(phrase, "Horse") << std::endl;

    return 0;
}