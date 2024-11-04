bool let::operator==(int a){
if(this->Type == 0)
return this->Bool == a;
if(this->Type == 1)
return this->Number == (double)a;
return false;
}

bool let::operator==(double a){
if(this->Type == 0)
return this->Bool == a;
if(this->Type == 1)
return this->Number == a;
return false;
}

bool let::operator==(bool a){
if(this->Type == 0)
return this->Bool == a;
if(this->Type == 1)
return this->Type == (double)a;
return false;
}

bool let::operator==(const char* a){
if(this->Type == 2)
return a == this->String;
return false;
}

bool operator==(int a,const let b){
if(b.Type == 0)
return b.Bool == a;
if(b.Type == 1)
return b.Number == (double)a;
return false;
}

bool operator==(double a,const let b){
if(b.Type == 0)
return b.Bool == a;
if(b.Type == 1)
return b.Number == a;
return false;
}

bool operator==(bool a, const let b){
if(b.Type == 0)
return b.Bool == a;
if(b.Type == 1)
return b.Type == (double)a;
return false;
}
bool operator==(const char* a, const let b){
if(b.Type == 2)
return a == b.String;
return false;
}

bool let::operator==(let a){
if(this->Type != a.Type)
return false;
if(this->Type == 0)
return this->Bool == a.Bool;
if(this->Type == 1)
return this->Number == a.Number;
if(this->Type == 2)
return this->String == a.String;
return false;
}