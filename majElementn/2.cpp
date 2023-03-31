int Solution::majorityElement(const vector<int> &A) {
    //there can be only one element
    int num = 0, count = 0;

    for(int i = 0; i < A.size(); i++)
    {
        if(num == A[i])
        {
            count++;
        }
        else if(count == 0)
        {
            num = A[i];
        }
        else 
        {
            count--;
        }
    } 
    return num;
}
