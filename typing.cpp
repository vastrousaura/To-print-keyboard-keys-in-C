#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;

class Dhundho{
    int in;
    int on;
    int temp;
    int stemp=-1;
    void a(int n);
    void b(int n);
    void c(int n);
    void d(int n);
    void e(int n);
    void f(int n);
    void g(int n);
    void h(int n);
    void i(int n);
    void j(int n);
    void k(int n);
    void l(int n);
    void m(int n);
    void n(int n);
    void o(int n);
    void p(int n);
    void q(int n);
    void r(int n);
    void s(int n);
    void t(int n);
    void u(int n);
    void v(int n);
    void w(int n);
    void x(int n);
    void y(int n);
    void z(int n);
    void space(int n);
    void one(int n);
    void two(int n);
    void three(int n);
    void four(int n);
    void six(int n);
    void seven(int n);
    void eight(int n);
    void nine(int n);
    void exclamation(int n);
    void hashtag(int n);
    void dolar(int n);
    void percent(int n);
    void ampercent(int n);
    void star(int n);
    void bracket_start(int n);
    void bracket_off(int n);
    void sub(int n);
    void underscore(int n);
    void add(int n);
    void same(int n);
    void straight_horizontal(int n);
    void backslash(int n);
    void single_quotes(int n);
    void double_quotes(int n);
    void colon(int n);
    void semi_colon(int n);
    void front_slash(int n);
    void question(int n);
    void greaterthan(int n);
    void lesserthan(int n);
    void point(int n);
    void coma(int n);
    void raise(int n);
public:
    void index(string c);

};

int main(){
    string input;
    char c;
    cout<<"Enter a text which you want to print : ";
    getline(cin,input);
    /*cout<<"\nNow the charecter by which you want to print : ";
    cin>>c;*/
    Dhundho type;
    type.index(input);
    return 0;
}

void Dhundho::index(string input){
    on =0;
    for(in=0; in<input.length(); in++){
        if(input[in]=='a'||input[in]=='A'){a(on);cout<<"  ";}
        else if(input[in]=='b'||input[in]=='B'){b(on);cout<<"  ";}
        else if(input[in]=='c'||input[in]=='C'){c(on);cout<<"  ";}
        else if(input[in]=='d'||input[in]=='D'){d(on);cout<<"  ";}
        else if(input[in]=='e'||input[in]=='E'){e(on);cout<<"  ";}
        else if(input[in]=='f'||input[in]=='F'){f(on);cout<<"  ";}
        else if(input[in]=='g'||input[in]=='G'){g(on);cout<<"  ";}
        else if(input[in]=='h'||input[in]=='H'){h(on);cout<<"  ";}
        else if(input[in]=='i'||input[in]=='I'){i(on);cout<<"  ";}
        else if(input[in]=='j'||input[in]=='J'){j(on);cout<<"  ";}
        else if(input[in]=='k'||input[in]=='K'){k(on);cout<<"  ";}
        else if(input[in]=='l'||input[in]=='L'){l(on);cout<<"  ";}
        else if(input[in]=='m'||input[in]=='M'){m(on);cout<<"  ";}
        else if(input[in]=='n'||input[in]=='N'){n(on);cout<<"  ";}
        else if(input[in]=='o'||input[in]=='O'||input[in]=='0'){o(on);cout<<"  ";}
        else if(input[in]=='p'||input[in]=='P'){p(on);cout<<"  ";}
        else if(input[in]=='q'||input[in]=='Q'){q(on);cout<<"  ";}
        else if(input[in]=='r'||input[in]=='R'){r(on);cout<<"  ";}
        else if(input[in]=='s'||input[in]=='S'||input[in]=='5'){s(on);cout<<"  ";}
        else if(input[in]=='t'||input[in]=='T'){t(on);cout<<"  ";}
        else if(input[in]=='u'||input[in]=='U'){u(on);cout<<"  ";}
        else if(input[in]=='v'||input[in]=='V'){v(on);cout<<"  ";}
        else if(input[in]=='w'||input[in]=='W'){w(on);cout<<"  ";}
        else if(input[in]=='x'||input[in]=='X'){x(on);cout<<"  ";}
        else if(input[in]=='y'||input[in]=='Y'){y(on);cout<<"  ";}
        else if(input[in]=='z'||input[in]=='Z'){z(on);cout<<"  ";}
        else if(input[in]==' '||input[in]=='\t'){space(input.length());}
        else if(input[in]=='1'){one(on);cout<<"  ";}
        else if(input[in]=='2'){two(on);cout<<"  ";}
        else if(input[in]=='3'){three(on);cout<<"  ";}
        else if(input[in]=='4'){four(on);cout<<"  ";}
        else if(input[in]=='6'){six(on);cout<<"  ";}
        else if(input[in]=='7'){seven(on);cout<<"  ";}
        else if(input[in]=='8'){eight(on);cout<<"  ";}
        else if(input[in]=='9'){nine(on);cout<<"  ";}
        else if(input[in]=='!'){exclamation(on);cout<<"  ";}
        else if(input[in]=='#'){hashtag(on);cout<<"  ";}
        else if(input[in]=='$'){dolar(on);cout<<"  ";}
        else if(input[in]=='%'){percent(on);cout<<"  ";}
        else if(input[in]=='&'){ampercent(on);cout<<"  ";}
        else if(input[in]=='*'){star(on);cout<<"  ";}
        else if(input[in]=='('||input[in]=='{'||input[in]=='['){bracket_start(on);cout<<"  ";}
        else if(input[in]==')'||input[in]=='}'||input[in]==']'){bracket_off(on);cout<<"  ";}
        else if(input[in]=='|'){straight_horizontal(on);cout<<"  ";}
        else if(input[in]=='\\'){backslash(on);cout<<"  ";}
        else if(input[in]=='+'){add(on);cout<<"  ";}
        else if(input[in]=='-'){sub(on);cout<<"  ";}
        else if(input[in]=='_'){underscore(on);cout<<"  ";}
        else if(input[in]=='='){same(on);cout<<"  ";}
        else if(input[in]=='\''||input[in]=='`'){single_quotes(on);cout<<"  ";}
        else if(input[in]=='\"'){double_quotes(on);cout<<"  ";}
        else if(input[in]=='/'){front_slash(on);cout<<"  ";}
        else if(input[in]==':'){colon(on);cout<<"  ";}
        else if(input[in]==';'){semi_colon(on);cout<<"  ";}
        else if(input[in]==','){coma(on);cout<<"  ";}
        else if(input[in]=='?'){question(on);cout<<"  ";}
        else if(input[in]=='.'){point(on);cout<<"  ";}
        else if(input[in]=='>'){greaterthan(on);cout<<"  ";}
        else if(input[in]=='<'){lesserthan(on);cout<<"  ";}
        else if(input[in]=='^'){raise(on);cout<<"  ";}
        else{continue;}
        if(in==input.length()-1){
            space(input.length());
        }
    }
    cout<<"\n";

}

void Dhundho::a(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1||y==5||(x==2&&(y==2||y==4))||(x==1&&y==3)|| x==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
            if((x==1||x==2)&&(y==1||y==5)){
            arr[y-1][x-1]="  ";
        }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::b(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || ((x==3 || x==1 || x==5)&& y<5)||((x==2||x==4)&&y==5)){
                arr[y-1][x-1]="c ";
            }
                else{
                    arr[y-1][x-1]="  ";
                }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::c(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1 || x==5 || y==1){
                arr[y-1][x-1]="c ";
                if(y==1 && (x==1 || x==5)){
                    arr[y-1][x-1]="  ";
                }
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }



}

void Dhundho::d(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1 || x==5 || y==1 || y==5){
                arr[y-1][x-1]="c ";
                if(y==5 && (x==1 || x==5)){
                    arr[y-1][x-1]="  ";
                }
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::e(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1 || x==5 || x==3 || y==1){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::f(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1 || x==3 || y==1){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::g(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1 || x==5 || y==1 || ((y>=3) && (x>=3))){
                arr[y-1][x-1]="c ";
                if((y==1 && (x==1 || x==5))|| ((y==3 || y==4) && x==4)){
                    arr[y-1][x-1]="  ";
                }
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::h(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || x==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::i(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || x==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[n][y-1];
        }

}

void Dhundho::j(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || x==3){
                arr[y-1][x-1]="c ";
                if(y>3 && x>3){
                    arr[y-1][x-1]="  ";
                }
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[n][y-1];
        }
       }

void Dhundho::k(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            arr[y-1][x-1]="  ";
            if(y==1){
                arr[y-1][x-1]="c ";
            }}}

                int a=3,b=2;
                while(a>0 && b<=5){
                    arr[b-1][a-1]="c ";
                    a-=1;
                    b+=1;
                }
                int i=3,j=4;
                while(i!=j+1 && i<=5 && j<=5){
                    arr[i-1][j-1]="c ";
                    i+=1;
                    j+=1;
                    }

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::l(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || x==5){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::m(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==3 || y==5 || x==1){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::n(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || (x==y)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
void Dhundho::o(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || x==1 || x==5){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::p(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || (y==3 && x>0 && x<4) || ((x==3 || x==1) && y>0 && y<4)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::q(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3 || (y==1 && x>0 && x<4) || ((x==3 || x==1) && y>0 && y<4)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
// do you want the tail or not
        /*for(int x=5,y=3;y<6; x--,y++){
            arr[y-1][x-1]="c ";
        }*/


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::r(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || (y==4 && x>0 && x<4) || ((x==3 || x==1) && y>0 && y<5)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        int i=3,j=4;
                while(i!=j+1 && i<=5 && j<=5){
                    arr[i-1][j-1]="c ";
                    i+=1;
                    j+=1;
                    }


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::s(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||(y==1&&x==2)||(y==5&&x==4)){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::t(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||y==3){
                arr[y-1][x-1] = " c";
            }
            else{
                arr[y-1][x-1] = "  ";
        }}}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::u(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==5||y==1 || y==5){
                arr[y-1][x-1] = " c";
            }
            else{
                arr[y-1][x-1] = "  ";
        }}}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::v(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1||y==5||(x==4&&(y==2||y==4))||(x==5&&y==3)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
            if((x==5||x==4)&&(y==1||y==5)){
            arr[y-1][x-1]="  ";
        }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::w(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==3 || y==5 || x==5){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::x(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==x){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int i=5,j=1;i>0||j<6;i--,j++){
            arr[i-1][j-1]="c ";
        }


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
void Dhundho::y(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((y==x&&(y<4))|| (y==3&&x>3)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int i=5,j=1;i>0&&j<4;i--,j++){
            arr[i-1][j-1]="c ";
        }


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
void Dhundho::z(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        for(int i=5,j=1;i>0&&j<6;i--,j++){
            arr[i-1][j-1]="c ";
        }



        for(int y=1; y<=5; y++){
            cout<<arr[n][y-1];
        }

}

void Dhundho :: space(int n){
            temp = in;
            in=stemp;
            on+=1;
            if(on==5){
                in=temp;
                on=0;
                stemp=in;

                sleep(1);
                cout<<"\n\n";
                if(in==n-1){
                    on=5;
                    in=n;
                }
            }
            sleep(1);
            cout<<"\n";
}


void Dhundho::one(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3||(y==2&&x==2)||(y==1&&x==3)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::two(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||(y==5&&x==2)||(y==1&&x==4)){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::three(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(((x==3 || x==1 || x==5)&& y<5)||((x==2||x==4)&&y==5)){
                arr[y-1][x-1]="c ";
            }
                else{
                    arr[y-1][x-1]="  ";
                }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::four(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==1 || y==5 || x==3){
                arr[y-1][x-1]="c ";
                if(y==1&&x>3){arr[y-1][x-1]="  ";}
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::six(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||y==1||(y==5&&x==4)){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::seven(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}
        for(int i=5,j=1; i>0 || j<6;j++,i--){
            arr[i-1][j-1]="c ";
        }

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}


void Dhundho::eight(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||y==1||y==5){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::nine(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||y==5||(y==1&&x==2)){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::exclamation(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        arr[2][3]="  ";

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::hashtag(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==2||x==4||y==2||y==4){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::dolar(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==3||x==5||(y==1&&x==2)||(y==5&&x==4)||y==3){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::percent(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==1&&y==1)||(x==5&&y==5)){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}
        for(int i=5,j=1; i>0 || j<6;j++,i--){
            arr[i-1][j-1]="c ";
        }


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::ampercent(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==3&&(y!=4))||(x==5&&y!=4)||(y==1&&x==4)||(x==y&&x!=1&&x!=2)||(x==2&&(y==1||y==4))||(x==1&&y==2)){
                arr[y-1][x-1] = "c ";
                if(y==1&&(x==3||x==5)){
                  arr[y-1][x-1] = "  ";
                }
                else if(y==2&&x==1){
                    arr[y-1][x-1] = " c";
                }
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
void Dhundho::star(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3||x==y){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
        }}
        for(int i=5,j=1; i>0 || j<6;j++,i--){
            arr[i-1][j-1]="c ";
        }


        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::bracket_start(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==5||y==1){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
            if(y>2){
                arr[y-1][x-1]= "  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
void Dhundho::bracket_off(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||x==5||y==5){
                arr[y-1][x-1] = "c ";
            }
            else{
                arr[y-1][x-1] = "  ";
            }
            if(y<4){
                arr[y-1][x-1]= "  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::straight_horizontal(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::add(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(y==3||x==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::sub(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::underscore(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==5){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::same(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==4 || x==2){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::backslash(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==y){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }
}

void Dhundho::single_quotes(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==1||x==2)&&y==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::double_quotes(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==1||x==2) &&(y==2||y==3)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::front_slash(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
                arr[y-1][x-1] = "  ";
        }}
        for(int i=5,j=1; i>0 || j<6;j++,i--){
            arr[i-1][j-1]="c ";
        }

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}

void Dhundho::colon(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==4||x==2)&&y==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::semi_colon(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(((x==4||x==2)&&y==3)||(x==5&&y==2)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::coma(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==4&&y==3)||(x==5&&y==2)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::question(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==1||(x<4&&y==5)||(y>1&&x==3)||y==2){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        arr[1][1]="  ";

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::point(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==4&&y==3){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::greaterthan(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==y&&y<4){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        for(int i=3,j=3; i>0 || j<6;j++,i--){
            arr[i-1][j-1]="c ";
        }

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::lesserthan(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if(x==y&&y>2){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}
        for(int i=5,j=1; i>2 || j<4;j++,i--){
            arr[i-1][j-1]="c ";
        }

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }


}

void Dhundho::raise(int n){
    string arr[5][5];
    for(int x=1; x<=5; x++){
        for(int y=1; y<=5; y++){
            if((x==2&&(y==2||y==4))||(x==1&&y==3)||((y==1||y==5)&&x==3)){
                arr[y-1][x-1]="c ";
            }
            else{
                arr[y-1][x-1]="  ";
            }
        }}

        for(int y=1; y<=5; y++){
            cout<<arr[y-1][n];
        }

}
