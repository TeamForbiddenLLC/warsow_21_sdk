/**
 * array
 */
class array
{
public:
	/* object properties */

	/* object behaviors */
	int _beh_13_();&s
	void _beh_14_();&s
	bool _beh_15_();&s
	void _beh_16_(int&in);&s
	void _beh_17_(int&in);&s
	bool _beh_12_(int&in, bool&out);&s
	T[]@ _beh_4_(int&in, int&in) { repeat T };&s

	/* object methods */
	T& opIndex(uint);
	const T& opIndex(uint) const;
	T[]& opAssign(const T[]&in);
	void insertAt(uint, const T&in);
	void removeAt(uint);
	void insertLast(const T&in);
	void removeLast();
	uint length() const;
	void reserve(uint);
	void resize(uint);
	void sortAsc();
	void sortAsc(uint, uint);
	void sortDesc();
	void sortDesc(uint, uint);
	void reverse();
	int find(const T&in) const;
	int find(uint, const T&in) const;
	bool opEquals(const T[]&in) const;
	bool isEmpty() const;
	uint get_length() const;
	void set_length(uint);
	uint size() const;
	bool empty() const;
	void push_back(const T&in);
	void pop_back();
	void insert(uint, const T&in);
	void erase(uint);
};

