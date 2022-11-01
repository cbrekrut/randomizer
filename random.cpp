#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    int randvalue = rand()%10;
    int score_p=0,score_c=0;
    int value;
    cout<<"\n---------------------------\nПривет, это игра в рандом\n"
       "---------------------------\n";
    while((score_c+score_p)<21){
    cout<<"Выберите число от 0 до 9\n";
    cin>>value;
    if(value==randvalue){
        score_p++;
        cout<<"Ты выиграл!\n"<<"Ты: "<<score_p<<"\tКомпьютер: "<<score_c;}
    else{
        score_c++;
        cout<<"Компьютер выиграл!\n"<<"Ты: "<<score_p<<"\tКомпьютер: "<<score_c;}
    }
    return 0;
}