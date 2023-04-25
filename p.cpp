class Solution{
  public:
    int minJumps(int arr[], int n){
        int len = n;
        int count = 0;
        int k = 0;
        for(int i=k;i<n;i++){
            count++;
            for(int j=i+1;j<=arr[i];j++){
                if(len - arr[j] < len){
                    k = j;
                    len = len - arr[j];
                }
            }
            if(len <= 0)
            break;
        }
        return count;
    }
};