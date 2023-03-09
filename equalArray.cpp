class Solution{
    public:

    //Function to check if two arrays are equal or not.
    // Not Working...
    bool check(vector<ll> A, vector<ll> B, int N) {
        
        vector<l1>hash(N, 0);

        for(int i = 0; i < N; i++)
        {
            hash[A[i]]++;
        }
        for(int i = 0; i < N; i++)
        {
            hash[B[i]]--;
        }

        for(int i = 0; i < N; i++)
        {
            if(hash[i] > 0) return false;
        }

        return true;

    }
};