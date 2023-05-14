//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace Graph
//{
//    internal class Stack<T>
//    {
//        public class Node<T>
//        {
//            public T data;
//            public Node<T> next;

//            public Node(T data)
//            {
//                this.data = data;
//            }
//        }

//        private Node<T> Top;
//        int count = 0;

//        public void Push(T value)
//        {
//            Node<T> node = new Node<T>(value);

//            if (Top != null)
//            {
//                node.next = Top;
//            }
//            Top = node;
//            count++;
//        }

//        public T Pop()
//        {
//            if (isEmpty()) return default(T);

//            T popData = Top.data;
//            Top = Top.next;
//            count--;
//            return popData;
//        }

//        public bool isEmpty() { return Top == null; }

//        public T Peck()
//        {
//            if (isEmpty()) { return default(T); }
//            return Top.data;
//        }
//    }
//}
