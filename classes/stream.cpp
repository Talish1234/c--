class Stream{
public:
   //write
   void log();

   void log(char a);
   
   void log(int a);

   void log(double a);

   void log(float a);

   void log(bool a);

   void log(const char* a);

   void log(string& s);
   
   void log(let& a);
   
   template <typename T, typename... Args>
    void log(T first, Args... args);
   
   //read
   let readline();
   let readline(const char* a);
   let readNumber();
   let readNumber(const char* a);
}console;
