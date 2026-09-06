// class KthLargest {
// public:
//     priority_queue<int> pq;
//     int k;

//     KthLargest(int k, vector<int>& nums) {
//         this->k = k;

//         for(int i = 0; i < nums.size(); i++) {
//             pq.push(nums[i]);
//         }
//     }

//     int solve() {
//         vector<int> temp;

//         // Remove k-1 largest elements
//         for(int i = 1; i < k; i++) {
//             temp.push_back(pq.top());
//             pq.pop();
//         }

//         // Now top is kth largest
//         int ans = pq.top();

//         // Put removed elements back
//         for(int x : temp) {
//             pq.push(x);
//         }

//         return ans;
//     }

//     int add(int val) {
//         pq.push(val);

//         return solve();
//     }
// };

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int k;

    KthLargest(int k, vector<int>& nums) {
        this->k = k;

        for(int x : nums) {
            pq.push(x);

            if(pq.size() > k)
                pq.pop();
        }
    }

    int add(int val) {
        pq.push(val);

        if(pq.size() > k)
            pq.pop();

        return pq.top();
    }
};