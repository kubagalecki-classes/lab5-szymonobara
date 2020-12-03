#include "Human.hpp"
#include <iostream>
#include <vector>
int main()
{
    std::vector< Human > v;
    std::string          com;
    std::string          name;
    for (int i = 0; i < 5; i++) {
        std::cin >> name;
        Human h{name, 15, true, true};
        v.push_back(h);
    }
    std::cout << v.size() << ", " << v[0].getName() << "\n";
    std::cin >> com;

    if (com == "pop")
        v.pop_back();
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i].getName() << "\n";
    }
}