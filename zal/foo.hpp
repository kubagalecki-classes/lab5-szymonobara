#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::list<Human>::iterator it = people.begin();
    
    
    for(; it != people.end(); it++){
      it->birthday();
    }
    std::list<Human>::reverse_iterator rit = people.rbegin();
    std::vector<char> v;
    for(; rit != people.rend(); rit++)
    {
      if(rit->isMonster() == true){
        v.emplace_back('n');
      }
      else{
        v.emplace_back('y');
      }
    }
    return v;
}
