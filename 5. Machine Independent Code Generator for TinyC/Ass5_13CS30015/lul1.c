assiging M now2
ST (global):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
      main		func		 NULL 	    0	    0	    global	           ST (main)	

ST (main):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         c		array(5, int)		 NULL 	   20	    4	     local	           NULL	
      t000		int		    5	    4	   24	      temp	           NULL	
         a		int		 NULL 	    4	   28	     local	           NULL	
      t001		int		    5	    4	   32	      temp	           NULL	
      t002		int		 NULL 	    4	   36	      temp	           NULL	

  0. main Starts
  1. t000 = 5
  2. t001 = 5
  3. t002 = t001 * 4
  4. c[t002] = a
  5. main Ends
