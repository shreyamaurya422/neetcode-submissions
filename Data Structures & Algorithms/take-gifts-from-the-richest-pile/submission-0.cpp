class Solution {
public:
priority_queue<int>pq;
    long long pickGifts(vector<int>& gifts, int k) {
        int n=gifts.size();
        int ans=0;

        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }
        
        for(int j=0;j<k;j++){
            int temp=pq.top();
           int sum= sqrt(temp);
           pq.push(sum);
           pq.pop();
          
        }
        while(!pq.empty()){
            ans=ans+pq.top();
            pq.pop();
        }
        return ans;
    }
};