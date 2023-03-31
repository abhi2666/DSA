int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int total = 0;
    //if total gas is already less that total cost that it will be impossible to complete
    // a circuit

    for(int i = 0; i < A.size(); i++)
    {
        total += (A[i] - B[i]);
    }
    if(total < 0) return -1; //can't complete a circuit
    // now for every station check if you can pick that station or not
    int index = 0;
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] - B[i] < 0)
        {
            index = i + 1;
        }

    }

    return index;
}

    return index;
}