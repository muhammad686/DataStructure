#include <iostream> 
using namespace std;

int main()
{ 
 int n  = 6;
    int p[] = {5,4,6,2,7,9};
    int m[6][6] ={0};
    int s[6][6] = {0};
    int j , min;
    for(int d=1;d<n-1;d++)
    {
        for(int i =1; i<n-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = m[i][k] + m[i+1][j]+p[i-1]*p[k]*p[j];
                if(min<m[i][j])
                {
                    s[i][j] = k;
                }
            }
            m[i][j] = min;
        }
    }
    cout<<m[1][n-1];
}