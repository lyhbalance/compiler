#include <iostream>
//#include <boost/variant.hpp>
#include "source/TableNode.h"
using namespace std;
//using namespace boost;
//

int main() {
    auto* globalPtr = new TableNode();
    while (globalPtr != nullptr) {
        char nextChar;
        cin >> nextChar;
        if (nextChar == '{') {
            globalPtr = globalPtr->addChild();
        } else if (nextChar == '}') {
            globalPtr = globalPtr->deleteSelf();
        } else if (nextChar == 'a') {
            string id;
            cout << "Please Id : ";
            cin >> id;
            int* valuePtr = globalPtr->addChar(id);
            if(valuePtr == nullptr){
                cout<<"Redefined"<<endl;
                continue;
            }
            cout << "Location is : " << valuePtr << endl;
            cout << "Value is : " << *valuePtr << endl;
        } else if (nextChar == 'm') {
            string id;
            int value;
            cout << "Please Id : ";
            cin >> id;
            cout << "Please input value : ";
            cin >> value;

            int *valuePtr = globalPtr->modifyValue(id, value);
            if (valuePtr == nullptr) {
                cout << "Not define yet" << endl;
                continue;
            }
            cout << "Location is : " << valuePtr << endl;
            cout << "Value is : " << *valuePtr << endl;
        }
        else if(nextChar == 's'){
            string id;
            cout << "Please Id : ";
            cin >> id;
            int *valuePtr = globalPtr->isHave(id);
            if (valuePtr == nullptr) {
                cout << "Not define" << endl;
                continue;
            }
            cout << "Location is : " << valuePtr << endl;
            cout << "Value is : " << *valuePtr << endl;
        }
    }
    delete globalPtr;
    return 0;
}

//int main(){
//    variant<int, string> data;
//    data = 5;
////    data = "56";
////    cout<<*get<string>(&data)<<endl;
////    cout<<data<<endl;
//    cout<<get<string>(&data)<<endl;
////    assert(get<string>(&data));
//    cout<<(typeid(5)==typeid(int))<<endl;
//    cout<<(typeid(data)==typeid(int))<<endl;
//}