class Program
{
    int a;

    Program(int a)
    {
        this.a = a;
        System.Console.WriteLine("コンストラクタ");
    }

    void hello()
    {
        System.Console.WriteLine("Hello関数");
    }

    int getA()
    {
        return this.a;
    }

    static void Main(string[] args)
    {
        Program p = new Program(100);
        p.hello();
        System.Console.WriteLine(p.getA());
    }
}
