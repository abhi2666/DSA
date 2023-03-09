/*
Approach -->
*/
/// This structure will be used to store everyting in one place
// so that later on, sorting becomes easy
typedef struct meet
{
    int star;
    int en;
    int idx; // will represent the index in which the meeting is lying
}m;


bool comparator(m m1, m m2)
{
    if(m1.en < m2.en) return true;
    else if(m1.en > m2.en) return false;
    // if both the end times are equal then take the one with lesser start time
    else if(m1.star < m2.star) return true;
    else return false;
}

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        m meetings[n]; // array of meetings (a structure)
        for(int i = 0; i < n; i++)
        {
            meetings[i].star = start[i];
            meetings[i].en = end[i];
            meetings[i].idx = i+1;
        }

        // now sort the meetings array on the basis of end 
        // we are sorting because we are applying greedy approach and trying to do the meetings which has
        // lesser ending times (they will end early)
        sort(meetings, meetings+n, comparator);

        // Main logic will be applied from here
        int i = 0, j = 1, count = 0;
        while(j < n)
        {
            if(meetings[i].en < meetings[j].star)
            {
                count++;
                i++;
                j++;
            }
            else if(meetings[i].en > meetings[j].star)
            {
                j++;
            }
        }
        return count;
    }
};