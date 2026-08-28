class Solution {
public:
    int part(vector<int>& nums, int l, int s)
{
    int pivot = nums[l];
    int i = s - 1;

    for(int j = s; j < l; j++)
    {
        if(nums[j] <= pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    swap(nums[i + 1], nums[l]);
    return i + 1;
}

void quicksort(vector<int>& nums, int l, int s)
{
    if(s < l)
    {
        int p = part(nums, l, s);

        quicksort(nums, p - 1, s);
        quicksort(nums, l, p + 1);
    }
}

    void sortColors(vector<int>& nums) {
        quicksort(nums, nums.size()-1, 0);
    }
};