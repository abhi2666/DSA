int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v;
        for(int i=0; i<n;i++){
           v.push_back({start[i],end[i]});
        }
           sort(v.begin(),v.end());
           stack<int>st;
           st.push(v[0].second);
           for(int i =1; i<n;i++){
               if(v[i].first>st.top())
                st.push(v[i].second);
               else
               {
                   if(v[i].second<st.top()){
                       st.pop();
                       st.push(v[i].second);
                   }
               }
           }
    return st.size();
    }
};