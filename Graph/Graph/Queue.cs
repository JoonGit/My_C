//using System;
//using System.Collections.Generic;
//using System.Linq;
//using System.Text;
//using System.Threading.Tasks;

//namespace Graph
//{
//    internal class Queue<T>
//    {

//        class Node<T>
//        {
//            public T data;
//            public Node<T> next;

//            public Node(T data) { this.data = data; }
//        }

//        private Node<T> first;
//        private Node<T> last;

//        int count = 0;
//        public void EnQueqe(T value)
//        {
//            Node<T> node = new Node<T>(value);

//            // 비어 있다면
//            if (last != null)
//            {
//                last.next = node;
//            }
//            last = node;

//            if (first == null)
//            {
//                first = last;
//            }
//            count++;
//        }

//        public T DeQueqe()
//        {
//            // 노드가 비어 있을때
//            if (first == null) { return default(T); }

//            // 빼야할 노드
//            T data = first.data;
//            first = first.next;

//            if (first == null)
//            {
//                last = null;
//            }
//            return data;
//        }

//        public bool isEmpty()
//        {
//            return first == null;
//        }


//        public T Peck()
//        {
//            if (first == null) { return default(T); }
//            return first.data;
//        }
//    }
//}

