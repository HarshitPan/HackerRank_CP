# HackerRank_CP

# if anybody knows how to ignore output files (without extension) in git using gitignore please let me know... I have tried with .o and .exe but its not working as codes made in linux and the output files are not in any extension...


This reposatory contains my solutions to all Hacker Rank Problem I have solved. 

-> Programming language used is Cpp.

Note -> Many of the codes will not provide an output directly (in the editors in your system ie. vscode, etc.) caz the codes uses file handling. To see the output print the elements in the function created
    by me just above return statement or just before return 0; in main function...
    
    * if output is stored in an vector array, use this format...
    
    for(int i=0;i< <array_name> .size() ;i++)
    {
      cout<< <array_name> [i] <<" ";
    }
    
    -> if the array is not vector, then 
    int size = sizeof( <array_name> ) / sizeof( <array_name> [0] );
    for(int i=0;i<size;i++)
    {
      cout<< <array_name> [i] <<" ";
    }
    
    
    * if result is stored in a simple variable...
    
    cout<< <identifier_name> ;
    
    Note -> <xyz> here xyz is a variable name and it can be replaced with a new identifier of your choice.
      ** -> in main function the values are stored in result identifier... for a non-void returning function...
      
  -> if pasting the function in Hacker Rank Compiler, the previous steps are not required as it already takes input from file.
 
