class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        int tracksum=0;
        int station=0;
        
        for(int i=0;i<cost.size();i++)
        {
            sum1+=gas[i];
            sum2+=cost[i];
            
            tracksum+=gas[i]-cost[i];
            
            if(tracksum<0)
            {
                station=i+1;
                tracksum=0;
            }
        }
        
        if(sum1<sum2){return -1;}
        return station;
    }
};
