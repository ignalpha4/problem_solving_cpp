/*
solution in n3 complexity

link: https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i=0;i<n-2;i++)
    {
        if (i > 0 && arr[i] == arr[i-1]) continue; //this is necessary so that repeat should not be possible
        //if for 10 5 5 5 2 we get  10 '5' '5' 5 '2'=12 but when we increment bu i still we get same ans 
        //  ie 10 5 '5' '5' '2' this will also print the same combination so to solve this we add this condition.
        // here' ' denotes that these numbers are considered for sum
        for(int j=i+1;j<n-1;j++)
        {
            if (j > i+1 && arr[j] == arr[j-1]) continue;

            for(int z=j+1;z<n;z++)
            {
                if (z > j+1 && arr[z] == arr[z-1]) continue;

                if(arr[i]+arr[j]+arr[z]==K)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[z]);
                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}




*/