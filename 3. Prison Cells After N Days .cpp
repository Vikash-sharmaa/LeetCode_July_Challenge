class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& a, int n) {
        n=n%14==0 ? 14 : n%14;
        while(n--)
        {
            vector<int>cells(8,0);
            for(int i=1;i<a.size()-1;i++)
            {
                if(a[i-1]==a[i+1])
                {
                    cells[i]=1;
                }
                else
                {
                    cells[i]=0;
                }
            }
            a=cells;
        }
        return a;
    }
};
