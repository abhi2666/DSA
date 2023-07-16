/*
struct Item{
    int value;
    int weight;
};
*/

// Fractional knapsack is where you have to pick elements until your sack is full

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comp(Item I1, Item I2)
    {
        double r1 = (double)I1.value/(double)I1.weight;
        double r2 = (double)I2.value/(double)I2.weight;
        return r1 > r2;
        
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // first we will have to sort the struct array based on value /weight ratio
        // this can be done using comparator
        sort(arr, arr+n, comp);
        double ans = 0.0;
        // for(int i = 0; i < n; i++)
        // {
        //     if(arr[i].weight < W){
        //         ans += arr[i].value;
        //         W -= arr[i].weight;
        //     }
        //     else{
        //         // you don't have to take fraction now
        //         double remain = arr[i].weight - W;
        //         ans += ((double)arr[i].value/(double)arr[i].weight) * remain;
        //         break;
        //     }
        // }  
        int i = 0;
        while(W > 0)
        {
            if(W > arr[i].weight){
                W -= arr[i].weight;
                ans += arr[i].value; 
            }
            else{
                ans += ((double)arr[i].value/(double)arr[i].weight) * W;
                break;
            }
        }

        return ans;           


    }
        
};