#include<iostream>
#include<chrono>

using namespace std::chrono;
using namespace std;

void matrix5()
{
    auto start = high_resolution_clock::now();
    int nof_m  = 5;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
    cout<<"Optimal cost of 5 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

void matrix10()
{
    auto start = high_resolution_clock::now();
    int nof_m  = 10;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7,5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
   cout<<"Optimal cost of 10 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

void matrix15()
{  
    auto start = high_resolution_clock::now();
    int nof_m  = 15;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7,5,4,6,2,7,5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
    cout<<"Optimal cost of 15 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

void matrix20()
{
    auto start = high_resolution_clock::now();
    int nof_m  = 20;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
   cout<<"Optimal cost of 20 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

void matrix25()
{
    auto start = high_resolution_clock::now();
    int nof_m  = 25;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
cout<<"Optimal cost of 25 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

void matrix30()
{
    auto start = high_resolution_clock::now();
    int nof_m  = 30;
    int i, j , min;
    i = j = nof_m;
    int p[] = {5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7,5,4,6,2,7};
    int  cost[i][j] ={0};
    int  k_value[i][j] = {0};
    for(int d=1;d<nof_m-1;d++)
    {
        for(i =1; i<nof_m-d; i++)
        {
            j = i+d;
            for(int k =1; k<=j; k++)
            {
                min = cost[i][k] + cost[i+1][j]+p[i-1]*p[k]*p[j];
                if(min < cost[i][j])
                {
                    k_value[i][j] = k;
                }
            }
            cost[i][j] = min;
        }
    }
  cout<<"Optimal cost of 30 Matrices are: "<<cost[1][nof_m-1]<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"The Time taken by Algorithm is: "<<duration.count()<<" ms"<<endl;
}

int main()
{
    matrix5();
    matrix10();
    matrix15();
    matrix20();
    matrix25();
    matrix30();
   
}
