#include <iostream>
#include <vector>
using namespace std;

void sortSkip3(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 3 == 0) continue;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] % 3 == 0) continue;
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    sortSkip3(array);
    cout << endl;
    for (int i : array) cout << i << " ";
}
