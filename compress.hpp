//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_COMPRESS_HPP
#define CPPEX5_ITERTOOLS_COMPRESS_HPP

#include <iostream>
#include <vector>

namespace itertools{
    template<typename CONT1, typename CONT2>
    auto compress(CONT1 cont1, CONT2 cont2){
        std::vector<typename CONT1::value_type()> ans;
        typename CONT1::iterator it1 = cont1.begin();
        typename CONT2::iterator it2 = cont2.begin();

        for(typename CONT1::iterator end1 = cont1.end(); it1 != end1; ++it1, ++it2){
            if(*it2)
                ans.push_back(*it1);
        }
        return ans;
    }
}


#endif //CPPEX5_ITERTOOLS_COMPRESS_HPP
