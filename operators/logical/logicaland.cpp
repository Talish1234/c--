bool helper(let* a){
switch (a->Type){
        case 0:return a->Bool;
        case 1:return (a->Number == 0.0)?false:true;
        case 2:return (a->String == "")?false:true;
        default:return false;
    }
}
bool let::operator&&(int a){
    if(a == 0)
    return false;
    return helper(this);
}

bool let::operator&&(double a){
    if(a == 0.0)
    return false;
    return helper(this);
}

bool let::operator&&(bool a){
    if(a == false)
    return false;
    return helper(this);
}
    
bool let::operator&&(const char* a){
    if(a == "")
    return false;
    return helper(this);
}

bool operator&&(int a,let b){
    if(a == 0)
    return 0;
    return helper(&b);
}
    
bool operator&&(double a,let b){
    if(a == 0.0)
    return false;
    return helper(&b);

}
    
bool operator&&(bool a,let b){
    if(a == false)
    return false;
    return helper(&b);

}

bool operator&&(const char* a,let b){
    if(a == "")
    return false;    
    return helper(&b);

}

bool let::operator&&(let a){
switch (this->Type){
    case 0: return this->Bool == false?false:helper(&a);
    case 1: return this->Number == 0.0?false:helper(&a);
    case 2: return this->String == ""?false:helper(&a);
    default : return false;
}
} 