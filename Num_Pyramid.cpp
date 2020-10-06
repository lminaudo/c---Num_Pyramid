//
//  main.cpp
//  HW5_CSC-175
//
//  Created by Logan Minaudo on 4/15/20.
//  Copyright © 2020 Logan Minaudo. All rights reserved.
//
#include <iostream>
using namespace std;

int p7(int rows, int i_row, int num){
    int spaces = (rows - 1)-(i_row-1);
    int number_calc = 2*i_row-1;
    for (int j = 1; j<=spaces;j++){
        cout<<"  ";
    }
    for (int i = 1; i<= number_calc;i++){
        cout<< num<<" ";
        num++;
        if (num==10){
            num=1;
        }
    }
    cout<<endl;
    return num;
}

int main(){
    int row;
    cout<<"Number of rows: ";
    cin>>row;
    int num=1;
    for(int i_row = 1; i_row <= row;i_row++){
        num=p7(row, i_row,num);//pyramid nums
    }

}
