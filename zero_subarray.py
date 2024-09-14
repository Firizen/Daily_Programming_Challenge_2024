#day 6 
#sub arrays with zero sum

def zeroSubarray(arr):
    sums = {}
    current_sum = 0
    subArrays = []
    for i in range(len(arr)):
        current_sum += arr[i]
        if current_sum == 0:
            subArrays.append((0, i))
        if current_sum in sums:
            for start in sums[current_sum]:
                subArrays.append((start + 1, i))
        if current_sum not in sums:
            sums[current_sum] = []
        sums[current_sum].append(i)
    return subArrays

arr = [1,2,-3,3,-1,2]
subArrays = zeroSubarray(arr)
print(subArrays)
