//https://www.hackerrank.com/contests/-init0-/challenges/vector-and-his-strawberries/problem
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

void combination(vector<int> &basket, vector<long int> &A, int index, int value,
    int N, int k){

    if (index == N){
        //part of program to print
        int klines[k] = {0}; //to hold no of elements in kth basket
        for(int i = 0; i < k; i++){
            for(int j = 0; j < N; j++)
                if(basket[j] == i)
                    klines[i]++;
        }

        for(int j = 0; j < k; j++){ //printing the sequence
            printf("%ld ", klines[j]);
            for (int i = 0; i < N; i++){
                if(basket[i] == j)
                    printf("%d ", A[i]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }

    //for (int i = start; i < N; i++){ // n times
        for(int j = 0; j < k; j++){
            basket[index] = j;
            combination(basket, A, index + 1, j, N, k);
        }
    return;
}

void strawberries(vector<long int> &A, int n, int k){
    //holds current combination of strawberries
    vector<int> basket(n);

    //call to recursive function
    combination(basket, A, 0, 0, n, k);
}

int main(){
    //n ---> no of strawberries
    //k ---> no of baskets
    //total combinations = n^k
    int n, k;
    cin >> n >> k;
    vector<long int> A(n);
    for(int i = 0; i < n; i++)
        cin >> A[i];
    strawberries(A, n, k);
    return 0;
}
