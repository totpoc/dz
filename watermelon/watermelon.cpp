
#include <iostream>

int main()
{
    int watermelon_weight;
    std::cin >> watermelon_weight;
    if (watermelon_weight > 2 && watermelon_weight % 2 == 0)
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}

