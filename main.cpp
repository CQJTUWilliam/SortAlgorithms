#include <iostream>
#include "SortAlgos.h"
using namespace std;

template <class T>
void output(T* data, int n){
    for(int i=0;i<n;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
}

int main() {
    //冒泡排序测试
#if 1
    int* data = new int[5];
    for(int i=0;i<5;i++){
        data[i]=5+(5-i*i+1)*2-3;
    }

    output(data,5);
    SortAlgos<int>::bubbleSort(data,5);
    output(data,5);
#endif

    return 0;
}

