#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        for (int j = 0; j < a.size() - 1 - i; j++) {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}

int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> array = { 5, 2, 8, 1, 9 };
	for (int i : array) cout << i << " ";
    bubbleSort(array);
    cout << endl;
    for (int i : array) cout << i << " ";
}
