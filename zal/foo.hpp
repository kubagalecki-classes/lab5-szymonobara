#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    char x='n';
    char y='y';
    std::list<Human>::iterator it = people.begin();
    
    
    for(; it != people.end(); it++)
      it->birthday();
    std::list<Human>::const_reverse_iterator rit = people.rbegin();
    std::vector<char> v;
    for(; it!=people.rend(); it++)
    {
      if(it->isMonster() == true)
        v.push_back(x);
      else
        v.push_back(y);
    }
    return v;
}
