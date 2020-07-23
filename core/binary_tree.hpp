//
// Created by Oruqimaru on 18/7/2020.
//

#pragma once

#include "binary_node.hpp"

template <class NodeT>
class BinaryTree{
public:
    BinaryTree():_root(NULL), _height(0){

    }

    void SetRoot(NodeT* root){
        _root = root;
    }

    NodeT* GetRoot(){
        return _root;
    }
protected:
    NodeT *_root;
    int _height;
};
