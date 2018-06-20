#include<iostream>
int main(int argc, char *argv[]){
    std::cout << "Argument list of " << *argv << std::endl;
    for( **argv = 1; **argv < argc ; (**argv)++)   std::cout << "argv[" << (int)(**argv) << "]: " << *(argv + **argv) << std::endl; 
}

// showing argv values without declaring variables - by @lekonjak
