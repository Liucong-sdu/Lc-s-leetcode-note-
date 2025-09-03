#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
    int length_sum= nums1.size() +nums2.size();
    int index_nums1 = 0;
    int index_nums2 = 0;
    int state = 1;
    if(length_sum%2==1){
        int mid_number = (length_sum / 2) +1;
        while(index_nums1+index_nums2+2==mid_number){
            if(index_nums1+1==nums1.size()){
                index_nums2++;
                state = 2;
            }
            if(index_nums2+1==nums2.size()){
                index_nums1++;
                state = 1;
            }
            if(index_nums2+1!=nums2.size()&&index_nums1+1==nums1.size()){
                if(nums1[index_nums1]<nums2[index_nums2]){
                    index_nums1++;
                    state = 1;
                }
                else{
                    index_nums2++;
                    state = 2;
                }
            }
        }
        if(state==1){
            return nums1[index_nums1];
        }
        else{
            return nums2[index_nums2];
        }
    }
    else{
        int mid_number1 = length_sum / 2;
        int mid_number2 = (length_sum / 2) + 1;
        int state = 1;
        while (index_nums1 + index_nums2 + 2 == mid_number1)
        {
            if (index_nums1 + 1 == nums1.size())
            {
                index_nums2++;
                state = 2;
            }
            if (index_nums2 + 1 == nums2.size())
            {
                index_nums1++;
                state = 1;
            }
            if (index_nums2 + 1 != nums2.size() && index_nums1 + 1 == nums1.size())
            {
                if (nums1[index_nums1] < nums2[index_nums2])
                {
                    index_nums1++;
                    state = 1;
                }
                else
                {
                    index_nums2++;
                    state = 2;
                }
            }
        }
        int mid1;
        if (state == 1)
        {
            mid1 = nums1[index_nums1];
        }
        else
        {
            mid1 = nums2[index_nums2];
        }

        if (index_nums1 + 1 == nums1.size())
        {
            index_nums2++;
            state = 2;
        }
        if (index_nums2 + 1 == nums2.size())
        {
            index_nums1++;
            state = 1;
        }
        if (index_nums2 + 1 != nums2.size() && index_nums1 + 1 == nums1.size())
        {
            if (nums1[index_nums1] < nums2[index_nums2])
            {
                index_nums1++;
                state = 1;
            }
            else
            {
                index_nums2++;
                state = 2;
            }
        }
        int mid2;
        if (index_nums1 + 1 == nums1.size())
        {
            index_nums2++;
            state = 2;
        }
        if (index_nums2 + 1 == nums2.size())
        {
            index_nums1++;
            state = 1;
        }
        if (index_nums2 + 1 != nums2.size() && index_nums1 + 1 == nums1.size())
        {
            if (nums1[index_nums1] < nums2[index_nums2])
            {
                index_nums1++;
                state = 1;
            }
            else
            {
                index_nums2++;
                state = 2;
            }
        }
        return mid1 + mid2;
    }
    }
};