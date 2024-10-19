#include "CppUnitTest.h"
#include "..\Source\CircularLinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CircularLinkedListUnitTest
{
    TEST_CLASS(CircularLinkedListTest)
    {
    public:

        TEST_METHOD(TestIsEmptyInitially)
        {
            CircularLinkedList<int> list;
            Assert::IsTrue(list.isEmpty(), L"—писок должен быть пустым при создании");
        }


        TEST_METHOD(TestAddElement)
        {
            CircularLinkedList<int> list;
            list.add(10);
            Assert::IsFalse(list.isEmpty(), L"—писок не должен быть пустым после добавлени¤ элемента.");
            Assert::AreEqual(10, list.getFront(), L"ѕервый элемент списка должен быть 10.");
        }


        TEST_METHOD(TestAddMultipleElements)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.add(30);
            Assert::AreEqual(10, list.getFront(), L"ѕервый элемент должен быть 10.");
        }


        TEST_METHOD(TestRemoveFront)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.removeFront();
            Assert::AreEqual(20, list.getFront(), L"ѕервый элемент после удалени¤ должен быть 20.");
        }


        TEST_METHOD(TestRemoveAllElements)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.removeFront();
            list.removeFront();
            Assert::IsTrue(list.isEmpty(), L"—писок должен быть пустым после удалени¤ всех элементов.");
        }


        TEST_METHOD(TestRemoveFromEmptyList)
        {
            CircularLinkedList<int> list;
            list.removeFront();
            Assert::IsTrue(list.isEmpty(), L"—писок должен быть пустым.");
        }


        TEST_METHOD(TestGetFromEmptyList)
        {
            CircularLinkedList<int> list;
            auto func = [&list]() { list.getFront(); };
            Assert::ExpectException<std::runtime_error>(func, L"ƒолжно быть выброшено исключение при получении элемента из пустого списка.");
        }
    };
}
