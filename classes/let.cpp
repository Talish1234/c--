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
        if(this->Type == 3)
        return Array[(int)index.Number];
    return *this;
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
    let sort();
    let reverse();

    //max min
    friend let max(let a,let b);
    friend let min(let a,let b);
    friend void swap(let&a, let& b);
    
    friend class Stream;
};