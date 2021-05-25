vector<int> Solution::primesum(int A) {
    vector<int>sol;
    bool primes[A+1];
    for(int i=0; i<=A; i++)
        primes[i] = true;
    primes[0] = false;
    primes[1] = false;
    for(int p=2; p*p<=A; p++){
        if(primes[p]){
            for(int j=p*p; j<=A; j+=p)
                primes[j] = false;
        }
    }
    for(int k=2; k<=A; k++){
        if(primes[k]){
            if(primes[A-k]){
                sol.push_back(k);
                sol.push_back(A-k);
                break;
            }
        }
    }
    return sol;
}