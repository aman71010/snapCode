int Solution::findMedian(vector<vector<int>> &A) {
    int n = A.size();
    int m = A[0].size();
    int minm = A[0][0];
    int maxm = A[0][0];
    for(int i=0; i<n; i++){
        if(A[i][0] < minm) minm = A[i][0];
        if(A[i][m-1] > maxm) maxm = A[i][m-1];
    }
    int desired_counts = (1+n*m)/2;
    while(minm < maxm){
        int count =0, mid = minm + (maxm-minm)/2;
        for(int i=0; i<n; i++)
            count += upper_bound(A[i].begin(), A[i].end(), mid)-A[i].begin();
        if(count < desired_counts)
            minm = mid+1;
        else
            maxm = mid;
    }
    return minm;
}