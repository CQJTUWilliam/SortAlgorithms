//
// Created by william on 20-1-16.
//

#ifndef SORTALGORITHMS_SORTALGOS_H
#define SORTALGORITHMS_SORTALGOS_H


template <class T>
class SortAlgos{
public:
    typedef int (*ComparePtr)(T,T);//类型定义
    static ComparePtr compare;//比较函数指针当返回正数时，认为v1 > v2

public:
    static int deFaultCompare(T v1,T v2);//默认比较函数
    static void swap(T* v1,T* v2);

public:
    static void bubbleSort(T* data,int n);
};

//静态成员初始化
template <class T>
typename SortAlgos<T>::ComparePtr SortAlgos<T>::compare = SortAlgos<T>::deFaultCompare;

//默认比较函数实现
template<class T>
int SortAlgos<T>::deFaultCompare(T v1, T v2) {//如果T为自定义类型，则需要实现比较(>,==)运算符
    return v1>v2?1:(v1==v2?(0):(-1));
}

//二值交换函数
template<class T>
void SortAlgos<T>::swap(T *v1, T *v2) {
    T temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

//冒泡排序
template<class T>
void SortAlgos<T>::bubbleSort(T *data, int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(compare(data[j],data[j+1]) > 0){//升序排列
                swap(&data[j],&data[j+1]);
            }
        }
    }
}




#endif //SORTALGORITHMS_SORTALGOS_H
