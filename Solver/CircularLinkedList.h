namespace rut::miit::llist
{
    template <typename T>
    class CircularLinkedList;
    template <typename T>
    class CircularLinkedList final {

        /**
        * @brief Сериализация массива в строку
        * @param list непосредственно список
        * @return os строку, которая выведется в консоль
        */
        std::wstring ToString(const CircularLinkedList& list);

    private:
        /**
        * @brief операция обмена содержимыми
        * @param other обмениваемый список
        */
        void swap(CircularLinkedList& other) noexcept;

        /**
        * @brief указатель на хвост.
        */
        Node<T>* tail;

    public:
        /**
        * @brief конструктор по умолчанию
        */
        CircularLinkedList();

        /**
        * @brief конструктор с помощбю шаблона
        */
        CircularLinkedList(std::initializer_list<T> list);

        /**
        * @brief конструктор перемещения
        */
        CircularLinkedList(CircularLinkedList&& other) noexcept;

        /**
        * @brief конструктор копирования
        */
        CircularLinkedList(const CircularLinkedList& other);

        /**
        * @brief проверка на наличие элементов списка
        */
        bool IsEmpty() const;

        /**
        * @brief заполнение списка элементами
        */
        void add(const T& val);

        /**
        * @brief убирает первый элемент списка
        */
        void RemoveFront();

        /**
        * @brief оператор копирования
        */
        CircularLinkedList& operator=(const CircularLinkedList& other);

        /**
        * @brief оператор перемещения
        */
        CircularLinkedList& operator=(CircularLinkedList&& other) noexcept;

        /**
        * @brief Деструктор
        */
        ~CircularLinkedList();
    };



    template <typename T>
    inline std::wstring CircularLinkedList<T>::ToString(const CircularLinkedList& list)
    {
        auto temp = this->ToString();
        std::wstring ws{ temp.cbegin(), temp.cend() };
        return ws;
    }

    inline std::wstring CircularLinkedList<T>::CircularLinkedList() : tail(nullptr) {}

    template <typename T>
    inline CircularLinkedList<T>::CircularLinkedList(std::initializer_list<T> list) : CircularLinkedList()
    {
        for (auto& value : list)
        {
            add(value);
        }
    }

    template <typename T>
    inline CircularLinkedList<T>::CircularLinkedList(const CircularLinkedList& other) : CircularLinkedList()
    {
        Node* current = other.first;
        while (current != nullptr)
        {
            add(current->value);
            current = current->next;
        }
    }

    template <typename T>
    inline CircularLinkedList<T>& CircularLinkedList<T>::operator=(const CircularLinkedList& other)
    {
        CircularLinkedList<T> copy{ other };
        swap(copy);
        return *this;
    }

    template <typename T>
    inline CircularLinkedList<T>& CircularLinkedList<T>::operator=(CircularLinkedList&& other) noexcept
    {
        if (this != &other)
        {
            this->first = other.first;
            this->last = other.last;
            this->size = other.size;

            other.first = nullptr;
            other.last = nullptr;
            other.size = 0;
        }
        return *this;
    }

    template <typename T>
    inline CircularLinkedList<T>::~CircularLinkedList()
    {
        while (first != nullptr)
        {
            Node* current = first;
            first = first->next;
            delete current;
        }
    }

    template <typename T>
    inline bool CircularLinkedList<T>::IsEmpty() const noexcept
    {
        return first == nullptr;
    }

    template <typename T>
    inline void CircularLinkedList<T>::add(const T& val) {
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

    template <typename T>
    inline void CircularLinkedList<T>::swap(CircularLinkedList& other) noexcept
    {
        std::swap(this->first, other.first);
    }

    template <typename T>
    inline void CircularLinkedList<T>::RemoveFront() {
        if (IsEmpty()) {
            throw std::out_of_range("элементов нет");
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
}