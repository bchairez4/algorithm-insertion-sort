/*****************************************************************************
*    Brian Chairez
*
*    Insertion Sort Algorithm
*        Time Complexity:
*            Worst Case: O(n^2)
*            Average Case: O(n^2)
*        Space Complexity:
*            O(1) (in-place)
*****************************************************************************/

#include <vector>

template <class T>
void InsertionSort(std::vector<T>& array) {
    for (int i = 1; i < array.size(); ++i) {
        
        int j = i;

        while ((j > 0) && (array[j-1] > array[j])) {
            T temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;

            j = j-1;
        }
    }
}