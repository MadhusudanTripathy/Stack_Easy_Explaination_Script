#include<iostream>
using namespace std;
void push();
void pop();
void peep();
void showstc();
template<class X>
class stack
{
private:
X stc[100],element;
int TOP=-1,MAX,in;
public:

stack(){
    cout<<"                      Welcome To MadhuBabu Datahandling CO.\n"<<endl;
    cout<<"Enter MAX(stack)"<<endl;
    cin>>MAX;
    while(in!=5)
    {
        cout<<"Enter choice"<<endl;
        cout<<"<1>Push"<<endl;
        cout<<"<2>Pop"<<endl;
        cout<<"<3>Peep"<<endl;
        cout<<"<4>Display Stack"<<endl;
        cout<<"<5>EXIT"<<endl;

        cin>>in;
        switch(in) 
        {
            case 1:
            this->push();
            break;
            case 2:
            this->pop();
            break;
            case 3:
            this->peep();
            break;
            case 4:
            this->showstc();
            break;
            case 5:
            break;
            default:
            cout<<"Wrong entry"<<endl;
                 }
               }
        }
    void push()
    {
    if(TOP==MAX-1)
    {
        cout<<"\n\a                      STACKOVERFLOW\n"<<endl;
    }
    else{
        cout<<"Enter Element"<<endl;
        cin>>element;
        TOP++;
        stc[TOP]=element;
    }
    }
    void pop(){
        if(TOP==-1)
        {
            cout<<"\n\a                      STACK UNDERFLOW\n"<<endl;
        }
        else{
            X del;
            cout<<"\nSTACK["<<TOP<<"]="<<stc[TOP]<<"\n\n\n                      POPED OUT SUCCESSFULLY\n"<<endl;
            del=stc[TOP];
            TOP--;
        }
    }
    void peep()
    {
        if(TOP==-1)
        {
            cout<<"\n\a                      STACK UNDERFLOW\n"<<endl;
        }
        else
        {
            cout<<"                      TOP of the stack is::STACK["<<TOP<<"]="<<stc[TOP]<<endl;
        }

    }
    void showstc()
     {
         if(TOP!=-1)
         {
          cout<<"\nThe Stack Is\n";
        for(int i=TOP;i>=0;i--)
        {
          cout<<" ------- "<<endl;
         if(i==TOP) cout<<"|   "<<stc[i]<<"   | STACK["<<TOP<<"](TOP OF THE STACK)"<<endl;
         else cout<<"|   "<<stc[i]<<"   | STACK["<<i<<"]"<<endl;
          //cout<<"Stack["<<i<<"] is "<<stc[i]<<endl;
        }
        cout<<" ------- "<<endl;
         }else cout<<"\n\a                      STACK UNDERFLOW\n"<<endl;
     }

};
 int main()
{
    stack<string > obj;
return 0;
}
///////////////////////////main re aita anibaku chahun thili j heleni au kn kaaria paredekhibu au bye bye///////////////////////////////
/*int main()
{int a;
cout<<"ENTER STACK DATATYPE"<<endl;
cout<<"<1>char"<<endl;
cout<<"<2>int"<<endl;
cout<<"<3>float"<<endl;
cout<<"<4>long"<<endl;
cout<<"<5>double"<<endl;
cout<<"<6>string"<<endl;
cin>>a;
//stack<int> abb;
switch(a)
{
    case 1:
    stack<char> abb;
    break;
case 2:
    stack<int> abb1;
    break;
    case 3:
    stack<float> oas;
    break;
    case 4:
    stack<long> jfg;
    break;
    case 5:
    stack<double> kobj;
    break;
    case 6:
    stack<string> objdfd;
    break;

}

return 0;
} */