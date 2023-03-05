void bonAppetit(vector<int> bill, int k, int b) {
    // k --> idx of item anna doesn't eat
    // b --> amount of money anna contributed

    int split_bill = 0;
    for(int i = 0; i < bill.size(); i++)
    {
        if(i!=k)
        {
            split_bill += bill[i];
        }
    }

    split_bill /= 2;
    if(b - split_bill == 0)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else 
    {
        cout<<abs(b-split_bill)<<endl;
    }
}