int main() {
    int N;
    cin>>N;
    int K;
    cin>>K;
    int A[N];
    int pf[N];
    
    int sum=0;
    int g=0;
    for(int i=1;i<=N;++i){
        cin>>A[i];
        pf[i]=pf[i-1]+A[i];
        
    }
    for(int l=1;l<=N;++l){
        for(int j=l+1;j<=N;++j){
            if(pf[j]-pf[l-1]==K){
                sum=sum+1;
                if(sum==1){
                    for(int k=l;k<=j;k++){
                        cout<<A[k]<<" ";
                    }
    
                }
            }
            else{
                g=g+1;
                if(g==N*(N-1)/2){
                    cout<<-1;
                }
            
            }
        }
    }
        
        
    
    return 0;
}
