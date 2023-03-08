#include <iostream>
#include <vector>
#include <chrono>
#include <random>
#include <algorithm>
using namespace std;
using namespace std::chrono;

// Последовательный поиск с барьером
int sequentialSearch(vector<int>& a, int n, int key, long long& cmp)
{
    a[n] = key; // Установка барьера
    int i = 0;
    while (a[i] != key) {
        cmp++;
        i++;
    }
    if (i == n) {
        return -1;
    }
    else {
        return i;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Создание и заполнение массива случайными числами
    vector<int> a(n + 1);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 1000);
    for (int i = 0; i < n; i++){
        a[i] = dis(gen);
    }

    // Сортировка массива
    sort(a.begin(), a.end());

    // Выбор режима тестирования
    int mode;
    cout << "Choose testing mode: " << endl;
    cout << "1. Strictly increasing array" << endl;
    cout << "2. Strictly decreasing array" << endl;
    cout << "3. Random array" << endl;
    cin >> mode;

    // Создание и заполнение массива в зависимости от выбранного режима
    switch (mode) {
    case 1:
        for (int i = 0; i < n; i++) {
            a[i] = i;
        }
        break;
    case 2:
        for (int i = 0; i < n; i++) {
            a[i] = n - i - 1;
        }
        break;
    case 3:
        // Массив уже заполнен случайными числами
        break;
    default:
        cout << "Invalid mode" << endl;
        return 0;
    }

    // Выбор элемента для поиска
    int key;
    cout << "Enter the key to search for: ";
    cin >> key;

    // Поиск элемента и замер времени выполнения
    long long cmp = 0;
    auto start = high_resolution_clock::now();
    int pos = sequentialSearch(a, n, key, cmp);
    auto stop = high_resolution_clock::now();

    // Вывод результата поиска и время выполнения
    if (pos == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at position " << pos << endl;
    }
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;

    // Вывод количества операций сравнения
    cout << "Number of comparisons: " << cmp << endl;

    return 0;
}