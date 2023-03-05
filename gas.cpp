/*
Check if you can start from one position and do a complete rotation
*/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            total += (gas[i] - cost[i]);
        }
        if(total < 0)
        {
            return -1;
        }

        int idx = 0, fuel = 0;
        for(int i = 0; i < gas.size(); i++)
        {
            if((gas[i] - cost[i]) > 0 && (gas[i] - cost[i]) > fuel)
            {
                fuel = (gas[i] - cost[i]);
                idx = i;
            }
        }
        return idx;
    }
};