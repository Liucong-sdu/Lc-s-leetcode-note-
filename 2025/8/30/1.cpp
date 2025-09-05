#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
        {
            return findMedianSortedArrays(nums2, nums1);
        }
        int state = 0;
        int mid;
        int mid1;
        int mid2;

        if((nums1.size()+nums2.size())%2==1){
            state = 1;
            mid = (nums1.size() + nums2.size()) / 2 ;
        }

        else{
            state = 2;
            mid1 = (nums1.size() + nums2.size()) / 2-1;
            mid2 = mid1 +1 ;
        }
        

        int left_max;
        int right_min;
        int index_left2 ;
        int index_left1;
        int index_right1;
        int index_right2;
        
        
        index_left1= (nums1.size()-1)/2 ;
        index_left2 = mid-index_left1-1;
        index_right1=index_left1+1;
        index_right2=index_left2+1;
        
    
        while(true){


            if (nums1[index_left1] > nums2[index_left2])
            {
                left_max = nums1[index_left1];
            }
            else{
                left_max = nums2[index_left2];
            }

            if (nums1[index_right1] > nums2[index_right2])
            {
                right_min = nums2[index_right2];
            }
            else
            {
                right_min = nums1[index_right1];
            }

            if(left_max<=right_min){
                break;
            }
            else{
                if (nums1[index_left1] > nums2[index_left2])
                {
                    
                    index_left1=index_left1-1;
                    index_left2 = mid - index_left1 - 1;
                    index_right1 = index_left1 + 1;
                    index_right2 = index_left2 + 1;
                }

            }


        }
    }
};