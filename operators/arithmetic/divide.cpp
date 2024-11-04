let let::operator/(int a){
let obj;
try{
if(this->Type != 1)
throw"Invalid data type: Both values must be numbers to perform multiplication.";
obj.Number = this->Number/(double)a;
obj.Type = 1;
}catch(const char *a){
    cout<<a;
}
return obj;
}
    
let let::operator/(double a){
let obj;
try{
if(this->Type != 1)
throw"Invalid data type: Both values must be numbers to perform multiplication.";
obj.Number = this->Number/a;
obj.Type = 1;
}catch(const char *a){
    cout<<a;
}
return obj;
}
    
let operator/(int a,const let b){
let obj;
try{
if(b.Type != 1)
throw"Invalid data type: Both values must be numbers to perform multiplication.";
obj.Number = (double)a/b.Number;
obj.Type = 1;
}catch(const char *a){
    cout<<a;
}
return obj;
}

let operator/(double a,const let b){
let obj;
try{
if(b.Type != 1)
throw"Invalid data type: Both values must be numbers to perform multiplication.";
obj.Number = a/b.Number;
obj.Type = 1;
}catch(const char *a){
    cout<<a;
}
return obj;
}

let let::operator/(let a){
let obj;
try{
if(this->Type != 1  && a.Type != 1)
throw"Invalid data type: Both values must be numbers to perform multiplication.";
obj.Number = this->Number/a.Number;
obj.Type = this->Type;
}catch(const char *a){
    cout<<a;
}
return obj;
}
    