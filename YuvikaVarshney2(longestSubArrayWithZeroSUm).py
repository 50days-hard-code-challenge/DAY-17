def getLongestZeroSumSubarrayLength(arr : List[int]) -> int:
    # Write your code here.
    n = len(arr)

    # maxLength is used to store the maximum
    # length of a subarray whose sum = 'k'
    maxLength = 0

    # start and end are the starting
    # and the ending indices of our current
    # subarray
    start = 0
    end = -1
    currentSum =0

    # Iterating over 'a'
    while start < n:

        # Increasing the right end
        # till our sum <= ‘k’ or we
        # are not out of bounds
        while (end + 1 < n):
            currentSum += arr[end + 1]
            end += 1
            if currentSum == 0:
                maxLength = max(maxLength, end - start + 1)


        # We have found a subarray with the
        #  required sum.
        

        # Shifting the start index
        currentSum=0
        start += 1
        end=start-1

    return maxLength

    pass
