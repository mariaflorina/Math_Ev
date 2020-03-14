#include <iostream>
#include <winbgim.h>
#include <graphics.h>
#include "esential.h"
#include "verificare.h"
#include "grafica.h"


using namespace std;

int main()
{
    char expr_ini[100],expr_infix[100],expr_postfix[100];
    int ok;
    graf(expr_ini,expr_infix,expr_postfix);
    Sleep(10000);
    closegraph();
    return 0;
}
