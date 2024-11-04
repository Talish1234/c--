void let::push(let a){
    if(this->Type == -1 || this->Type == 3){
        this->Type = 3;
        this->Array.push_back(a);
    }
}

void let::pop(){
    if(this->Type == 3 && this->Array.size() != 0)
        this->Array.pop_back();
}


void let::insert(let index,let value){
    if(this->Type == 3 && this->Array.size() > index.Number){
        this->Array.insert(this->Array.begin()+index.Number,value);
    }
}

void let::erase(let first){
    if(this->Type == 3)
        this->Array.erase(this->Array.begin()+first.Number);
}

void let::erase(let first,let last){
    if(this->Type == 3)
        this->Array.erase(this->Array.begin()+first.Number,this->Array.begin()+last.Number);
}