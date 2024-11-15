let let::reverse(){
    int i = 0,j = this->Array.size()-1;
    while(i<j){
    let a = this->Array[i];
    this->Array[i++] = this->Array[j];
    this->Array[j--] = a;
    }
    return *this;
}
