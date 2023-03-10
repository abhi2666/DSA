/*
Job Scheduling Problem -->
you are given (jobNo, deadline, profit) and you have to find the maximum no. of jobs
you can so as to achive maximum possible profit. Return the max profit you earned and
no. of jobs you were able to accomplish.
*/
#include<iostream>
#include<algorithm>

using namespace std;

typedef struct jobs
{
    int no;
    int deadline;
    int profit;
} job;


bool comparator(job j1, job j2)
{
    if(j1.profit > j2.profit) return true;
    else return false;
}

void print_structure(job j[], int n)
{
    cout<<"jobno.  dl  pft"<<endl;
    for(int i  = 0; i < n; i++)
    {
        cout<<j[i].no<<"\t"<<j[i].deadline<<"\t"<<j[i].profit<<endl;
    }
}

pair<int, int> maximumProfit(job jobs[], int n)
{
    pair<int, int> ans;
    // assuming jobs array is not empty
    // we will go with greedy approach so we will first sort the jobs array according to
    // decreasing order of profit
    sort(jobs, jobs+n, comparator);
    // now create a array where we will keep track of what are the jobs that we have already done
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi, jobs[i].deadline); // will contain the maximum deadline
    }
    int pickedJobs[maxi+1];
    for(int i = 0; i < maxi+1; i++) pickedJobs[i] = -1;

    /*
    now we will traverse the jobs array and will find if we can pick a job or not..
    */
   int jobsDone = 0, profit = 0, j;
   for(int i = 0; i < n; i++)
   {
    // now we will just pick elements from jobs[] and will try to 
        int dl = jobs[i].deadline;
        // we will traverse from back because we will complete the more profit jobs first
        // so that we can leave some space for low profit jobs that comes next
        for(int j = maxi+1; j >= 0; j--)
        {
            if(pickedJobs[j] == -1)
            {
                //means there is an free space
                pickedJobs[i] = i;
                profit += jobs[i].profit;
                jobsDone++;
            }
            break; // now you don't have to keep going because you already done the ith job
        }
   }
   ans.first = jobsDone;
   ans.second = profit;
   return ans;
}

int main()
{
    int n;
    cout << "no. of jobs --> " << endl;
    cin >> n;
    job jobs[n];
    int dl, pft;
    for (int i = 0; i < n; i++)
    {
        jobs[i].no = i + 1;
        cout << "Enter deadline and profit: " << endl;
        cin >> dl >> pft;
        jobs[i].deadline = dl;
        jobs[i].profit = pft;
    }

    // cout<<"Below is your jobs data"<<endl;
    // print_structure(jobs, n);
    pair<int, int> result = maximumProfit(jobs, n);
    cout<<pair.first<<" "<<pair.second<<endl;

    return 0;
}
