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
if(this->Type == a.Type){
switch (this->Type){
case 0:obj.Bool = (this->Bool + a.Bool) == 0?0:1;break;
case 1:obj.Number = this->Number + a.Number; break;
case 2:obj.String = this->String + a.String; break;
case 3:obj.Array = this->Array;
        for(int i=0;i<a.Array.size();i++)
        obj.Array.push_back(a.Array[i]);

}
obj.Type = this->Type;
}
else if(this->Type == 1 && a.Type == 2){
obj.String = to_string(this->Number) + a.String;
obj.Type = 2;
}
else if(this->Type == 2 && a.Type == 1){
obj.String = this->String + to_string(a.Number);
obj.Type = 2;
}
else
throw "Type incompatible error: Addition not supported";
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
else if(this->Type == 1)
obj.String = to_string(this->Number) + a;
else
throw "number can not be added with or bool";
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
obj.String = a + b.String;
else if(b.Type == 1)
obj.String = a + to_string(b.Number);
throw "number can not be added with string or bool";
obj.Type = 2;
}catch(const char* e){
    cout<<e;
}
return obj;
}