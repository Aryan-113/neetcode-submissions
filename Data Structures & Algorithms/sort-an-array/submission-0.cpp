class Solution {
public:
    void merge(vector<int>&nums,int s,int mid,int e){
        vector<int>temp;
        int left=s;
        int right=mid+1;

        while(left<=mid&&right<=e){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=e){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=s;i<=e;i++){
            nums[i]=temp[i-s];
        }
    }

    void mergeSort(vector<int>&nums,int s,int e){
        if(s>=e){
            return;
        }

        int mid=(s+e)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);

        return nums;
    }
};