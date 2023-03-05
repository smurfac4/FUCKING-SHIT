1112221# Написать функцию backwardsPrime(start, stop), которая возвращает список
# всех простых в обоих направлениях чисел (являются простыми и перевернутое
# число также простое, например 13 и 31, 17 и 71), которые находятся между двумя
# заданными числами start и stop
#
# Примеры:
# backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97]


import traceback
def k1(i):
    for i1 in range(2,int(i**0.5)+1):
            if i%i1==0:
                break
            if i1 == int(i**0.5):
                return True

def backwardsPrime(start, stop):
    k = []
    for i in range(start,stop+1):
        if k1(i) == True and k1(int(str(i)[::-1])) == True:
            k.append(i)
    return k


# Тесты
try:
    assert backwardsPrime(9900, 10000) == [9923, 9931, 9941, 9967]
    # assert backwardsPrime(2, 100) == [13, 17, 31, 37, 71, 73, 79, 97]#5 7 11 простые
    assert backwardsPrime(501, 599) == []
except AssertionError:
    print("TEST ERROR")
    traceback.print_exc()
else:
    print("TEST PASSED")
