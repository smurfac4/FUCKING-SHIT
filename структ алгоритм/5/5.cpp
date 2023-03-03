#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>

using namespace std;
 
int main() {
  SetConsoleOutputCP(CP_UTF8);
  int N;
  cin >>N;
  int oo[N]; // создали массив на 10 элементов
  int key; // создали переменную в которой будет находиться ключ
  for (int i = 0; i < N; i++) {
    oo[i] = rand()%1000; // считываем элементы массива
  }
  sort (oo, oo + N); // сортируем с помощью функции sort (быстрая сортировка)
  for (int i = 0; i < N; i++) {
    cout << oo[i] <<" "; // считываем элементы массива
  }
  cin >> key; // считываем ключ
  bool flag = false;
  int  mid ;
 
  if (flag){
    cout << "Индекс элемента " << key << " в массиве равен: " << mid;
  }else{
    cout << "---";
  } 
  return 0;
}