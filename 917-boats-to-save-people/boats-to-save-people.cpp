class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0, j = people.size() - 1;
        int boats = 0;

        while (i <= j) {
            int sum = people[i] + people[j];
            if(sum > limit){
                j--;
                boats++;
               
            }else if (sum <= limit) {
                boats++;
                i++;
                j--;
            }
            
            
       
          
        }

        return boats;
    }
};