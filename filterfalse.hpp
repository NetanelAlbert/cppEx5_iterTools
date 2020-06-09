//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_FILTERFALSE_HPP
#define CPPEX5_ITERTOOLS_FILTERFALSE_HPP

#include <iostream>
#include <vector>

namespace itertools{
    template<typename FUNC, typename CONT>
    auto filterfalse(FUNC f, CONT container){
        std::vector<decltype(typename CONT::value_type())> ans;
        for(decltype(typename CONT::value_type()) i : container){
            if( !(f(i) ))
                ans.push_back(i);
        }
        return ans;
    }
}
#endif //CPPEX5_ITERTOOLS_FILTERFALSE_HPP
