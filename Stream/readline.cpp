
let Stream::readline(){
   string str;
   cin>>str;
   let obj(str);
   return obj;
}
let Stream::readline(const char* a){
    cout<<a;
    string str;
    cin>>str;
    let obj(str);
    return obj;
}

let Stream::readNumber(){
    double d;
    cin>>d;
    return d;
}
   
let Stream::readNumber(const char* a){
    cout<<a;
    double d;
    cin>>d;
    return d;
}