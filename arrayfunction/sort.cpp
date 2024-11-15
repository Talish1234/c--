let let::sort(){
    int count = 0;
    vector<double> Num;
    vector<bool> Boolean;
    vector<string> Str;
    vector<let> Let;
    int index = 0;
    for(int i=0;i<this->Array.size();i++)
    switch (this->Array[i].Type){
    case 0:Boolean.push_back(this->Array[i].Bool);break;
    case 1:Num.push_back(this->Array[i].Number);break;
    case 2:Str.push_back(this->Array[i].String);break;
    case 3:Let.push_back(1); Let[index++] = this->Array[i].Array;break;
    default:count++;
    }
    let a = {};

    if(count != 0){
    for(int i=0;i<count;i++)
    a.push({});
    }

    if(Boolean.size() != 0){
    std::sort(Boolean.begin(),Boolean.end());
    for(int i=0;i<Boolean.size();i++){
    bool temp = Boolean[i];
    a.push(temp);
    }
    }

    if(Num.size() != 0){
    std::sort(Num.begin(),Num.end());
    for(int i=0;i<Num.size();i++){
    int temp = Num[i];
    a.push(temp);
    }
    }
    
    if(Str.size() != 0){
    std::sort(Str.begin(),Str.end());
    for(int i=0;i<Str.size();i++){
    string& temp = Str[i];
    a.push(temp);
    }
    }
    if(Let.size() != 0){
    std::sort(Let.begin(),Let.end());
    for(int i=0;i<Let.size();i++){
    let temp = Let[i].sort();
    a.push(temp);
    }
    }
    this->Array = a.Array;
    return *this;
    }
  