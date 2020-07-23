//
// Created by Oruqimaru on 21/7/2020.
//

//
// Created by Oruqimaru on 18/7/2020.
//

#include "avl_tree.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>


using namespace std;

int main(){

    vector<int> inputs;
    AvlTree<int> T;
    set<int> S;

    for(int i = 0; i < 5000000; i++){
        inputs.push_back(i);
    }

    random_shuffle(inputs.begin(),inputs.end());

    clock_t startTime,endTime;


//    T.ShowTree();

    startTime = clock();
    for(int i = 0; i < 5000000; i++){
        S.insert(inputs[i]);
    }
    endTime = clock();

    cout << "R Totle Time : " <<(endTime - startTime) * 1.0 / CLOCKS_PER_SEC << "s" << endl;

//    startTime = clock();
//    for(int i = 0; i < 100; i++){
//        T.Insert(inputs[i]);
//    }
//    endTime = clock();
//
////    int ** path_height_L = (int**) malloc(sizeof(int*) * 50);
////    int ** path_height_R = (int**) malloc(sizeof(int*) * 50);
////
////    for(int i = 0; i < 10; i++){
////        path_height_L[i]=i+1;
////        path_height_R[i]=i+2;
////    }
//
//
//    cout << "T Totle Time : " <<(double)(endTime - startTime) / CLOCKS_PER_SEC << "s" << endl;
//    cout << "T Trace Time : " <<(double)T.trace_time / CLOCKS_PER_SEC << "s" << endl;
//    cout << "Tree Height: " << T.GetHeight() << endl;
//    cout << "repair time: " << T.repair_time << endl;

    return 0;
}

