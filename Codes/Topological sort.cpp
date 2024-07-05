#include<iostream>
#include <list>
#include <stack>
using namespace std;
class grph {
   int ver;
   list<int> *a;
   void Topo_Sort(int x, bool vstd[], stack<int> &Stack);
   public:
      grph(int ver);
   void Insert_Edge(int x, int y);
   void Topol_Sort();
};
grph::grph(int ver) {
   this->ver = ver;
   a = new list<int>[ver];
}
void grph::Insert_Edge(int x, int y) {
   a[x].push_back(y);
}
void grph::Topo_Sort(int x, bool vstd[], stack<int> &Stack) {
   vstd[x] = true;
   list<int>::iterator i;
   for (i = a[x].begin(); i != a[x].end(); ++i)
      if (!vstd[*i])
         Topo_Sort(*i, vstd, Stack);
   Stack.push(x);
}
void grph::Topol_Sort() {
   stack<int> Stack;
   bool *vstd = new bool[ver];
   for (int i = 0; i < ver; i++)
      vstd[i] = false;
   for (int i = 0; i < ver; i++)
      if (vstd[i] == false)
         Topo_Sort(i, vstd, Stack);
   while (Stack.empty() == false) {
      cout << Stack.top() << " ";
      Stack.pop();
   }
}
int main() {
   grph g(6);
   g.Insert_Edge(5, 2);
   g.Insert_Edge(5, 0);
   g.Insert_Edge(4, 0);
   g.Insert_Edge(4, 1);
   g.Insert_Edge(2, 3);
   g.Insert_Edge(3, 1);
   cout << "Topological Sort of the graph is: \n";
   g.Topol_Sort();
   return 0;
}
