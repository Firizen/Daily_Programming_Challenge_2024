def calculate_trapped_water(arr):

    n = len(arr)
    leftMax = [0] * n
    rightMax = [0] * n

  
    leftMax[0] = arr[0]
    for i in range(1, n):
        leftMax[i] = max(leftMax[i - 1], arr[i])

    rightMax[n - 1] = arr[n - 1]
    for i in range(n - 2, -1, -1):
        rightMax[i] = max(rightMax[i + 1], arr[i])

    totalWater = 0
    for i in range(n):
        water = min(leftMax[i], rightMax[i]) - arr[i]
        if water > 0:
            totalWater += water

    return totalWater


arr =   [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
print(calculate_trapped_water(arr))
