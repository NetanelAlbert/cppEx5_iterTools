//
// Created by nati on 08/06/2020.
//

#ifndef CPPEX5_ITERTOOLS_RANGE_HPP
#define CPPEX5_ITERTOOLS_RANGE_HPP
namespace itertools{
    class range{
        int _begin, _end;

        class int_iterator{
            int _data;
        public:
            explicit int_iterator(int d): _data(d) {};
            int_iterator(const int_iterator& other) = default;
            int_iterator& operator=(const int_iterator& other){
                this->_data = other._data;
                return *this;
            };
            int_iterator& operator ++(){
                ++_data;
                return *this;
            }
            int_iterator operator ++(int){
                int_iterator tmp = *this;
                ++_data;
                return tmp;
            }
            bool operator ==(const int_iterator& other) {
                return (_data == other._data);
            }
            bool operator !=(const int_iterator& other) {
                return (_data != other._data);
            }
            int operator *(){
                return _data;
            }
        };

    public:
        range(int begin, int end): _begin(begin), _end(end){}

        int_iterator begin(){
            return int_iterator(_begin);
        }
        int_iterator end(){
            return int_iterator(_end);
        }
    };
}
#endif //CPPEX5_ITERTOOLS_RANGE_HPP
