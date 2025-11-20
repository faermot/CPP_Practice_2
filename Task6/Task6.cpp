#include <iostream>
#include <vector>
using namespace std;

int partitionQuickSort(vector<int>& a, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1);
    int pivot = a[pivotIndex];
    swap(a[pivotIndex], a[high]);

    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    partitionQuickSort(array, 1, 5);
    cout << endl;
    for (int i : array) cout << i << " ";
}
