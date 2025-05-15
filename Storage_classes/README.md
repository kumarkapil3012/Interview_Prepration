S.No.      	Storage Class Name	    Storage	              Initial value   	   Scope of the variable    	       Life of the variable
1	              auto	                Stack Section          Garbage	          Within function/Block	    Within function / Block
2	            register       CPU Registers / Stack Section	 Garbage	          Within function/Block	    Within function / Block
3	          local static	            Data Section	           0	              Within function/Block	     Till program exists
           global static	            Data Section	           0	              Within a file only	       Till program exists
4	           extern	                  Data Section           	 0               	Throughout a program	      Till program exists

- Cannot declare static member as a structure variable
- Structure variables can be declared as static
- Functions can be declared as static
- Its possible to declare const  variable within a structure but needs to be initialized as soon as you declare variable for the structure.
