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
    int tmp;
    for (step = n / 2; step > 0; step /= 2)
        for (i = step; i < n; i++)
        {
            tmp = mass[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < mass[j - step])
                    mass[j] = mass[j - step];
                else
                    break;
            }
            mass[j] = tmp;
        }
}
 
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int N;
    printf("Input N: ");
    scanf("%d", &N);
    //выделение памяти под массив
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    //ввод элементов массива
    for (int i = 0; i < N; i++)
        mass[i] = rand();
    //сортировка методом Шелла
    ShellSort(N, mass);
    //освобождение памяти
    free(mass);
    _getch();
    return 0;
}