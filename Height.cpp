int main() {
    int N;
    cin >> N;
    
    int a;
    int number[N];
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
    cout << number[0] << " " << number[N-1];
    
    return 0;
}
