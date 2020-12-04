#include "Human.hpp"
#include <iostream>
#include <list>
#include <vector>
int main()
{
    // std::vector< Human > v;

    // std::string com;
    // std::string name;
    // for (int i = 0; i < 5; i++) {
    //     std::cin >> name;
    //     Human h{name, 15, true, true};
    //     v.push_back(h);
    // }
    // std::vector< Human >::iterator it;
    // std::cout << v.size() << ", " << v[0].getName() << "\n";
    // std::cin >> com;

    // if (com == "pop")
    //     v.pop_back();
    // for (it = v.begin(); it != v.end(); it++) {
    //     std::cout << it->getName() << "\n";
    // }
    std::list< int > list;
    list.push_back(1);
    std::cout << list.front() << ", " << list.back() << "\n";
    list.push_front(2);
    std::cout << list.front() << ", " << list.back() << "\n";
    std::cout << &list.front() << ", " << &list.back() << "\n";
    list.push_front(5);
    list.push_front(3);
    list.push_front(4);
    std::list< int >::const_reverse_iterator it = list.rbegin();
}