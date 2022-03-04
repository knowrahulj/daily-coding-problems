def twoSumHashing(num_arr, pair_sum):
    hashTable = {}

    for i in range(len(num_arr)):
        complement = pair_sum - num_arr[i]
        if complement in hashTable:
            print("Pair with sum", pair_sum,"is: (", num_arr[i],",",complement,")")
        hashTable[num_arr[i]] = num_arr[i]

num_arr = [4, 5, 1, 8]
pair_sum = 9

twoSumHashing(num_arr, pair_sum)