bool let::operator||(int a){
    if(a != 0)
    return true;
    return helper(this);
}

bool let::operator||(double a){
    if(a != 0.0)
    return true;
    return helper(this);
}

bool let::operator||(bool a){
    if(a)
    return true;
    return helper(this);
}
    
bool let::operator||(const char* a){
    if(a != "")
    return true;
    return helper(this);
}

bool operator||(int a,let b){
    if(a != 0)
    return true;
    return helper(&b);
}
    
bool operator||(double a,let b){
    if(a != 0.0)
    return true;
    return helper(&b);

}
    
bool operator||(bool a,let b){
    if(a == true)
    return true;
    return helper(&b);

}

bool operator||(const char* a,let b){
    if(a != "")
    return true;    
    return helper(&b);

}

bool let::operator||(let a){
switch (this->Type){
    case 0: return this->Bool == true?true:helper(&a);
    case 1: return this->Number != 0.0?true:helper(&a);
    case 2: return this->String != ""?true:helper(&a);
    default : return helper(&a);
}
} 