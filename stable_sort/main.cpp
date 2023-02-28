#include <iostream>
void Stable_sort(int *A,int *A_fin, const int size){
    int M = 11;
    int B_arr[M];
    for (int j = 0; j<M; ++j) B_arr[j] = 0;
    for (int k = 0; k<size; ++k) B_arr[A[k]] += 1;
    for (int i = 1; i<M; ++i) {
        B_arr[i] += B_arr[i-1];
    }
    for (int j = size-1; j>=0; --j) {
        B_arr[A[j]] -= 1;
        A_fin[B_arr[A[j]]] = A[j];
    }
}
int main() {
    int num;
    std::cin>>num;
    int A_arr[num];
    int A_final_arr[num];
    for (int i = 0; i < num; ++i) std::cin>>A_arr[i];
        
    Stable_sort(A_arr, A_final_arr, num);
    
    for (int counter = 0; counter<num; ++counter) {
        std::cout<<A_final_arr[counter]<<" ";
    }
    return 0;
}
