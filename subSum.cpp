class Solution
{
public:
    int lenOfLongSubarr(int A[], int N, int K)
    {
        int left, right;
        left = right = 0;
        int len = 0, sum = 0;
        while (right < N)
        {
            /*
            A[] = {10, 5, 200, 7, 1, 9}
                K = 15
            */
            // sum le liya
            if (right < N)
            {
                sum += A[right];
            }
            right++;

            // if sum > k
            while (left <= right && )
            {
                sum -= A[left];
                left++;
            }

            if (sum == K)
            {
                len = max(len, right - left + 1);
            }
        }
        return len;
    }
};