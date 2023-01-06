#include <iostream>
#include <string>

// Функция обрезания пробелов справа (тип void)
// Принимает параметры:
// char* symbol - указатель на начало строки
void TrimRight(char* symbol)
{
    if(!symbol) return; // если нет строки, то закончили (можно и с !*symbol, но тогда дольше из-за операции разыменование)
    char* first_right_space = symbol; // указатель на группы пробелов справа от слов
    for(; *symbol; ++symbol)
        if(*symbol != ' ')
            first_right_space = symbol+1;
    *first_right_space = '\0';      // новый конец строки в char
}

int main() {
    std::string str = "It's my life, oo, oo              ";
    char* symbol=&str[0];
    // Урезание пробелов в строке
    TrimRight(symbol);
    // Тестирование строки
    symbol = &str[0];
    for (;*symbol;++symbol){
        std::cout<<*symbol;
    }
    return 0;
}
