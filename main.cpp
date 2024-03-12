#include <iostream>
#include <string>
using namespace std;

int main(){
    int q,i,k,m=0,h,t;
    string T0,T1="";
    cout<<"\n ----------  Deshifrlamoqchi bo'lgan matnni kiriting  ---------------  \n"<<endl;
    getline(cin,T0);

    int F[26];
    for(i=0; i<26; i++){
        F[i]=0;
    }
    for(i=0; i<T0.length(); i++){
        q=int(T0[i]);
        if(q>96 and q<123)
        {
            F[q-97]++;
        }
        else
        if(q>64 and q<91)
            F[q-65]++;
    }
    q=0;
    for(i=0; i<26; i++){
        if(F[i]>m){
            m=F[i];
            q=i;
        }
    }
    h=q+65;
    cout<<"\n           ---------------- Eng ko'p uchragan harf  --------------   "<<char(h)<<"\n    ";
    if(h>=69)
        k=h-69;
    else
    {
        k=(h-43);
    }
    cout<<"\n           ----------------       KALIT      --------------   "<<k<<"\n     \n";

    for(i=0; i<T0.length(); i++){

        q=int(T0[i]);

        if(q>64 and q<91){
        t=(q-k);
        if(t<65)
            m=char(90-(k-q+65)+1);
        else
            m=char(q-k);
        T1+=m;
        }
        else
        if(q>96 and q<123){
            t=(q-k);
            if(t<97)
                m=char(122-(k-q+97)+1);
            else
                m=char(q-k);
            T1+=m;
        }
        else
        if(T0[i]==' '){
            T1+=' ';
        }
        else
        if(T0[i]=='.'){
            T1+='.';
        }
        else
        if(T0[i]==','){
            T1+=',';
        }
        else
        if(T0[i]=='-'){
            T1+='-';
        }
        else
        if(q>47 and q<58){
            T1+=char(q);
        }
    }
    cout<<"          ----------  Asl matn  ---------  \n\n  "<<T1<<endl;
    return 0;
}
