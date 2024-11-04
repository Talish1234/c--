void Stream::log(){

}

void Stream::log(char a){
    cout<<a;
}

void Stream::log(int a){
    cout<<a;
}

void Stream::log(string& s){
    cout<<s;
}

void Stream::log(double a){
    cout<<a;
}

void Stream::log(float a){
    cout<<a;
}
void Stream::log(bool a){
    cout<<a;
}

void Stream::log(const char* a) {
    cout<<a;
}

void Stream::log(let& a){
    switch(a.Type){
    case -1: cout<<"ND"; break;
    case 0:  cout<<a.Bool; break;
    case 1:  cout<<a.Number; break;
    case 2:  cout<<a.String; break;
    case 3: 
    int size = a.Array.size();
    cout<<"[ "; for(int i=0;i<size-1;i++){
             
             log(a.Array[i]);
             cout<<" , ";
    }
    if(size !=0)
    log(a.Array[size-1]);
    cout<<" ]";
             break;
}
}

template <typename T, typename... Args>
    void Stream::log(T first, Args... args) {
        log(first);
        log(args...); 
    }
