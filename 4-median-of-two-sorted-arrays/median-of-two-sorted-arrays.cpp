class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int n =nums1.size();
        int first =0;
        int last = nums1.size() - 1;
        int mid = (first + last)/2;
        if(n%2 == 0){
          return (nums1[mid]+nums1[mid+1])/2.00;

        }else{
            return nums1[mid];
        }
    }
};