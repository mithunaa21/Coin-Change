int coinChange(int* coins, int coinsSize, int amount){
    int *arr=(int*)malloc((sizeof(int))*(amount+1));
    int i,j;
    for(i=0;i<=amount;i++)
    {
        arr[i]=amount+1;
    }
    arr[0]=0;
    for(i=0;i<coinsSize;i++){
        for(j=coins[i];j<=amount;j++)
        {
            arr[j]=(arr[j]<arr[j-coins[i]]+1)?arr[j]:arr[j-coins[i]]+1;
        }
    }
    if(arr[amount]>amount)
{
    return -1;
}
else
{
    int result=arr[amount];
    return result;
}
}
