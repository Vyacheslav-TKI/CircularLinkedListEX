#include <iostream>
#include <string>
#include "..\Solver\CircularLinkedList.h" 

int main() {
    rut::miit::llist::CircularLinkedList<int> list;

    std::cout << "��������� �������� 10, 20, 30 � ������..." << std::endl;
    list.Add(10);
    list.Add(20);
    list.Add(30);

    
    std::wcout << L"������� ������: " << list.ToString(list) << std::endl;

    std::cout << "��������� ������� 15 �� ������� 1..." << std::endl;
    list.InsertAt(15, 1);
    std::wcout << L"������ ����� �������: " << list.ToString(list) << std::endl;

    
    std::cout << "������� ������� � ������� 2..." << std::endl;
    list.RemoveAt(2);
    std::wcout << L"������ ����� ��������: " << list.ToString(list) << std::endl;

    
    int searchValue = 20;
    std::cout << "���� ������� " << searchValue << " � ������..." << std::endl;
    bool found = list.Find(searchValue);
    if (found) {
        std::cout << "������� " << searchValue << " ������." << std::endl;
    }
    else {
        std::cout << "������� " << searchValue << " �� ������." << std::endl;
    }

    
    std::cout << "������� ������ ������� ������..." << std::endl;
    list.RemoveFront();
    std::wcout << L"������ ����� �������� ������� ��������: " << list.ToString(list) << std::endl;

    
    if (list.IsEmpty()) {
        std::cout << "������ ����." << std::endl;
    }
    else {
        std::cout << "������ �� ����." << std::endl;
    }

    return 0;
}
