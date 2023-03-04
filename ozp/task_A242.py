# Написать функцию max_3_sum, которая возвращает наибольшую сумму трех подряд идущих элементов списка.
#
# Пример:
# max_3_sum([1,2,3,4,5]) ==> 12



import traceback


def max_3_sum(arr):
    max1=0
    for i in range(len(arr)-2):
        i1 = i+3
        if max1 < sum(arr[i:i1]):
            max1 = sum(arr[i:i1])
    return max1


# Тесты
try:
    assert max_3_sum([1, 2, 3, 4, 5]) == 12
    assert max_3_sum([10, 10, 30, 20, 10, 15, 30]) == 60
    assert max_3_sum([20, 10, -80, 10, 10, 15, 30]) == 55
    assert max_3_sum([10, -80, -10, -10, 15, -35, 20]) == 0

except AssertionError:
    print("TEST ERROR")
    traceback.print_exc()
else:
    print("TEST PASSED")