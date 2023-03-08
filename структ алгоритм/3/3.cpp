// #include <bits/stdc++.h>
// #include <typeinfo>
// #include <iostream>
// #include <math.h>
// #include <cmath>
// #include <windows.h>
// #include <malloc.h>
// #include <conio.h>

// using namespace std;
// int p = 0;
// int p1 =2;

// void est(int n,vector<int> k,vector<int> ll){
//     for(int i = 0;i<n-1;i++){
//         for(int i1 = 0;i1 <ll.size();i1++){
//             if (ll[i1]>p){
//                 break;
//             }else{
//                 p=ll[i1+1];
//                 ll.erase(ll.begin() + i1);
//                 p = 0;
//                 p1=p1*2;
//                 break;
//             }
//         }
//         //сам массив 
//         est2(n,k);
//         p++;
//     }
// }

// void est2(int n,vector<int> k){
//     for(int i = 0;i<;i++){
        
//     }
// }

// int main(){
//     SetConsoleOutputCP(CP_UTF8);
//     vector<int> k;
//     int n;
//     int l = 2;
//     long double time = 0.0; 
//     printf("Input n: ");
//     scanf("%d", &n);
//     vector<int> ll;
//     for (int i = 0;i < n;i++){
//         k.push_back(rand()%(n*10));
//     }
//     for (int i = log2(n);i > 0;i--){
//         ll.push_back(int(pow(2,i)));
//     }
//     clock_t begin = clock();
//     est(n,k,ll);
//     clock_t end = clock();
//     cout << endl<<time + (double)(end - begin) / CLOCKS_PER_SEC;
//     return 0;
// }
// Сортировка слиянием
#include <iostream>
#include <vector>
using namespace std;
int k = 0,k1 =0 ;

void mergeSort(vector<int> &a, size_t start, size_t end)//Объявляется функция mergeSort, которая принимает на вход ссылку на вектор a, начальный и конечный индексы подмассива, который нужно отсортировать.
{
    if (end - start < 2){//сли длина подмассива меньше 2, то он уже отсортирован, поэтому функция завершается.
        return;
    }
    if (end - start == 2){// Если длина подмассива равна 2, то сравниваются элементы и, если нужно, они меняются местами.
        if (a[start] > a[start + 1])
            swap(a[start], a[start + 1]);
        return;
    }//Рекурсивно вызывается функция mergeSort для левой и правой половин подмассива
    mergeSort(a, start, start + (end - start) / 2);
    mergeSort(a, start + (end - start) / 2, end);
    vector<int> b;//Задаются начальные значения переменных b1, e1 и b2 для разделения подмассива на две половины.
    size_t b1 = start;
    size_t e1 = start + (end - start) / 2;
    size_t b2 = e1;//В цикле происходит слияние двух отсортированных половин подмассива в один отсортированный подмассив b.
    while (b.size() < end - start)
    {
        if (b1 >= e1 || (b2 < end && a[b2] <= a[b1]))
        {
            b.push_back(a[b2]);
            ++b2;
        }
        else
        {
            b.push_back(a[b1]);
            ++b1;
        }
    }//Отсортированный подмассив b копируется обратно в исходный вектор a.
    for (size_t i = start; i < end; ++i){
        a[i] = b[i - start];
    }
}

int main(){
    vector<int> v;
    for (int i = 0; i < 20; ++i)
        v.push_back(i);
    for (size_t i = 0; i < v.size(); ++i)//В функции main создается вектор v и заполняется числами от 0 до 19 в случайном порядке.
        swap(v[i], v[rand() % (v.size() - i) + i]);
    for (auto i: v)
        cout << i << " ";
    cout << endl;
    mergeSort(v, 0, v.size());
    for (auto i: v)
        cout << i << " ";
    cout << endl;
}