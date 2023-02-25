class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            total += (gas[i] - cost[i]);
        }

        if(total < 0) return -1;
        
        // if above condition fails, that means there will be a solution
        // find the index
        int idx = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            if((gas[i] - cost[i]) < 0)
            {
                //means you can't take it
                idx = i + 1;
            }
        }
        return idx;
        
    }
};