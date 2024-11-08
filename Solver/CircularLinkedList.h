namespace rut::miit::llist
{
    template <typename T>
    class CircularLinkedList {
    private:
        /**
        * @brief ��������� �� �����.
        */
        Node<T>* tail;

    public:
        /**
        * @brief �����������
        */
        CircularLinkedList() : tail(nullptr) {}

        /**
        * @brief �������� �� ������� ��������� ������
        */
        bool is_empty() const {
            return tail == nullptr;
        }

        /**
        * @brief ���������� ������ ����������
        */
        void add(const T& val) {
            Node<T>* new_node = new Node<T>(val);

            if (is_empty()) {

                tail = new_node;
                tail->next = tail;
            }
            else {
                new_node->next = tail->next;
                tail->next = new_node;
                tail = new_node;
            }
        }

        /**
        * @brief ����� ������ �� �����
        */
        void print() const {
            if (is_empty()) {
                throw std::out_of_range << "��������� ����";
                return;
            }

            Node<T>* current = tail->next;
            do {
                std::cout << current->data << " ";
                current = current->next;
            } while (current != tail->next);
            std::cout << std::endl;
        }


        /**
        * @brief ������� ������ ������� ������
        */
        void remove_front() {
            if (is_empty()) {
                throw std::out_of_range << "��������� ���";
                return;
            }

            Node<T>* front = tail->next;
            if (tail->next == tail) {

                delete front;
                tail = nullptr;
            }
            else {
                tail->next = front->next;
                delete front;
            }
        }

        /**
        * @brief ����������
        */
        ~CircularLinkedList() {
            while (!is_empty()) {
                remove_front();
            }
        }
    }
}