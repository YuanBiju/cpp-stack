class Stack
{
private:
int mtop = -1;
int msize;
int* marr;
public:
    Stack(int _size);
    void push(int _num);
    void pop();
    int peek();
    void display();
};