using Graph;
using System;
using System.Configuration;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.ExceptionServices;
using System.Text;
using System.Threading.Tasks;


namespace Graph
{


    class Graph
    {
        class Node
        {
            public int data;
            public LinkedList<Node> adjacent;
            public Boolean marked;
            public Node (int data)
            {
                this.data = data + 1 ;
                this.marked = false;
                adjacent = new LinkedList<Node>();
            }
        }
        Node[] nodes;
        public Graph(int size)
        {
            nodes = new Node[size];
            for (int i = 0; i < size; i++)
            {
                nodes[i] = new Node(i);
            }
        }
        public void addEdge(int i1, int i2)
        {
            Node n1 = nodes[i1-1];
            Node n2 = nodes[i2-1];
            if (!n1.adjacent.Contains(n2))
            {
                n1.adjacent.AddLast(n2);
            }
            if (!n2.adjacent.Contains(n1))
            {
                n2.adjacent.AddLast(n1);
            }
        }
        public void dfs()
        {
            dfs(1);
        }

        public void dfs(int index)
        {
            Node root = nodes[index];
            Stack<Node> stack = new Stack<Node>();
            stack.Push(root);
            root.marked = true;
            try
            {
                while (stack.Peek() != null)
                {
                    Node r = stack.Pop();
                    foreach (Node n in r.adjacent)
                    {
                        if (n.marked == false)
                        {
                            n.marked = true;
                            stack.Push(n);
                        }
                    }
                    visit(r);
                }
            }
            catch (InvalidOperationException e)
            {
               
            }            
        }

        public void bfs()
        {
            bfs(0);
        }
        public void bfs(int index)
        {
            Node root = nodes[index];
            Queue<Node> queue = new Queue<Node>();
            queue.Enqueue(root);
            root.marked = true;
            while (queue.Peek() != null)
            {
                Node r = queue.Dequeue();
                foreach (Node n in r.adjacent)
                {
                    if (n.marked == false)
                    {
                        n.marked = true;
                        queue.Enqueue(n);
                    }
                }
                visit(r);
            }
        }
        void dfsR(Node r)
        {
            if (r == null) return;
            r.marked = true;
            visit(r);
            foreach (Node n in r.adjacent)
            {
                if(n.marked == false)
                {
                    dfsR(n);
                }
            }
        }

        public void dfsR(int index)
        {
            Node r = nodes[index];
            dfsR(r);
        }

        public void dfsR()
        {
            dfsR(0);
        }

        void visit(Node n)
        {
            Console.WriteLine(n.data + 1);
        }
    }
    internal class Program
    {
        static void Main(string[] args)
        {
            //6[[3, 6], [4, 3], [3, 2], [1, 3], [1, 2], [2, 4], [5, 2]]	3
            Graph g = new Graph(6);
            g.addEdge(3, 6);
            g.addEdge(4, 3);
            g.addEdge(3, 2);
            g.addEdge(1, 3);
            g.addEdge(1, 2);
            g.addEdge(2, 4);
            g.addEdge(5, 2);
            g.dfs();

        }
    }
}
