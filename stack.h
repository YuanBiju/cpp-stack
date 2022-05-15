class Stack
{
private:
int m_top = -1;
int m_size;
int* m_arr;
public:
    Stack(int _size);
    ~Stack();
    void push(int _num);
    void pop();
    int peek();
    void display();
};