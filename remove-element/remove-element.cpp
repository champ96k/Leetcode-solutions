class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        
        int index=0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]!=val) {
                arr[index++] = arr[i];
            }
        }
        return index;
    }
};