class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int cnt=0;
        if(grid.size()==0){return 0;}
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]=='1')
                {
                    count(grid,i,j,m,n);
                    cnt++;
                }
                
            }           
        }
        return cnt;
    }

    void count(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]=='0'){return;}
        
        grid[i][j]='0';
        
        count(grid,i-1,j,m,n);
        count(grid,i+1,j,m,n);    
        count(grid,i,j-1,m,n);        
        count(grid,i,j+1,m,n);
        
    }
};
