namespace rut::miit::llist
{
	template <typename T>
	struct Node
	{
	public:
		/**
		* @brief �������� ����.
		*/
		T data;

		/**
		* @brief ��������� �� ��������� ����
		*/
		Node* next;

		/**
		* @brief �����������
		*/
		Node(T value, Node* next = nullptr) : data(value), next(nullptr) {};
	};
}
