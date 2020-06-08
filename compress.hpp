//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_COMPRESS_HPP
#define CPPEX5_ITERTOOLS_COMPRESS_HPP

#include <iostream>
#include <vector>

namespace itertools{
    template<typename CONT1, typename CONT2>
    std::vector<int> filterfalse(CONT1 cont1, CONT2 cont2){
        std::vector<int> ans;
        auto it1 = cont1.begin();
        auto it2 = cont2.begin();

        for(auto end1 = cont1.end(); it1 != end1; ++it1, ++it2){
            if(*it2)
                ans.push_back(it1);
        }
        return ans;
    }
}


#endif //CPPEX5_ITERTOOLS_COMPRESS_HPP
