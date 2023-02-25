#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>
#include <windows.h>
#include <malloc.h>
#include <conio.h>

using namespace std;
 
void est(int n,vector<int> k){
    vector <int> k1(n),k2(n);
    int K1 = 0,K2 = 0;
    for(int i = 0;i<n;i++){
        if(i == 0){
            k1[K1]== k[i];
            K1 = K1 + 1;
        }else{
            
        }
    }
}


int main(){
    SetConsoleOutputCP(CP_UTF8);
    vector<int> k;
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    for (int i = 0;i < n;i++){
        k.push_back(rand());
    }
    est(n,k);
    return 0;
}