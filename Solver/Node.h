namespace rut::miit::llist
{
	template <typename T>
	struct Node
	{
	public:
		/**
		* @brief значение узла.
		*/
		T data;

		/**
		* @brief указатель на следующий узел
		*/
		Node* next;

		/**
		* @brief конструктор
		*/
		Node(T value, Node* next = nullptr) : data(value), next(nullptr) {};
	};
}
