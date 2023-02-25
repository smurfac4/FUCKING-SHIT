#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
#include <malloc.h>
#include <conio.h>

using namespace std;
 
void ShellSort(int n, int mass[]){
    int i, j, step;
    int o = 0;
    int tmp;
    for (step = n / 2; step > 0; step /= 2){
        for (i = step; i < n; i++){
            tmp = mass[i];
            for (j = i; j >= step; j -= step){
                if (tmp < mass[j - step]){
                    o++;
                    mass[j] = mass[j - step];
                }else{
                    o++;
                    break;
                }
            }
            mass[j] = tmp;
        }
    }
    cout << o;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int N;
    long double time = 0.0; 
    printf("Input N: ");
    scanf("%d", &N);
    //выделение памяти под массив
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    //ввод элементов массива
    for (int i = 0; i < N; i++){
        mass[i] = rand();
    }
    //сортировка методом Шелла
    clock_t begin = clock();
    ShellSort(N, mass);
    clock_t end = clock();
    for(int i = 0;i<N;i++){
        // cout << mass[i] << " " ;
    }
    //освобождение памяти
    cout << endl<<time + (double)(end - begin) / CLOCKS_PER_SEC;
    free(mass);
    _getch();
    return 0;
}