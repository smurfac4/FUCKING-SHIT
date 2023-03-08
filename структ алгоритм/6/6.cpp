#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <math.h>
#include <cmath>
# include <string.h>

using namespace std;

int finds(string spr1, string substring,int n,int m){
    int y = 0;
    int u;
    for(int i = 0;i <m;i++){
        for(int j = 0;j <n;j++){
            if (spr1[i]==substring[j]){
                y++;
                if (y==1){
                    u = i;
                }
                i++;
                if(y == n){
                    return u;
                }
            }else{
                y = 0;
                break;
            }
        }
    }
    return -1;
}


int main(){
    string str;
    ifstream file("t1.txt");
    string p;
    cin >> p;
    int n = p.size();
    while(!file.eof()){
        string h;
        getline(file, h);
        str.append(h);
    }
    int m = str.size();
    cout << finds(str, p,n,m);
    file.close();
    cout << endl;
    return 0;
}