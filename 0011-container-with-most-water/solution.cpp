class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int left = 0;
        int right = height.size()-1;
        while(left != right){
            int multiplier = 0;
            int area = 0;
            if (height[left] < height[right]){

                area = height[left] * (right - left);
                left ++;
            }
            else{

                area = height[right] * (right - left);
                right--;
            
            }

            if (area > max_area){
                max_area = area;
            }

        }
    return max_area;    
    }
};
