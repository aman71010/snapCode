int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int min_steps = 0;
    for(int i=0; i<A.size() - 1; i++){
        int X = abs(A[i] - A[i+1]);
        int Y = abs(B[i] - B[i+1]);
        min_steps += max(X, Y);
    }
    return min_steps;
}
