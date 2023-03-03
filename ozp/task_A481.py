# Написать функцию backwardsPrime(start, stop), которая возвращает список
# всех простых в обоих направлениях чисел (являются простыми и перевернутое
# число также простое, например 13 и 31, 17 и 71), которые находятся между двумя
# заданными числами start и stop
#
# Примеры:
# backwardsPrime(2, 100) => [13, 17, 31, 37, 71, 73, 79, 97]


import traceback


def backwardsPrime(start, stop):
    # Тело функции
    return []


# Тесты
try:
    assert backwardsPrime(9900, 10000) == [9923, 9931, 9941, 9967]
    assert backwardsPrime(2, 100) == [13, 17, 31, 37, 71, 73, 79, 97]
    assert backwardsPrime(501, 599) == []
except AssertionError:
    print("TEST ERROR")
    traceback.print_exc()
else:
    print("TEST PASSED")
