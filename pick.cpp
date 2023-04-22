int Solution::solve(vector<int> &A, int B)
{
    int sum = 0;
    int i = 0, j = A.size()-1;
    while(B)
    {
        if(A[i] > A[j])
        {
            // pick the first element and inc. the pointer
            sum += A[i];
            i++;
            B--;
        }
        else
        {
            sum += A[j];
            j--;
            B--;
        }
        
    }

    return sum;
}
