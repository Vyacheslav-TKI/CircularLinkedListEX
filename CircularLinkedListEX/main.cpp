#include <iostream>
#include <string>
#include "..\Solver\CircularLinkedList.h" 

int main() {
    rut::miit::llist::CircularLinkedList<int> list;

    std::cout << "Добавляем элементы 10, 20, 30 в список..." << std::endl;
    list.Add(10);
    list.Add(20);
    list.Add(30);

    
    std::wcout << L"Текущий список: " << list.ToString(list) << std::endl;

    std::cout << "Вставляем элемент 15 на позицию 1..." << std::endl;
    list.InsertAt(15, 1);
    std::wcout << L"Список после вставки: " << list.ToString(list) << std::endl;

    
    std::cout << "Удаляем элемент с позиции 2..." << std::endl;
    list.RemoveAt(2);
    std::wcout << L"Список после удаления: " << list.ToString(list) << std::endl;

    
    int searchValue = 20;
    std::cout << "Ищем элемент " << searchValue << " в списке..." << std::endl;
    bool found = list.Find(searchValue);
    if (found) {
        std::cout << "Элемент " << searchValue << " найден." << std::endl;
    }
    else {
        std::cout << "Элемент " << searchValue << " не найден." << std::endl;
    }

    
    std::cout << "Удаляем первый элемент списка..." << std::endl;
    list.RemoveFront();
    std::wcout << L"Список после удаления первого элемента: " << list.ToString(list) << std::endl;

    
    if (list.IsEmpty()) {
        std::cout << "Список пуст." << std::endl;
    }
    else {
        std::cout << "Список не пуст." << std::endl;
    }

    return 0;
}
