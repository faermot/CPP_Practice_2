#include <iostream>
#include <vector>
using namespace std;

// Функция слияния двух отсортированных подмассивов
void merge(vector<int>& arr, int left, int mid, int right) {
    // Размеры подмассивов
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Создаём временные массивы
    vector<int> leftArr(n1);
    vector<int> rightArr(n2);

    // Копируем данные в временные массивы
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    // Объединяем временные массивы обратно в arr
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Копируем оставшиеся элементы из leftArr
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Копируем оставшиеся элементы из rightArr
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

// Основная функция Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Сортируем первую половину
        mergeSort(arr, left, mid);

        // Сортируем вторую половину
        mergeSort(arr, mid + 1, right);

        // Объединяем отсортированные половины
        merge(arr, left, mid, right);
    }
}

// Вспомогательная функция для вызова
void mergeSortHelper(vector<int>& arr) {
    if (arr.size() > 0) {
        mergeSort(arr, 0, arr.size() - 1);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> array = { 5, 2, 8, 1, 9 };
    for (int i : array) cout << i << " ";
    mergeSort(array, 3, 2);
    cout << endl;
    for (int i : array) cout << i << " ";
}
