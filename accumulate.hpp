//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_ACCUMULATE_HPP
#define CPPEX5_ITERTOOLS_ACCUMULATE_HPP
namespace itertools{
    template <typename CONT>
    class accumulate{
        CONT _container;

        template <typename IT>
        class sum_iterator{
            double _data = 0;
            IT _iter;
        public:
            explicit sum_iterator(IT iter): _iter(iter) {};
            sum_iterator(const sum_iterator<IT>& other) = default;
            sum_iterator& operator=(const sum_iterator<IT>& other){
                this->_data = other._data;
                this->_iter = other._iter;
                return *this;
            };
            sum_iterator& operator ++(){
                _data+= *_iter;
                ++_iter;
                return *this;
            }
            sum_iterator operator ++(int){
                sum_iterator tmp = *this;
                _data += *_iter;
                ++_iter;
                return tmp;
            }
            bool operator ==(const sum_iterator& other) {
                return (_iter == other._iter);
            }
            bool operator !=(const sum_iterator& other) {
                return (_iter != other._iter);
            }

            double operator *(){
                return _data;
            }
        };

    public:
        accumulate(CONT container): _container(container){}

        sum_iterator begin(){
            return sum_iterator(_container.begin());
        }
        sum_iterator end(){
            return sum_iterator(_container.end());
        }
    };
}

#endif //CPPEX5_ITERTOOLS_ACCUMULATE_HPP
