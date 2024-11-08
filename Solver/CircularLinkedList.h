namespace rut::miit::llist
{
    template <typename T>
    class CircularLinkedList {
    private:
        /**
        * @brief указатель на хвост.
        */
        Node<T>* tail;

    public:
        /**
        * @brief конструктор
        */
        CircularLinkedList() : tail(nullptr) {}

        /**
        * @brief проверка на наличие элементов списка
        */
        bool is_empty() const {
            return tail == nullptr;
        }

        /**
        * @brief заполнение списка элементами
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
        * @brief вывод списка на экран
        */
        void print() const {
            if (is_empty()) {
                throw std::out_of_range << "элементов нема";
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
        * @brief убирает первый элемент списка
        */
        void remove_front() {
            if (is_empty()) {
                throw std::out_of_range << "элементов нет";
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
        * @brief Деструктор
        */
        ~CircularLinkedList() {
            while (!is_empty()) {
                remove_front();
            }
        }
    }
}