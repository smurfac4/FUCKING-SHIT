# Создать список (коллекция фильмов), состоящий из словарей (фильмы). Словари должны содержать как минимум 5 полей
# (например, номер, название, год выхода...). В список добавить хотя бы 10 словарей.
# Конструкция вида:
# films = [{"id" : 123456, "title" : "Титаник", "year" : "1997",...} , {...}, {...}, ...]
# Реализовать функции:
# – вывода информации о всех фильмах;
# – вывода информации о фильме по введенному с клавиатуры номеру;
# – вывода количества фильмов, новее введённого года;
# – обновлении всей информации о фильме по введенному номеру;
# – удалении фильма по номеру.
# Провести тестирование функций.

def k1(films):
    return films


def k2(films,n):
    return films[n-1]


def k3(films, year): # – вывода количества приложений, с оценкой выше введённого
    counter = 0
    for i in films:
        if int(i["year"]) >= year:
            counter += 1
    return counter

def k4(films): # – обновлении всей информации о приложении по введенному номеру;
    films["id"] = int(input("enter id: "))
    films["title"] = str(input("enter title: "))
    films["year"] = str(input("enter description: "))
    films["IMDB"] = float(input("enter rating: "))
    films["country"] = str(input("enter last feedback: "))
    return films


def k5(l,films):
    films.pop(l-1)
    return films


films = [{"id" : 1, "title" : "Бойцовский клуб", "year" : "1999","IMDB": 8.8,"country":"USA"},
         {"id" : 2, "title" : "Быстрее пули ", "year" : "2022","IMDB": 7.4,"country":"USA"},
         {"id" : 3, "title" : "Кот в сапогах 2", "year" : "2022","IMDB": 7.8,"country":"USA"},
         {"id" : 4, "title" : "Памела: История любви", "year" : "2023","IMDB": 7.3,"country":"USA"},
         {"id" : 5, "title" : "Патхан", "year" : "2023","IMDB": 6.6,"country":"India"},
         {"id" : 6, "title" : "Вавилон", "year" : "2022","IMDB": 7.6,"country":"USA"},
         {"id" : 7, "title" : "Брахмастра, часть 1: Шива", "year" : "2022","IMDB": 5.5,"country":"India"},
         {"id" : 8, "title" : "Ковбой из Копенгагена", "year" : "2022","IMDB": 6.7,"country":"Denmark"},
         {"id" : 9, "title" : "1923 ", "year" : "2022","IMDB": 8.5,"country":"USA"},
         {"id" : 10, "title" : "Пловчихи", "year" : "2022","IMDB": 7.4,"country":"USA"}]
p = int(input())
try:
    assert k1(films) == [{'id': 1, 'title': 'Бойцовский клуб', 'year': '1999', 'IMDB': 8.8, 'country': 'USA'}, {'id': 2, 'title': 'Быстрее пули ', 'year': '2022', 'IMDB': 7.4, 'country': 'USA'}, {'id': 3, 'title': 'Кот в сапогах 2', 'year': '2022', 'IMDB': 7.8, 'country': 'USA'}, {'id': 4, 'title': 'Памела: История любви', 'year': '2023', 'IMDB': 7.3, 'country': 'USA'}, {'id': 5, 'title': 'Патхан', 'year': '2023', 'IMDB': 6.6, 'country': 'India'}, {'id': 6, 'title': 'Вавилон', 'year': '2022', 'IMDB': 7.6, 'country': 'USA'}, {'id': 7, 'title': 'Брахмастра, часть 1: Шива', 'year': '2022', 'IMDB': 5.5, 'country': 'India'}, {'id': 8, 'title': 'Ковбой из Копенгагена', 'year': '2022', 'IMDB': 6.7, 'country': 'Denmark'}, {'id': 9, 'title': '1923 ', 'year': '2022', 'IMDB': 8.5, 'country': 'USA'}, {'id': 10, 'title': 'Пловчихи', 'year': '2022', 'IMDB': 7.4, 'country': 'USA'}]
    assert k2(films,4) == {'id': 4, 'title': 'Памела: История любви', 'year': '2023', 'IMDB': 7.3, 'country': 'USA'}
    assert k3(films,1999) == 10
    assert k5(2,films) == [{'id': 1, 'title': 'Бойцовский клуб', 'year': '1999', 'IMDB': 8.8, 'country': 'USA'}, {'id': 3, 'title': 'Кот в сапогах 2', 'year': '2022', 'IMDB': 7.8, 'country': 'USA'}, {'id': 4, 'title': 'Памела: История любви', 'year': '2023', 'IMDB': 7.3, 'country': 'USA'}, {'id': 5, 'title': 'Патхан', 'year': '2023', 'IMDB': 6.6, 'country': 'India'}, {'id': 6, 'title': 'Вавилон', 'year': '2022', 'IMDB': 7.6, 'country': 'USA'}, {'id': 7, 'title': 'Брахмастра, часть 1: Шива', 'year': '2022', 'IMDB': 5.5, 'country': 'India'}, {'id': 8, 'title': 'Ковбой из Копенгагена', 'year': '2022', 'IMDB': 6.7, 'country': 'Denmark'}, {'id': 9, 'title': '1923 ', 'year': '2022', 'IMDB': 8.5, 'country': 'USA'}, {'id': 10, 'title': 'Пловчихи', 'year': '2022', 'IMDB': 7.4, 'country': 'USA'}]
except AssertionError:
    print("TEST ERROR")
else:
    print("TEST PASSED")


