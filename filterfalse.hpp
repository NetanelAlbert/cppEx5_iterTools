//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_FILTERFALSE_HPP
#define CPPEX5_ITERTOOLS_FILTERFALSE_HPP

#include <iostream>
#include <vector>

namespace itertools{
    template<typename FUNC, typename CONT>
    std::vector<int> filterfalse(FUNC f, CONT container){
        std::vector<int> ans;
        for(int i : container){
            if( !(f(i) ))
                ans.push_back(i);
        }
        return ans;
    }
}
#endif //CPPEX5_ITERTOOLS_FILTERFALSE_HPP
