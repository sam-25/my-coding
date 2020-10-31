class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0,tracksum=0,station=0;
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
        cout<<sum1;
        cout<<sum2;
        cout<<tracksum;
        
        if(sum1<sum2){return -1;}
        return station;
    }
};
