class Solution{
  public:
    int max_idx(int i, int j, int arr[])
    {
        int idx = 0;
        int maxi = INT_MIN;
        for(int k = i; k <= j; k++)
        {
            if(arr[k] > maxi)
            {
                maxi = arr[k];
                idx = k;
            }
        }
        return k;
    }

    int minJumps(int arr[], int n){
        int i = 0;
        int count = 0;
        while(i < n)
        {
            if(i+arr[i] >= n) return count;
            int idx = max_idx(i+1, i+arr[i], arr);
            i = idx;
            count++;
        }
        return -1;
    }
};
