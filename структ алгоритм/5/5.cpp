#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
 
int main() {
  int N;
  cin >>N;
  int arr[N]; // создали массив на 10 элементов
  int key; // создали переменную в которой будет находиться ключ
  for (int i = 0; i < N; i++) {
    arr[i] = rand()%1000; // считываем элементы массива
  }
  sort (arr, arr + N); // сортируем с помощью функции sort (быстрая сортировка)
  for (int i = 0; i < N; i++) {
    cout << arr[i] <<" "; // считываем элементы массива
  }
  cin >> key; // считываем ключ
  bool flag = false;
 int l = 0;
  int r = N; // в этом случае присваивается именно n
  int mid;
  
  while (l < r) {
      mid = (l + r) / 2; // считываем срединный индекс отрезка [l,r]
  
      if (arr[mid] > key) r = mid; // проверяем, какую часть нужно отбросить с поиска
      else l = mid + 1;
  }
 
  r--; // уменьшаем на один 
 
  if (arr[r] == key) cout << "Индекс элемента " << key << " в массиве равен: " << r; 
  else cout << "Извините, но такого элемента в массиве нет";
  return 0;
}