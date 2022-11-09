class StockSpanner {
public:
    stack<pair<int,int>> st ;
    int next(int price) {
        if( st.empty() )
            st.push({price,1}) ;
        else{
            int c = 1 ;
            while( st.size() and st.top().first <= price ){
                c += st.top().second ;
                st.pop() ;
            }
            st.push( { price , c }) ;
        }
        return st.top().second ;
    }
};
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */