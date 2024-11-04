let let::operator+(bool a){
let obj;
try{
if(this->Type == 0)
obj.Bool = this->Bool + a == 0?0:1;
else
throw "number can not be added with string or Number";

obj.Type = 0;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let operator+(bool a,const let b){
let obj;
try{
if(b.Type == 0)
obj.Bool = b.Bool + a == 0?0:1;
else
throw "number can not be added with string or bool";
obj.Type = 0;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let let::operator+(int a){
let obj;
try{
if(this->Type == 1)
obj.Number = this->Number + (double) a;
else
throw "number can not be added with string or bool";

obj.Type = 1;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let let::operator+(double a){
let obj;
try{
if(this->Type == 1)
obj.Number = this->Number + a;
else
throw "number can not be added with string or bool";
obj.Type = 1;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let operator+(int a,const let b){
let obj;
try{
if(b.Type == 1)
obj.Number = b.Number + (double)a;
else
throw "number can not be added with string or bool";
obj.Type = 1;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let operator+(double a,const let b){
let obj;
try{
if(b.Type == 1)
obj.Number = b.Number + a;
else
throw "number can not be added with string or bool";
obj.Type = 1;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let let::operator+(let a){
let obj;
try{
if(this->Type != a.Type && this->Type != 3 && a.Type != 3)
throw "Type incompatible error: Addition not supported";

obj.Number = this->Number + a.Number;
obj.String = this->String + a.String;
obj.Bool = (this->Bool + a.Bool) == 0?0:1;
obj.Type = this->Type;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let let::operator+(const char* a){
let obj;
try{
if(this->Type == 2)
obj.String = this->String + a;
else
throw "number can not be added with number or bool";
obj.Type = 2;
}catch(const char* e){
    cout<<e;
}
return obj;
}

let operator+(const char* a,const let b){
let obj;
try{
if(b.Type == 2)
obj.String = b.String + a;
else
throw "number can not be added with string or bool";
obj.Type = 2;
}catch(const char* e){
    cout<<e;
}
return obj;
}