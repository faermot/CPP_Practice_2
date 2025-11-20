#include <iostream>
#include <vector>
#include <string>
using namespace std;

void insertionSortStrings(vector<string>& a) {
    for (int i = 1; i < a.size(); i++) {
        string key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<string> array = { "яблоко", "стол", "апельсин", "дерево", "микрофон"};
    insertionSortStrings(array);
    cout << endl;
}
