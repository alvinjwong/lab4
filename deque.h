#ifndef deque_h
#define deque_h

//i think its done

class Deque {
 private:
  int* dequeList;
  int front;
  int back;
  int size;
 public:
  Deque();
  ~Deque();
  void push_front(int num);
  void push_back(int num);
  int pop_front();
  int pop_back();
  int peak_front();
  int peak_back();
  void remove_all();
  bool isFull();
  bool isEmpty();
};

#endif
