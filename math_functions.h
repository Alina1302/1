#pragma once
#include <iostream>

int Pow (int x, int y){
    int ans=1;
    for (int i=1; i<y; i++){
        ans*=x;
    }
    return ans;
}

int Abs (int ans, int x){
    if (x>=0){
        ans=x;
    }else{
        ans = -1*x;
    }
    return ans;
}

int Ost (int ans, int x, int y){
    ans = x%y;
    return ans;
}

int Sqrt (int x){
    int a[]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51};
    int i=0;
    int ans=0;
    while ((x>0)&&(i<=25)){
        x=x-a[i];
        ans++;
        i++;
    }
    return ans;
}