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
        * @brief Метод вставки в конкретное место
        */
        void InsertIn(size_t position, const T& value);

        /**
        * @brief метод удаления из конкретного места
        */
        void RemoveIn(size_t position);

        /**
        * @brief проверяет, есть ли искомый элемент в массиве
        */
        bool FindElem(const T& elem);

        /**
        * @brief Деструктор
        */
        ~CircularLinkedList();
    };



    template <typename T>
    std::wstring CircularLinkedList<T>::ToString(const CircularLinkedList& list)
    {
        auto temp = this->ToString();
        return std::wstring ws{ temp.cbegin(), temp.cend() };
    }

    template <typename T>
    std::wstring CircularLinkedList<T>::CircularLinkedList() : tail(nullptr) {}

    template <typename T>
    CircularLinkedList<T>::CircularLinkedList(std::initializer_list<T> list) : CircularLinkedList()
    {
        for (auto& value : list)
        {
            add(value);
        }
    }

    template <typename T>
    CircularLinkedList<T>::CircularLinkedList(const CircularLinkedList& other) : CircularLinkedList()
    {
        Node* current = other.first;
        while (current != nullptr)
        {
            add(current->value);
            current = current->next;
        }
    }

    template <typename T>
    CircularLinkedList<T>& CircularLinkedList<T>::operator=(const CircularLinkedList& other)
    {
        CircularLinkedList<T> copy{ other };
        swap(copy);
        return *this;
    }

    template <typename T>
    CircularLinkedList<T>& CircularLinkedList<T>::operator=(CircularLinkedList&& other) noexcept
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
    CircularLinkedList<T>::~CircularLinkedList()
    {
        while (first != nullptr)
        {
            Node* current = first;
            first = first->next;
            delete current;
        }
    }

    template <typename T>
    bool CircularLinkedList<T>::IsEmpty() const noexcept
    {
        return first == nullptr;
    }

    template <typename T>
    void CircularLinkedList<T>::add(const T& val) {
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
    void CircularLinkedList<T>::swap(CircularLinkedList& other) noexcept
    {
        std::swap(this->first, other.first);
    }


    template <typename T>
    void CircularLinkedList<T>::InsertIn(size_t position, const T& value)
    {
        if (position == 0 || IsEmpty()) {
            Add(value);
            return;
        }
    }

    template <typename T>
    void CircularLinkedList<T>::RemoveIn(size_t position)
    {
        if (IsEmpty())
            throw std::out_of_range("Пустой список");

        if (position == 0) {
            RemoveFront();
            return;
        }

        Node* current = tail->next;
        for (size_t i = 0; i < position - 1; ++i) {
            current = current->next;
            if (current == tail->next) 
                throw std::out_of_range("Список уже обработан");
        }

        Node* to_remove = current->next;
        current->next = to_remove->next;

        if (to_remove == tail) 
            tail = current;

        delete to_remove;
    }

    template <typename T>
    bool CircularLinkedList<T>::FindElem(const T& elem)
    {
        if (IsEmpty()) 
            return false;

        Node* current = tail->next;
        do {
            if (current->value == val) 
                return true;
            current = current->next;
        } while (current != tail->next);

        return false;
    }



    template <typename T>
    void CircularLinkedList<T>::RemoveFront() {

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