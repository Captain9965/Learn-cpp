#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include<vector>
#include<algorithm>

#define MAX_SMA_SIZE 255 //@todo allocate dynamically


class SMA {
public:
    SMA(int size) : _size(size)
    {
        _size = (_size <= MAX_SMA_SIZE) ? _size : MAX_SMA_SIZE;
        memset(_datapoints, 0, (size_t)_size);
    }

    ~SMA() {}

    double append(double value)
    {
        _sum -= _datapoints[_index];
        _datapoints[_index] = value;
        _sum += value;
        _index = (_index + 1) % _size;

        if (_counter < _size) {
            _counter++;
        }

        return (_sum / _size);
    }

    int mode()
    {
        return tmode(_datapoints, _counter == _size ? _size : _counter);
    }

    template <class T>
    T tmode(T* arr, size_t n)
    {
        std::map<T, size_t> counts;

        n = (n <= MAX_SMA_SIZE) ? n : MAX_SMA_SIZE;

        for (size_t i = 0; i < n; i++) {
            ++counts[arr[i]];
        }

        return max_element(counts.begin(), counts.end(),
        [](std::pair<T, size_t> const & a, std::pair<T, size_t> const & b) {
            return a.second < b.second;
        })->first;
    }

    double get()
    {
        return _sum;
    }

    void clear()
    {
        for (int i = 0; i < _size; i++) {
            _datapoints[i] = 0;
        }

        _counter = 0;
        _index = 0;
    }

private:
    unsigned int _counter = 0;
    int _size = 0;
    int _datapoints[MAX_SMA_SIZE] = {0}; // @todo dynamic allocation
    unsigned int _index = 0;
    double _sum = 0;
};

int main(){
    SMA mass(25);
    mass.append(30/10);
    int modified_mass = mass.mode();
    std::cout << "This is the final mass: " << modified_mass << "\n";
    }