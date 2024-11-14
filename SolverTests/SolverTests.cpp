#include "CppUnitTest.h"
#include "../Solver/CircularLinkedList.h" // Замените на правильный путь к вашему файлу с классом CircularLinkedList

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace rut::miit::llist;

namespace UnitTests
{
    TEST_CLASS(CircularLinkedListTests)
    {
    public:

        TEST_METHOD(TestConstructor)
        {
            CircularLinkedList<int> list;
            Assert::IsTrue(list.IsEmpty(), L"Список должен быть пустым после создания.");
        }

        TEST_METHOD(TestAddAndIsEmpty)
        {
            CircularLinkedList<int> list;
            list.add(10);
            Assert::IsFalse(list.IsEmpty(), L"Список не должен быть пустым после добавления элемента.");
        }

        TEST_METHOD(TestAddMultipleElements)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.add(30);
            std::wstring result = list.ToString(list);
            Assert::AreEqual(std::wstring(L"10 20 30 "), result, L"Элементы добавлены неверно.");
        }

        TEST_METHOD(TestRemoveFront)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.RemoveFront();
            std::wstring result = list.ToString(list);
            Assert::AreEqual(std::wstring(L"20 "), result, L"Первый элемент должен быть удален.");
        }

        TEST_METHOD(TestRemoveFrontSingleElement)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.RemoveFront();
            Assert::IsTrue(list.IsEmpty(), L"Список должен быть пустым после удаления единственного элемента.");
        }

        TEST_METHOD(TestCopyConstructor)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            CircularLinkedList<int> copyList(list);
            std::wstring result = copyList.ToString(copyList);
            Assert::AreEqual(std::wstring(L"10 20 "), result, L"Список был скопирован неправильно.");
        }

        TEST_METHOD(TestAssignmentOperator)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);

            CircularLinkedList<int> assignedList;
            assignedList = list;
            std::wstring result = assignedList.ToString(assignedList);
            Assert::AreEqual(std::wstring(L"10 20 "), result, L"Оператор присваивания работает неверно.");
        }

        TEST_METHOD(TestMoveConstructor)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);

            CircularLinkedList<int> movedList(std::move(list));
            std::wstring result = movedList.ToString(movedList);
            Assert::AreEqual(std::wstring(L"10 20 "), result, L"Конструктор перемещения работает неверно.");
            Assert::IsTrue(list.IsEmpty(), L"Исходный список должен быть пустым после перемещения.");
        }

        TEST_METHOD(TestMoveAssignmentOperator)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);

            CircularLinkedList<int> movedList;
            movedList = std::move(list);
            std::wstring result = movedList.ToString(movedList);
            Assert::AreEqual(std::wstring(L"10 20 "), result, L"Оператор перемещения работает неверно.");
            Assert::IsTrue(list.IsEmpty(), L"Исходный список должен быть пустым после перемещения.");
        }

        TEST_METHOD(TestSwap)
        {
            CircularLinkedList<int> list1;
            list1.add(10);
            list1.add(20);

            CircularLinkedList<int> list2;
            list2.add(30);
            list2.add(40);

            list1.swap(list2);

            std::wstring result1 = list1.ToString(list1);
            std::wstring result2 = list2.ToString(list2);

            Assert::AreEqual(std::wstring(L"30 40 "), result1, L"Содержимое list1 после swap неверно.");
            Assert::AreEqual(std::wstring(L"10 20 "), result2, L"Содержимое list2 после swap неверно.");
        }
    };
}
