#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < a.size(); j++)
            if (a[j] < a[minIndex]) minIndex = j;
        swap(a[i], a[minIndex]);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    selectionSort(array);
    cout << endl;
    for (int i : array) cout << i << " ";
}
