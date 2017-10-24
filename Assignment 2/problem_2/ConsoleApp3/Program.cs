using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp3
{
    class Program
    {
        int start = 0;
        int end = 0;
        int n = 4;
        int sum = 0;
        int totalTime = 0;
        int i = 0;
        int j = 0;
        int k = 0;
        static void Main(string[] args)
        {
            //int sel = Convert.ToInt32(Console.ReadLine());
            Program p = new Program();
            /*for (int w = 0;w<5;w++)
            {
                switch (sel)
                {
                    case 1:
                        Console.WriteLine("{0}ms", p.Eq1());
                        sel = 0;
                        break;
                    case 2:
                        Console.WriteLine("{0}ms", p.Eq2());
                        sel = 0;
                        break;
                    case 3:
                        Console.WriteLine("{0}ms", p.Eq3());
                        sel = 0;
                        break;
                    case 4:
                        Console.WriteLine("{0}ms", p.Eq4());
                        sel = 0;
                        break;
                    case 5:
                        Console.WriteLine("{0}ms", p.Eq5());
                        sel = 0;
                        break;
                }
            }*/
            //Console.WriteLine("{0}ms", p.Eq1());
            //Console.WriteLine("{0}ms", p.Eq2());
            Console.WriteLine("{0}ms", p.Eq3());
            //Console.WriteLine("{0}ms", p.Eq4());
            //Console.WriteLine("{0}ms", p.Eq5());
            //Console.WriteLine("{0}ms", p.Eq6());
            Console.ReadKey();
        }
  
        public int Eq1()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 0; i < n; ++i)
            { 
                ++sum;
                Console.Write("");
            }
            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public int Eq2()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 0; i < n; ++i)
                for (j = 0; j < n; ++j)
                { 
                    ++sum;
                    Console.Write("");
                }

            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public int Eq3()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 0; i < n; ++i)
                for (j = 0; j < n * n; ++j)
                { 
                    ++sum;
                    Console.Write("");
                }
            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public int Eq4()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 0; i < n; ++i)
                for (j = 0; j < i; ++j)
                { 
                    ++sum;
                    Console.Write("");
                }
            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public int Eq5()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 0; i < n; ++i)
                for (j = 0; j < i * i; ++j)
                    for (k = 0; k < j; ++k) { 
                        ++sum;
                        Console.Write("");
                        }
            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public int Eq6()
        {
            start = System.DateTime.Now.Millisecond;
            n = 4;
            sum = 0;
            for (i = 1; i < n; ++i)
                for (j = 1; j < i * i; ++j)
                    if (j % i == 0)
                        for (k = 0; k < j; ++k) { 
                            ++sum;
                            Console.Write("");
                        }
            end = System.DateTime.Now.Millisecond;
            totalTime = end - start;
            return totalTime;
        }
        public void ResetAll()
        {
            start = 0;
            end = 0;
            n = 4;
            sum = 0;
            totalTime = 0;
            i = 0;
            j = 0;
            k = 0;
        }

    }
}
