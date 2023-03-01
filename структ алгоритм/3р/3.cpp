#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
#include <malloc.h>
#include <conio.h>

using namespace std;
int p = 0;
int p1 =2;

void est(int n,vector<int> k,vector<int> ll){
    for(int i = 0;i<n-1;i++){
        for(int i1 = 0;i1 <ll.size();i1++){
            if (ll[i1]>p){
                break;
            }else{
                p=ll[i1+1];
                ll.erase(ll.begin() + i1);
                p = 0;
                p1=p1*2;
                break;
            }
        }
        //сам массив 
        est2(n,k);
        p++;
    }
}

void est2(int n,vector<int> k){
    for(int i = 0;i<;i++){
        
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    vector<int> k;
    int n;
    int l = 2;
    long double time = 0.0; 
    printf("Input n: ");
    scanf("%d", &n);
    vector<int> ll;
    for (int i = 0;i < n;i++){
        k.push_back(rand()%(n*10));
    }
    for (int i = log2(n);i > 0;i--){
        ll.push_back(int(pow(2,i)));
    }
    clock_t begin = clock();
    est(n,k,ll);
    clock_t end = clock();
    cout << endl<<time + (double)(end - begin) / CLOCKS_PER_SEC;
    return 0;
}


