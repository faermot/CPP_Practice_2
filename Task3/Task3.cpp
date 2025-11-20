#include <iostream>
#include <vector>
using namespace std;

void insertionSortDesc(vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    insertionSortDesc(array);
    cout << endl;
    for (int i : array) cout << i << " ";
}
