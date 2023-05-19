using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics.Eventing.Reader;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace test
{
    internal class Program
    {

        static int[] tree = new int[64];
        static void Print()
        {
            int treeSize = tree.Length;
            int height = 6;
            int nodesInLevel = 1;

            for (int level = 0, index = 1; level <= height; level++)
            {
                int spacing = (int)Math.Pow(2, height - level) - 1;

                PrintSpaces(spacing);

                for (int i = 0; i < nodesInLevel && index < treeSize; i++, index++)
                {
                    Console.Write(tree[index]);

                    PrintSpaces(spacing);
                    PrintSpaces(spacing);
                }

                Console.WriteLine();
                Console.WriteLine();

                nodesInLevel *= 2;
            }
        }

        static void PrintSpaces(int count)
        {
            for (int i = 0; i < count; i++)
            {
                Console.Write(" ");
            }
        }

        static void AddNode(int data)
        {
            int index = 1;

            while (tree[index] != 0 )
            {
                // 왼쪽
                if (tree[index] > data)
                {
                    index = index * 2;
                }
                else
                {
                    index = (index * 2) + 1;
                }
            }
            tree[index] = data;
        }

        static void DelNode(int delData)
        {
            int findDataIndex = Find(delData);

            //int index = index * 2;
            int leftIndex = findDataIndex * 2;

            if (tree[leftIndex] != 0)
            {
                while (tree[leftIndex] != 0)
                {
                    // 왼쪽
                    if (tree[leftIndex] > data)
                    {
                        leftIndex = leftIndex * 2;
                    }
                    else
                    {
                        leftIndex = (leftIndex * 2) + 1;
                    }
                }
            }           
        }
        static int Find(int findData)
        {
            int index = 1;
            int data = 0;

            while (tree[index] != findData)
            {
                // 왼쪽
                if (tree[index] > findData)
                {
                    index = index * 2;
                }
                else
                {
                    index = (index * 2) + 1;
                }
            }
            return index;
        }
        

        static void Main(string[] args)
        {

            AddNode(16);
            AddNode(3);
            AddNode(2);
            AddNode(1);
            AddNode(5);
            AddNode(4);            
            AddNode(6);
            AddNode(30);
            AddNode(20);
            AddNode(16);
            AddNode(14);
            AddNode(15);
            AddNode(21);
            AddNode(32);
            AddNode(31);
            AddNode(35);
            AddNode(36);

            Print();
        }
    }
}