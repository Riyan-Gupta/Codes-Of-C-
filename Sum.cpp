int main() {
    int N;
    cin>>N;
    int A[N];
    int k=0;
    int l=0;
    for(int k=0;k<N;++k){
        cin>>A[k];
    }
    for (int i = 0; i < N; ++i) 
        {
 
            for (int j = i + 1; j < N; ++j)
            {
                if(A[i]==A[j]){
                    l=l+1;
                    if(l==1){
                       cout<<A[i];
                    }
                }
                else{
                    k=k+1;
                    if(k==N*(N-1)/2){
                        cout<<A[0];
                    }
                }
                
            }
    }
    return 0;
}
