#include <iostream>

#include "deque.h"

Deque::Deque() : front(500), back(499), size(0) {
  dequeList = new int[1000];
}
Deque::~Deque() {
  remove_all();
}

bool Deque::isEmpty() {
  return size == 0;
}

bool Deque::isFull() {
  return size == 1000;
}

void Deque::push_front(int num) {
  if (isFull()) {
    std::cout << "This deque is full" << std::endl;
    return;
  } else {
    front = front - 1; //this might break, come back and look at this later
    dequeList[front] = num;
    size++;
  }
}
void Deque::push_back(int num) {
  if (isFull()) {
    std::cout << "This deque is full" << std::endl;
    return;
  } else {
    back = back + 1; //this might break, come back and look at this later
    dequeList[back] = num;
    size++;
  }
}

int Deque::pop_front() {
  if (isEmpty()) {
    std::cout << "This deque is empty" << std::endl;
    return -1;
  } else {
    int num = dequeList[front];
    front = front + 1;
    size--;
    return num;
  }
}

int Deque::pop_back() {
  if (isEmpty()) {
    std::cout << "This deque is empty" << std::endl;
    return -1;
  } else {
    int num = dequeList[back];
    back = back - 1;
    size--;
    return num;
  }
}

int Deque::peak_front() {
  if (isEmpty()) {
    std::cout << "This deque is empty" << std::endl;
    return -1;
  } else {
    return dequeList[front];
  }
}

int Deque::peak_back() {
  if (isEmpty()) {
    std::cout << "This deque is empty" << std::endl;
    return -1;
  } else {
    return dequeList[back];
  }
}

void Deque::remove_all() {
  delete[] dequeList;
  dequeList = nullptr;
  size = 0;
  front = 500;
  back = 499;
}
    
  
    
    
