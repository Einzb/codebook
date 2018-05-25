// code by Jason Huang aka Einz
// github: https://github.com/Einzb
// website: https://einzmind.blogspot.tw
// discord: https://discord.gg/G4jEeDC
// email: jason199786109@gmail.com

#include "binarysearch.h"

template <class T>
BinarySearch<T>::BinarySearch()
{

}

// Find the target value's index in the given array(sorted)
template <class T>
int BinarySearch<T>::search(T target, T *list, int from, int to)
{
    int mid = (to+from)/2;

    // No target value in the array
    if(to <= from && list[mid] != target) return -1;
    else if(list[mid] == target) return mid;
    else if(list[mid] < target){
        return search(target, list, mid+1, to);
    }
    else{
        return search(target, list, from, mid-1);
    }
}
