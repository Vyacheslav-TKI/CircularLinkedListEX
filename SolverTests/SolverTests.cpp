#include "CppUnitTest.h"
#include "../Solver/CircularLinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace rut::miit::llist;

namespace CircularLinkedListTests
{
    TEST_CLASS(CircularLinkedListTests)
    {
    public:

        TEST_METHOD(Add_WhenCalled_AddsElementsToTheList)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            list.Add(20);

            Assert::IsTrue(list.Contains(10));
            Assert::IsTrue(list.Contains(20));
        }

        TEST_METHOD(IsEmpty_WhenListIsEmpty_ReturnsTrue)
        {
            CircularLinkedList<int> list;
            Assert::IsTrue(list.IsEmpty());

            list.Add(1);
            Assert::IsFalse(list.IsEmpty());
        }

        TEST_METHOD(RemoveFront_WhenCalled_RemovesFirstElement)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            list.Add(20);
            list.RemoveFront();

            Assert::IsFalse(list.Contains(10));
            Assert::IsTrue(list.Contains(20));
        }

        TEST_METHOD(InsertIn_WhenPositionIsValid_InsertsElementAtPosition)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            list.Add(30);
            list.InsertIn(1, 20);

            Assert::IsTrue(list.Contains(20));
        }

        TEST_METHOD(RemoveIn_WhenPositionIsValid_RemovesElementAtPosition)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            list.Add(20);
            list.Add(30);
            list.RemoveIn(1);

            Assert::IsFalse(list.Contains(20));
            Assert::IsTrue(list.Contains(10));
            Assert::IsTrue(list.Contains(30));
        }

        TEST_METHOD(Contains_WhenElementExists_ReturnsTrue)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            Assert::IsTrue(list.Contains(10));
            Assert::IsFalse(list.Contains(20));
        }

        TEST_METHOD(CopyConstructor_WhenCalled_CopiesElements)
        {
            CircularLinkedList<int> list1;
            list1.Add(10);
            list1.Add(20);

            CircularLinkedList<int> list2 = list1;

            Assert::IsTrue(list2.Contains(10));
            Assert::IsTrue(list2.Contains(20));
        }

        TEST_METHOD(MoveConstructor_WhenCalled_MovesElements)
        {
            CircularLinkedList<int> list1;
            list1.Add(10);
            list1.Add(20);

            CircularLinkedList<int> list2 = std::move(list1);

            Assert::IsTrue(list2.Contains(10));
            Assert::IsTrue(list2.Contains(20));
            Assert::IsTrue(list1.IsEmpty());
        }

        TEST_METHOD(AssignmentOperator_WhenCalled_CopiesElements)
        {
            CircularLinkedList<int> list1;
            list1.Add(10);
            list1.Add(20);

            CircularLinkedList<int> list2;
            list2 = list1;

            Assert::IsTrue(list2.Contains(10));
            Assert::IsTrue(list2.Contains(20));
        }

        TEST_METHOD(MoveAssignmentOperator_WhenCalled_MovesElements)
        {
            CircularLinkedList<int> list1;
            list1.Add(10);
            list1.Add(20);

            CircularLinkedList<int> list2;
            list2 = std::move(list1);

            Assert::IsTrue(list2.Contains(10));
            Assert::IsTrue(list2.Contains(20));
            Assert::IsTrue(list1.IsEmpty());
        }

        TEST_METHOD(ToString_WhenCalled_ReturnsStringRepresentation)
        {
            CircularLinkedList<int> list;
            list.Add(10);
            list.Add(20);

            std::wstring result = list.ToString(list);
            Assert::AreEqual(std::wstring(L"10 20"), result);
        }
    };
}
