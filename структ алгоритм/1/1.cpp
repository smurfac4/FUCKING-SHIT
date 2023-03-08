#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

unsigned long long counterswap = 0; 

void insertionsort(int arr[],int N) { //insertionsort
    for (int i = 1; i < N; i++) // проход от 1 до n
        for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--) { //проход с сравниванием от текущего элемента с предыдущим ( от элемента  до начала)
            swap(arr[j - 1], arr[j]); // меняем местами 
            counterswap += 1;
        }
}


void printmas(int arr[],int N) { // вывод массива
    for (int i = 0; i < N; i++){
        cout << "arr[" << i << "]= " << arr[i] << "\n"; 
    }
}


int main() {
    int N;
    long double time = 0.0; 
    cout << "Количество элементов в массиве: "; cin >> N;
    int* arr = new int [N];
    for (int i = 0; i < N; i++) { //заполнение массива рандомными значениями
        arr[i] = rand() % 1000;
    }
    clock_t begin = clock();
    insertionsort(arr, N);
    clock_t end = clock();
    cout << "Время: " << time + (double)(end - begin) / CLOCKS_PER_SEC << " сек" << endl << "Количество перестановок:" <<
        counterswap << endl << "Количество сравнений: " << N * (N - 1) / 2 << endl; 
    printmas(arr, N);
}