#include <iostream>
#include <windows.h>    
#include "Base64.h"
#include "Helper.h"
#include "keyconstant.h"

using namespace std;

int main() {
    MSG Msg;
    while(GetMessage (&Msg, NULL, 0, 0)){
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return 0;
}