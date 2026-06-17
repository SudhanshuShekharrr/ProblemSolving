class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        int count = 0;
        sort(people.begin(), people.end());
        int i=0;
        int j = n-1;
        while(j>=i){
            int sum = people[i]+people[j];
            if(sum<=limit){
                count++;
                i++;
                j--;
            }
            else if(sum> limit){
                if(people[j]<=limit){
                    count++;
                    j--;
                }

                else if(people[i]>limit) return count;
                else if(people[i]==limit){
                    count++;
                    i++;
                }
            }
        }
         
         return count;
        
    }
};