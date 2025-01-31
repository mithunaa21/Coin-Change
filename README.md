# Coin Change

## Problem Statement
Given an array of integers `coins` representing different denominations and an integer `amount`, return the fewest number of coins needed to make up that amount. If it is not possible to make that amount, return `-1`.

## Example

### Example 1:
```plaintext
Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1
```

### Example 2:
```plaintext
Input: coins = [2], amount = 3
Output: -1
```

## Constraints
- `1 <= coins.length <= 12`
- `1 <= coins[i] <= 2^31 - 1`
- `0 <= amount <= 10^4`

## Solution Approach
We use dynamic programming to solve this problem efficiently. The idea is to build an array where each index represents the minimum number of coins needed to form that amount.

## Implementation Approach
1. Create an array to store the minimum number of coins needed for each amount from `0` to the given `amount`.
2. Initialize the array with a value larger than the possible number of coins.
3. Set `arr[0] = 0` since no coins are needed to make amount `0`.
4. Iterate through each coin denomination and update the array for every amount that can be achieved using that coin.
5. If the value at `arr[amount]` is still large, return `-1`, indicating that the amount cannot be formed.

## Usage
Pass an array of coin denominations and the target amount to the function. The function returns the minimum number of coins needed to make up the amount.

## Contributing
Feel free to submit issues or pull requests if you have improvements!

