class StockSpanner {
    int index;
    stack<pair<int,int>> s;
public:
    StockSpanner() {
        index = 0;
    }
    
    int next(int price) {
        int ans;
        if(s.empty())
        {
            s.push({index,price});
            ans = index + 1;
        }
        else
        {
            while(!s.empty() && s.top().second <= price)
            {
                s.pop();
            }
            if(s.empty())
            {
                ans = index + 1;
            }
            else if(!s.empty())
            {
               ans = index - s.top().first;
            }
             s.push({index,price});
        }
        index++;
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */