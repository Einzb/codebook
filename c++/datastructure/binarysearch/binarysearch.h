#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H


template <class T>
class BinarySearch
{
public:
    BinarySearch();
    int search(T target, T *list, int from, int to);
};

#endif // BINARYSEARCH_H
