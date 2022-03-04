def productExceptSelf(nums):
    size = len(nums)
    output = [1] * size
    left = 1
    for x in range(size - 1):
        left *= nums[x]
        output[x + 1] *= left
    right = 1
    for x in range(size - 1, 0, -1):
        right *= nums[x]
        output[x - 1] *= right
    return output


num_arr = [4, 5, 1, 8]
product_arr = productExceptSelf(num_arr)

print(*product_arr)