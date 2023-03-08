#include <iostream>
#include <unordered_set>

using namespace std;

struct Node {
    int value;
    Node* next;
}; 
void addNode(Node*& head, int value) {
    Node* newNode = new Node;  //Создается новый узел с помощью оператора new и сохраняется указатель на него в переменной newNode.
    newNode->value = value;//. Значение value присваивается полю value созданного узла
    newNode->next = head;//Указатель на следующий узел сохраняется в поле next созданного узла. В данном случае, это указатель на текущую голову списка, который передается в функцию по ссылке.
    head = newNode;//Указатель на новый узел присваивается переменной head, чтобы новый узел стал новой головой списка.
} 

Node* mergeLists(Node* L1, Node* L2) {
    Node* L = nullptr;
    unordered_set<int> values; // создаем хэш-таблицу для хранения уникальных значений

    // проходим по списку L1 и добавляем его элементы в список L, если их значение еще не встречалось
    while (L1 != nullptr) {
        if (values.find(L1->value) == values.end()) { // если значение L1->value еще не встречалось
            addNode(L, L1->value); // добавляем элемент в список L
            values.insert(L1->value); // добавляем значение в хэш-таблицу
        }
        L1 = L1->next;
    }

    // проходим по списку L2 и добавляем его элементы в список L, если их значение еще не встречалось
    while (L2 != nullptr) {
        if (values.find(L2->value) == values.end()) { // если значение L2->value еще не встречалось
            addNode(L, L2->value); // добавляем элемент в список L
            values.insert(L2->value); // добавляем значение в хэш-таблицу
        }
        L2 = L2->next;
    }
    return L;
}

int main() {
    Node* L1 = nullptr;
    Node* L2 = nullptr;

    // заполняем список L1
    addNode(L1, 1);
    addNode(L1, 2);
    addNode(L1, 3);
    addNode(L1, 4);
    // заполняем список L2
    addNode(L2, 3);
    addNode(L2, 4);
    addNode(L2, 5);
    addNode(L2, 6);

    // объединяем списки L1 и L2
    Node* L = mergeLists(L1, L2);

    // выводим элементы списка L
    while (L != nullptr) {
        cout << L->value << " ";
        L = L->next;
    }
    return 0;
}