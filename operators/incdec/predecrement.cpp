let& let::operator--(){
try{
if(this->Type != 1)
throw "Invalid data type";
this->Number--;
}catch(const char* e){
    cout<<e;
}
return *this;
}