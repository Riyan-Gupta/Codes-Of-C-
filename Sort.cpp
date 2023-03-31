#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int k;
    cin >> k;
    float a;
    float number[N];
    for(int b=0;b<N;++b){
        cin >> number[b];
    }
    for (int i = 0; i < N; ++i) 
        {
 
            for (int j = i + 1; j < N; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
    cout << number[N-k] << " " << number[k-1];
    
    return 0;
}
