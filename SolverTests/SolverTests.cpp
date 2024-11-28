#include "CppUnitTest.h"
#include "../Solver/CircularLinkedList.h" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace rut::miit::llist;

namespace UnitTests
{
    TEST_CLASS(CircularLinkedListTests)
    {
    public:

        TEST_METHOD(Constructor_EmptyList_IsEmptyReturnsTrue)
        {
            CircularLinkedList<int> list;
            Assert::IsTrue(list.IsEmpty(), L"Список должен быть пустым после создания.");
        }

        TEST_METHOD(Add_Element_ListIsNotEmpty)
        {
            CircularLinkedList<int> list;
            list.add(10);
            Assert::IsFalse(list.IsEmpty(), L"Список не должен быть пустым после добавления элемента.");
        }

        TEST_METHOD(Add_MultipleElements_ElementsAddedCorrectly)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.add(30);
            std::wstring result = list.ToString(list);
            Assert::AreEqual(std::wstring(L"10 20 30 "), result, L"Элементы добавлены неверно.");
        }

        TEST_METHOD(RemoveFront_NonEmptyList_FirstElementRemoved)
        {
            CircularLinkedList<int> list;
            list.add(10);
            list.add(20);
            list.RemoveFront();
            std::wstring res
