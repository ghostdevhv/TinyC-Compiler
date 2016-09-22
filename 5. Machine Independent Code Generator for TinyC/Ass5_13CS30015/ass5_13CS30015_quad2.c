assiging M now5
assiging M now8
assiging M now21
assiging M now24
assiging M now26
assiging M now28
assiging M now33
assiging M now36
assiging M now36
assiging M now40
assiging M now43
assiging M now47
ST (global):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
      fact		func		 NULL 	    0	    0	    global	           ST (fact)	
      mult		func		 NULL 	    0	    0	    global	           ST (mult)	
      main		func		 NULL 	    0	    0	    global	           ST (main)	

ST (fact):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         n		int		 NULL 	    4	    4	     param	           NULL	
      t000		int		    1	    4	    8	      temp	           NULL	
      t001		int		    1	    4	   12	      temp	           NULL	
      t002		int		    1	    4	   16	      temp	           NULL	
      t003		int		 NULL 	    4	   20	      temp	           NULL	
      t004		int		 NULL 	    4	   24	      temp	           NULL	
      t005		int		 NULL 	    4	   28	      temp	           NULL	

ST (mult):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         a		int		 NULL 	    4	    4	     param	           NULL	
         b		int		 NULL 	    4	    8	     param	           NULL	
   product		int		    0	    4	   12	     local	           NULL	
      t006		int		    0	    4	   16	      temp	           NULL	
         i		int		    0	    4	   20	     local	           NULL	
      t007		int		    0	    4	   24	      temp	           NULL	
      t008		int		 NULL 	    4	   28	      temp	           NULL	
      t009		int		 NULL 	    4	   32	      temp	           NULL	
      t010		int		 NULL 	    4	   36	      temp	           NULL	

ST (main):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
       num		int		 NULL 	    4	    4	     local	           NULL	
         f		int		 NULL 	    4	    8	     local	           NULL	
      prod		int		 NULL 	    4	   12	     local	           NULL	
         a		int		   10	    4	   16	     local	           NULL	
      t011		int		   10	    4	   20	      temp	           NULL	
         b		int		   12	    4	   24	     local	           NULL	
      t012		int		   12	    4	   28	      temp	           NULL	
      t013		int		 NULL 	    4	   32	      temp	           NULL	
      t014		int		 NULL 	    4	   36	      temp	           NULL	
      t015		int		    0	    4	   40	      temp	           NULL	

  0. fact Starts
  1. t000 = 1
  2. if (n == t000) goto 5
  3. goto 8
  4. goto 15
  5. t001 = 1
  6. return t001
  7. goto 15
  8. t002 = 1
  9. t003 = n - t002
 10. param t003
 11. t004 = call fact, 1
 12. t005 = n * t004
 13. return t005
 14. goto 15
 15. fact Ends
 16. mult Starts
 17. t006 = 0
 18. product = t006
 19. t007 = 0
 20. i = t007
 21. if (i < a) goto 24
 22. goto 33
 23. goto 33
 24. t008 = product + b
 25. product = t008
 26. t009 = i
 27. i = i + 1
 28. param b
 29. param a
 30. t010 = call mult, 2
 31. goto 33
 32. goto 33
 33. return product
 34. mult Ends
 35. main Starts
 36. t011 = 10
 37. a = t011
 38. t012 = 12
 39. b = t012
 40. param num
 41. t013 = call fact, 1
 42. f = t013
 43. param b
 44. param a
 45. t014 = call mult, 2
 46. prod = t014
 47. t015 = 0
 48. return t015
 49. main Ends
