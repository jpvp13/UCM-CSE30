//created by John Villalvazo 11/29/18
//

#include<iostream>

#include"OpStack.h"

    using namespace std;

    int main(){

        char lett;

        Stack Stack;

        long total = 0, curr = 0;

        Link *popedEl;

        do

        {

            //cout << "Enter \na. to read a long value \ns. Read a long value and subtract from running total \nz. undo the effect of last operation\nq. quit" << endl;

            lett = cin.get();

            switch (lett)

            {

                case 'a':

                    //cout << "Enter a long value: ";

                    cin >> curr;

                    total = total + curr;

                    //push total+num1

                    Stack.push(total, 'a');

                    cout << "Total: " << total;

                    break;

                case 's':

                    if (Stack.isEmpty()){

                        cout << "Stack is empty";

                    }else {

                        //cout << "Enter a long value: ";

                        cin >> curr;

                        total = total - curr;

                        //push total-num1

                        Stack.push(total, 's');

                        cout << "Total: " << total;

                    }

                    break;

                case 'z':

                    //pop the element

                    popedEl = Stack.pop();

                    if (popedEl == nullptr){

                        cout << "Nothing to undo";

            } else {

                        total = popedEl->data;

                        if (popedEl->op == 's')

                            total = popedEl->data + curr;

                        if (popedEl->op == 'a')

                            total = popedEl->data - curr;

                        cout << "Total: " << total;

                    }

                    break;

                case 'q':

                    cout << "exiting..." << endl;

                    break;

                default:

                    cout << "Invalid option,try again" << endl;

            }

            cin.ignore();

        } while (lett != 'q');
            return 0;
    }


