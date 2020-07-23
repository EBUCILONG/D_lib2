//
// Created by Oruqimaru on 18/7/2020.
//
#pragma once

#include <cstddef>

template <class T, class NodeT>
class BinaryNode {
public:
    BinaryNode(T value):_value(value),_parent(NULL),_left_child(NULL),_right_child(NULL){
    }

    void SetValue(T key){
        _value = key;
    }

    void SetLeft(NodeT* node){
        _left_child = node;
    }

    void SetRight(NodeT* node){
        _right_child = node;
    }

    void SetParent(NodeT* node){
        _parent = node;
    }

    T GetValue() const{
        return _value;
    }

    NodeT* LeftChild() {
        return _left_child;
    }

    NodeT* RightChild() {
        return _right_child;
    }

    NodeT* Parent() {
        return _parent;
    }

    bool operator>(const BinaryNode& b){
        return _value > b.GetValue();
    }

    bool operator<(const BinaryNode& b){
        return _value < b.GetValue();
    }

    bool operator>=(const BinaryNode& b){
        return _value >= b.GetValue();
    }

    bool operator<=(const BinaryNode& b){
        return _value <= b.GetValue();
    }

//protected:
    T _value;
//private:
    NodeT *_parent;
    NodeT *_left_child;
    NodeT *_right_child;
};
