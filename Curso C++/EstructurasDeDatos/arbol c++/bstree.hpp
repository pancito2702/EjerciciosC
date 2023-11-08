//
//  bstree.h
//

#ifndef bstree_h
#define bstree_h

#include <iostream>

// Nodos del arbol:
template <typename T>
class bstnode
{
public:
  // Esta clase es usada por otras clases. Para mayor eficiencia, los atributos se hacen publicos.
  T key;
  bstnode<T> *p, *left, *right;
  
  // Constructor por omision
  bstnode() {
  };
  
  // Inicializacion de datos miembro
  bstnode(const T& k, bstnode<T> *w = nullptr, bstnode<T> *y = nullptr, bstnode<T> *z = nullptr):key(k), p(w), left(y), right(z) {};
  
  ~bstnode() {
  };
};

// Arbol de busqueda binario:
template <typename T>
class bstree
{
public:
  bstnode<T> *root;    // raiz del arbol

  bstree() {
    this->root = nullptr;
    // Constructor (crea un arbol vacio)
  };
  
  ~bstree() {
    bstnode<T> *aux = this->root;
    while (aux != nullptr) {
      Delete(aux);
      aux = this->root;
    }
    // Destructor (borra el arbol)
  };
  
  void Insert(bstnode<T>* z) {
    bstnode<T> *aux = this->root;
    bstnode<T> *tmp = nullptr;
    while (aux != nullptr) {
      tmp = aux;
      if (z->key < aux->key) {
        aux = aux->left;
      } else {
        aux = aux->right;
      }
    }
    if (tmp == nullptr) {
      this->root = z;
      return;
    }
    if (z->key < tmp->key) {
      tmp->left = z;
      z->p = tmp;
    } else {
      tmp->right = z;
      z->p = tmp;
    }
    // Inserta el nodo z en la posicion que le corresponde en el arbol.
  };
  
  void InorderWalk(bstnode<T> *x) {
    if (x != nullptr && this->root != nullptr) {
      InorderWalk(x->left);
      std::cout << x->key << std::endl;
      InorderWalk(x->right);
    }
    // Recorre en orden el sub�arbol con raiz x, imprimiendo la llave de cada nodo en en una nueva linea de la salida estandar despues de recorrido el subarbol izquierdo y antes de recorrer el subarbol derecho.
  };
  
  bstnode<T>* Search(bstnode<T> *x, const T& k) {
    bstnode<T> *aux = x;
    if (aux == nullptr) {
      return nullptr;
    }
    if (aux->key == k) {
      return aux;
    }
    if (k < aux->key) {
      return Search(aux->left, k);
    } else if (k > aux->key) {
      return Search(aux->right, k);
    }
    return nullptr;
    // Busca la llave k recursivamente en el subarbol con raiz x. Si la encuentra devuelve un apuntador al nodo que la contiene, sino devuelve nullptr.
  };
  
  bstnode<T>* IterativeSearch(bstnode<T> *x, const T& k) {
    bstnode<T> *aux = x;
    while (aux != nullptr) {
      if (aux->key == k) {
        return aux;
      }
      if (k < aux->key) {
        aux = aux->left;
      } else if (k > aux->key) {
        aux = aux->right;
      }
    }
    return nullptr;
    // Busca la llave k iterativamente en el subarbol con raiz x. Si la encuentra devuelve un apuntador al nodo que la contiene, sino devuelve nullptr.
  };
  
  bstnode<T>* Minimum(bstnode<T> *x) {
    if (x != nullptr) {
      bstnode<T> *aux = x;
      while (aux->left != nullptr) {
        aux = aux->left;
      }
      return aux;
    } else {
      return nullptr;
    }
    // Devuelve el nodo que tiene la llave menor. Si el arbol esta� vacio, devuelve nullptr.
  };
  
  bstnode<T>* Maximum(bstnode<T> *x) {
    if (this->root != nullptr) {
      bstnode<T> *aux = x;
      while (aux->right != nullptr) {
        aux = aux->right;
      }
      return aux;
    } else {
      return nullptr;
    }
    // Devuelve el nodo que tiene la llave mayor. Si el arbol esta vacio devuelve nullptr.
  };
  
  bstnode<T>* Successor(bstnode<T> *x) {
    bstnode<T> *aux = x;
    if (x != nullptr) {
      if (aux->right != nullptr) {
        return Minimum(aux->right);
      } else {
        while (aux->p != nullptr && aux->p->right == aux) {
          aux = aux->p;
        }        
        return aux->p;
      }
    } else {
      return nullptr;
    }
    // Devuelve el nodo cuya llave es la que le sigue a la del nodo x. Si no existe el nodo, devuelve nullptr.
  };
  
  void Delete(bstnode<T>* z) {
    bstnode<T> *aux = IterativeSearch(z, z->key);
    if (aux != nullptr) {
      // caso 0 no tiene hijos
      if (aux->left == nullptr && aux->right == nullptr) {      
        if (aux == this->root) {
          delete(aux);
          this->root = nullptr;
          return;
        }
        if (aux->p->left == aux) {
          aux->p->left = nullptr;
          delete(aux);
          return;
        } else if (aux->p->right == aux) {
          aux->p->right = nullptr;
          delete(aux);
          return;
        }        
      // caso 1 tiene hijo derecho pero no izquiero
      } 
      if (aux->left == nullptr && aux->right != nullptr) {
        if (aux->p != nullptr) {
          if (aux->p->left == aux) {
            aux->p->left = aux->right;
            aux->right->p = aux->p;
            delete(aux);
            return;
          } else {
            aux->p->right = aux->right;
            aux->right->p = aux->p;
            delete(aux);
            return;
          }
        } else {
          this->root = this->root->right;
          delete(this->root->p);
          this->root->p = nullptr;
          return;
        }
      // caso 1 tiene hijo izquiero pero no derecho
      }  
      if (aux->right == nullptr && aux->left != nullptr) {
        if (aux->p != nullptr) {
          if (aux->p->left == aux) {
            aux->p->left = aux->left;
            aux->left->p = aux->p;
            delete(aux);
            return;
          } else {
            aux->p->right = aux->left;
            aux->left->p = aux->p;
            delete(aux);
            return;
          }
        } else {
          this->root = this->root->left;
          delete(this->root->p);
          this->root->p = nullptr;
          return;
        }
      // caso 2 tiene dos hijos
      } 
      if (z->right != nullptr && z->left != nullptr) {
        bstnode<T> *s = Successor(z);
        if (s != nullptr) {
          z->key = s->key;
          if (s->right == nullptr) {
            if (s->p->right == s) {   
              s->p->right = nullptr;
              delete(s);
              return;
            } else {
              s->p->left = nullptr;
              delete(s);
              return;
            }
          }
          if (s->right != nullptr) {
            if (s->p->right == s) {           
              s->p->right = s->right;
              s->right->p = s->p;
              delete(s);
              return;
            } else if (s->p->left == s){
              s->p->left = s->right;
              s->right->p = s->p;
              delete(s);
              return;
            }
          }
        }
      }
    }
    // Saca del arbol la llave contenida en el nodo apuntado por z.
  };

  void sequentialTree() {
    this->root = new bstnode<T>(0);
    int cont = 1;
    bstnode<T> *aux = this->root;
    while (cont < 1000000) {
      bstnode<T> *new_node = new bstnode<T>(cont);
      aux->right = new_node;
      new_node->p = aux;
      aux = aux->right;
      cont++;
    }
    // Crea un arbol secuencial   
  } 
};

#endif /* bstree_h */
