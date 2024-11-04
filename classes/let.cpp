class Stream;
class let{

    bool Bool;
    double Number;
    string String;
    int Type;
    vector<let> Array;
    public:
    let() : Type(-1), Bool(false),Number(0.0),String(""){}
    let(bool a) : Type(0), Bool(a),Number(0.0),String(""){}
    let(int a) : Type(1), Bool(false),Number(double(a)),String(""){}
    let(double a) : Type(1), Bool(false),Number(a),String(""){}
    let(const char* a) : Type(2), Bool(false),Number(0.0),String(a){}
    let(string& a) : Type(2), Bool(false),Number(0.0),String(a){}
    let(initializer_list<let> elements): Type(3), Bool(false),Number(0.0),String(""),Array(elements) {}
    //type
    friend string type(let a){
    switch (a.Type){
        case 0:return "Boolean";
        case 1:return "Number";
        case 2:return "String";
        case 3:return "Array";
        default:return "Null";
    }
    }
    //equal to operator
    let& operator=(bool a);
    let& operator=(int a);
    let& operator=(double a);
    let& operator=(const char* a);
    let& operator=(let a);
    let& operator=(initializer_list<let> a);
    let& operator=(vector<let> a);

    //addition operator
    let operator+(bool a);
    friend let operator+(bool a,const let b);

    let operator+(int a);
    let operator+(double a);
    friend let operator+(int a,const let b);
    friend let operator+(double a,const let b);
   
    let operator+(const char* a);
    friend let operator+(const char* a,const let b);

    let operator+(let a);
    
    //multiply operator

    let operator*(int a);
    let operator*(double a);
    friend let operator*(int a,const let b);
    friend let operator*(double a,const let b);
    let operator*(let a);
    
    //divide operator

    let operator/(int a);
    let operator/(double a);
    friend let operator/(int a,const let b);
    friend let operator/(double a,const let b);
    let operator/(let a);
    
    //substraction operator

    let operator-(int a);
    let operator-(double a);
    friend let operator-(int a,const let b);
    friend let operator-(double a,const let b);
    let operator-(let a);
    //modulus operator


    let operator%(int a);
    let operator%(double a);
    friend let operator%(int a,const let b);
    friend let operator%(double a,const let b);
    let operator%(let a);

    //equal to operator
    bool operator==(int a);
    bool operator==(double a);
    bool operator==(bool a);
    bool operator==(const char* a);

    friend bool operator==(int a,const let b);
    friend bool operator==(double a,const let b);
    friend bool operator==(bool a, const let b);
    friend bool operator==(const char* a, const let b);

    bool operator==(let a);
    
    //samller than

    bool operator<(int a);
    bool operator<(double a);
    bool operator<(bool a);
    bool operator<(const char* a);

    friend bool operator<(int a,const let b);
    friend bool operator<(double a,const let b);
    friend bool operator<(bool a, const let b);
    friend bool operator<(const char* a, const let b);

    bool operator<(let a);

    // smallerthanequalto

    bool operator<=(int a);
    bool operator<=(double a);
    bool operator<=(bool a);
    bool operator<=(const char* a);

    friend bool operator<=(int a,const let b);
    friend bool operator<=(double a,const let b);
    friend bool operator<=(bool a, const let b);
    friend bool operator<=(const char* a, const let b);

    bool operator<=(let a);

    //greaterthan

    bool operator>(int a);
    bool operator>(double a);
    bool operator>(bool a);
    bool operator>(const char* a);

    friend bool operator>(int a,const let b);
    friend bool operator>(double a,const let b);
    friend bool operator>(bool a, const let b);
    friend bool operator>(const char* a, const let b);

    bool operator>(let a);
    
    //greaterthanequalto

    bool operator>=(int a);
    bool operator>=(double a);
    bool operator>=(bool a);
    bool operator>=(const char* a);

    friend bool operator>=(int a,const let b);
    friend bool operator>=(double a,const let b);
    friend bool operator>=(bool a, const let b);
    friend bool operator>=(const char* a, const let b);

    bool operator>=(let a); 
    // not equalto

    bool operator!=(int a);
    bool operator!=(double a);
    bool operator!=(bool a);
    bool operator!=(const char* a);

    friend bool operator!=(int a,const let b);
    friend bool operator!=(double a,const let b);
    friend bool operator!=(bool a, const let b);
    friend bool operator!=(const char* a, const let b);

    bool operator!=(let a); 
    
    // post increment
    let operator++(int);

    // post decrement
    let operator--(int);

    // post increment
    let& operator++();

    // post decrement
    let& operator--();

    // logical and
    friend bool helper(let* a);
    bool operator&&(int a);
    bool operator&&(double a);
    bool operator&&(bool a);
    bool operator&&(const char* a);

    friend bool operator&&(int a,let b);
    friend bool operator&&(double a,let b);
    friend bool operator&&(bool a,let b);
    friend bool operator&&(const char* a,let b);

    bool operator&&(let a); 
    
    // logical or
    bool operator||(int a);
    bool operator||(double a);
    bool operator||(bool a);
    bool operator||(const char* a);

    friend bool operator||(int a,let b);
    friend bool operator||(double a,let b);
    friend bool operator||(bool a,let b);
    friend bool operator||(const char* a,let b);

    bool operator||(let a); 
    
    // logical not
    bool operator!();

    let& operator[](let index) {
        return Array[(int)index.Number];
    }
    
    // vector function
    void push(let a);
    void pop();
    void insert(let index,let value);
    void erase(let first);
    void erase(let first,let last);

    //useful function
    int size();
    void clear();
    bool empty();
    void resize(let a);
    int capacity();

    //Accessing

    let& front();
    let& back();
    let& at(let a);

    // str to Number to str

    friend let toNumber(let a);
    friend let toString(let a);

    // sort

    let sort2(){
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
    sort(Boolean.begin(),Boolean.end());
    for(int i=0;i<Boolean.size();i++){
    bool temp = Boolean[i];
    a.push(temp);
    }
    }

    if(Num.size() != 0){
    sort(Num.begin(),Num.end());
    for(int i=0;i<Num.size();i++){
    int temp = Num[i];
    a.push(temp);
    }
    }
    
    if(Str.size() != 0){
    sort(Str.begin(),Str.end());
    for(int i=0;i<Str.size();i++){
    string& temp = Str[i];
    a.push(temp);
    }
    }
    if(Let.size() != 0){
    sort(Let.begin(),Let.end());
    for(int i=0;i<Let.size();i++){
    let temp = Let[i].sort2();
    a.push(temp);
    }
    }
    this->Array = a.Array;
    return *this;
    }
    friend class Stream;
};