#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here

    int coins[] = {1,2,5,10,20,50,100,100 , 500,1000};
    int size = sizeof(coins)/sizeof(coins[0]);

    int cnt = 0;
    for(int i = size-1;i>=0;i--){

        while(amount>=coins[i]){
            amount -= coins[i];
            cnt++;
        }
    }

    return cnt;
    
}
