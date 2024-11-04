
    int let::size(){
        return this->Array.size();
    }
    void let::clear(){
        this->Array.clear();
    }
    bool let::empty(){
        return this->Array.empty();
    }
    void let::resize(let a){
        this->Array.resize(a.Number);
    }

    int let::capacity(){
        return this->Array.capacity();
    }