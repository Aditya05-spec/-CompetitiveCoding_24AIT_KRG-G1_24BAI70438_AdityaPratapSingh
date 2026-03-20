class Solution {
    int maximumRange(vector<int> &piles) {
        int maxi = INT_MIN;
        for(auto i : piles) {
            if(maxi < i) {
                maxi = i;
            }
        }
        return maxi;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1;
        int end = maximumRange(piles);

        // int mid = start + (end-start)/2;

        while(start < end) {
            int mid = start + (end-start)/2;
            int timeToEatMidBananas = 0;

            for(auto i : piles) {
                timeToEatMidBananas += (i+mid-1)/mid;
            }

            if(timeToEatMidBananas <= h) {
                end = mid;
            }
            else {
                start = mid + 1;
            }
            // mid = start + (end-start)/2;
        }

        return start;
    }
};