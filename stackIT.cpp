#include <iostream>
#include <cassert>


class Stack
{
static const int capacity = 10; //
int stack[capacity];
int size = 0;
public:
    bool push(int element)
    {
        if (size < capacity - 1)
        {
            stack[size] = element;
            size++;
            return true;
        }
        std::cout <<"The stack is full!\n";
        return false;

    }

    int pop()
    {
        assert(size != 0);

        int toBeRemoved = stack[size];
        size --;
        return toBeRemoved;

    }

    void reset() {
        size = 0;
    }

    void print() {
        if(size == 0)
        {
            std::cout <<"( )"<<std::endl;
        }
        else if(size == 1)
        {
            std::cout << "( " << stack[size]<< ") "<<std::endl;
        }
        else
        {
            std::cout << "( ";
            for (int i = 0; i <= size - 1; i++)
            {
                std::cout << stack[i] << " ";
            }
            std::cout << ")\n";
        }

    }

    void returnFirstElem(){
        std::cout << stack[0]<<"\n";
    }


};


int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();
    //
	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}
