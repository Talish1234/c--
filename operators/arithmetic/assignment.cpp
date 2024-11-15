let& let::operator=(bool a){
    this->Type = 0;
    this->Bool = a;
    return *this;
    }

let& let::operator=(int a){
    this->Type = 1;
    this->Number = (double) a;
    return *this;
    }


let& let::operator=(double a){
    this->Type = 1;
    this->Number = a;
    return *this;
    }

let& let::operator=(const char* a){
    this->Type = 2;
    this->String = a;
    return *this;
    }

let& let::operator=(let a){
    this->Type = a.Type;
    switch (a.Type){
    case 0: this->Bool = a.Bool;break;
    case 1:this->Number = a.Number;break;
    case 2:this->String = a.String;break;
    case 3:this->Array = a.Array;
    }
    return *this;
}

let& let::operator=(initializer_list<let> a){
this->Type = 3;
this->Array = a;
return *this;
}

let& let::operator=(vector<let> a){
this->Type = 3;
this->Array = a;
return *this;
}