#include <iostream>
#include <vector>
using namespace std;

void compareOperations() {
    vector<int> arr = { 5, 2, 8, 1, 9, 3, 7 };

    int bubbleOps = 0, selectionOps = 0;

    vector<int> a1 = arr;
    vector<int> a2 = arr;

    // Bubble
    for (int i = 0; i < a1.size() - 1; i++)
        for (int j = 0; j < a1.size() - 1 - i; j++) {
            bubbleOps++;
            if (a1[j] > a1[j + 1])
                swap(a1[j], a1[j + 1]);
        }

    // Selection
    for (int i = 0; i < a2.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < a2.size(); j++) {
            selectionOps++;
            if (a2[j] < a2[minIndex])
                minIndex = j;
        }
        swap(a2[i], a2[minIndex]);
    }

    cout << "Bubble сортировка: " << bubbleOps << endl;
    cout << "Selection сортировка: " << selectionOps << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    compareOperations();
}
