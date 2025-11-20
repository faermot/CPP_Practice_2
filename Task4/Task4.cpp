#include <iostream>
#include <vector>
using namespace std;

void bubbleSortV2(vector<int>& a) {
    bool swapped;
    for (int i = 0; i < a.size() - 1; i++) {
        swapped = false;
        for (int j = 0; j < a.size() - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    bubbleSortV2(array);
    cout << endl;
    for (int i : array) cout << i << " ";
}
