#include "Array.hpp"

template <typename T>
Array<T>::Array() : _data(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : _data(new T[size]()), _size(size) {} // new T[] alloue new T[]() alloue et init par défaut