from random import randint as ran

def gen_list(num):
    return [ran(0,10) for i in range(num)]

def counting_sort(arr):
    sorted_arr = []
    max_value=max(arr)
    count = [0] * (max_value+1)
    for num in arr:
        count[num]+=1
        print(count)
    for i in range(len(count)):
        sorted_arr.extend([i] * count[i])
    return sorted_arr
arr = gen_list(20)
print(arr)
sorted_arr = counting_sort(arr)
print(sorted_arr)
