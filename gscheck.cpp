#include <iostream>
#include <string>
#include "char_stack.h"

using namespace std;

int main()
{
    char_stack stack;
    char c[1000];
    int line = 1;
    int y;
    string statement;
    
    while ( cin.getline(c,250) )
    {
        int i = 0;
        
        while ( i < cin.gcount() )
        {
            if ( ( c[i] == '(' ) || ( c[i] == '{' ) || ( c[i] == '[' ) )
            {
                stack.push(c[i]);
            }
            
            else if ( ( c[i] == ')' ) || ( c[i] == '}' ) || ( c[i] == ']' ) )
            {
                if ( stack.empty() == 1 )
                {
                    cout << "Error on line " << line << ": Too many " << c[i] << endl;
                    
                    for ( y = 0; y <= i; y++)
                    {
                        cout << c[y];
                        if ( c[y] == '\t')
                        {
                            statement = statement + "        ";
                        }
                        else
                        {
                            statement = statement + " ";
                        }
                
                        
                    }
                    
                    cout << endl;
                    cout << statement;
                    
                    while ( i+1 < cin.gcount() )
                    {
                        cout << c[i+1];
                        i++;
                    }
                    
                    cout << endl;
                    
                    return 0;
                }
                else if ( (stack.top() == '(') && (c[i] != ')') )
                {
                    cout << "Error on line " << line << ": Read " << c[i] << ", expected )" << endl;
                    
                    for ( y = 0; y <= i; y++)
                    {
                        cout << c[y];
                        if ( c[y] == '\t')
                        {
                            statement = statement + "        ";
                        }
                        else
                        {
                            statement = statement + " ";
                        }
                
                        
                    }
                    
                    cout << endl;
                    cout << statement;
                    
                    while ( i+1 < cin.gcount() )
                    {
                        cout << c[i+1];
                        i++;
                    }
                    
                    cout << endl;
                    return 0;
                }

                else if ( (stack.top() == '{') && (c[i] != '}') )
                {
                    cout << "Error on line " << line << ": Read " << c[i] << ", expected }" << endl;
                    
                    for ( y = 0; y <= i; y++)
                    {
                        cout << c[y];
                        if ( c[y] == '\t')
                        {
                            statement = statement + "        ";
                        }
                        else
                        {
                            statement = statement + " ";
                        }
                
                        
                    }
                    
                    cout << endl;
                    cout << statement;
                    
                    while ( i+1 < cin.gcount() )
                    {
                        cout << c[i+1];
                        i++;
                    }
                    
                    cout << endl;
                
                    return 0;
                }
 
                else if ( (stack.top() == '[') && (c[i] != ']') )
                {
                    cout << "Error on line " << line << ": Read " << c[i] << ", expected ]" << endl;
                    
                    for ( y = 0; y <= i; y++)
                    {
                        cout << c[y];
                        if ( c[y] == '\t')
                        {
                            statement = statement + "        ";
                        }
                        else
                        {
                            statement = statement + " ";
                        }
                
                        
                    }
                    cout << endl;
                    cout << statement;
                    
                    while ( i+1 < cin.gcount() )
                    {
                        cout << c[i+1];
                        i++;
                    }
                    
                    cout << endl;
                   
                    return 0;
                }
                
                stack.pop();
            }
            
            i++;
        }
        
        line++;
        cin.peek();
    }
    
    if ( stack.empty() == 0 )
    {
        char x = stack.pop();
        cout << "Error at end of file: Too many " << x << endl;
        return 0;
    }
    
    cout << "No Errors Found" << endl;
    
}
