/*
overload function:

int example(){}
int example(int a){}
int example(int a, int b){}
double example(double a, double b){}

no crea conflicto, porque dependiendo de la entrada entrara en una funcion u otra

Templates (6.18/14.4):

template<typename T>	//sin punt i coma!!!!
T sum(T a, T b) 	//ahora la funcion sum acepta cualquier tipo que se le passe
{
return a+b;
}

sum<int>(4,7); 	//tambien se acepta sum(4,7);

template<class T> y template<typename T>  SON EQUIVALENTES


los templates pueden tener los argumentos que quieras:
template<typename T, typename U...>

tambien acepta otros parametros que no sean templates:
template<typename T, size_t L>
class MyArray{
T arr[L];
public:
MyArray(){...}
};

follada mental:
template<typename T, template<typename U, int I> class Arr>
class Myclass2{
T t;		//ok
arr<T, 10> a;
U u;		//Error, U is not defined in this scope
};			//creas de manera generica un atributo de la clase arr


*/