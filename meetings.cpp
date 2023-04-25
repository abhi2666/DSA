class Solution
{

    /*
    Input:
    N = 6
    start[] = {1,3,0,5,8,5}
    end[] =  {2,4,6,7,9,9}
    Output:
    4
    */

public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    typedef struct meet
    {
        int start;
        int end;
    } m;

    bool comparator(m m1, m m2)
    {
        // this comparator will let you modify the sort to sort based on end time
        if (m1.end == m2.end)
        {
            return m1.start < m2.start;
        }
        return m1.end < m2.end;
    }

    int maxMeetings(int start[], int end[], int n)
    {
        // put everything inside structure to sort everything later
        m meets[n];
        for (int i = 0; i < n; i++)
        {
            meets[i].start = start[i];
            meets[i].end = end[i];
        }
        // sort the meetings according to end time
        sort(meets, meets + n, comparator);
        int count = 0;
        int i = 1, j = 0;
        while (i < n)
        {
            if (meet[i].start > meet[i].end)
            {
                // that meeting can happen
                count++;
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    }
};