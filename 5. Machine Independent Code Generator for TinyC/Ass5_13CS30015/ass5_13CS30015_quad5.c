assiging M now2
assiging M now2
assiging M now3
assiging M now3
assiging M now5
assiging M now8
assiging M now11
assiging M now16
assiging M now18
assiging M now21
assiging M now24
assiging M now32
assiging M now40
assiging M now46
assiging M now53
assiging M now57
assiging M now59
assiging M now61
assiging M now63
ST (global):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
     Cycle		func		 NULL 	    0	    0	    global	          ST (Cycle)	
      main		func		 NULL 	    0	    0	    global	           ST (main)	

ST (Cycle):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		void		 NULL 	    0	    0	    return	           NULL	
         a		ptr(int)		 NULL 	    4	    0	     param	           NULL	
         b		ptr(int)		 NULL 	    4	    4	     param	           NULL	
         c		ptr(int)		 NULL 	    4	    8	     param	           NULL	
      temp		int		 NULL 	    4	   12	     local	           NULL	
      t025		int		 NULL 	    4	   16	      temp	           NULL	
      t026		int		 NULL 	    4	   20	      temp	           NULL	
      t027		int		 NULL 	    4	   24	      temp	           NULL	

ST (main):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         i		int		 NULL 	    4	    4	     local	           NULL	
         n		int		 NULL 	    4	    8	     local	           NULL	
         a		int		 NULL 	    4	   12	     local	           NULL	
         b		int		 NULL 	    4	   16	     local	           NULL	
         c		int		 NULL 	    4	   20	     local	           NULL	
       arr		array(100, double)		 NULL 	  800	   24	     local	           NULL	
      t000		int		  100	    4	  824	      temp	           NULL	
         k		int		 NULL 	    4	  828	     local	           NULL	
      t001		int		    0	    4	  832	      temp	           NULL	
      t002		int		 NULL 	    4	  836	      temp	           NULL	
      t003		int		 NULL 	    4	  840	      temp	           NULL	
      t004		double		 NULL 	    8	  844	      temp	           NULL	
      t005		int		 NULL 	    4	  852	      temp	           NULL	
      t006		int		    1	    4	  856	      temp	           NULL	
      t007		int		 NULL 	    4	  860	      temp	           NULL	
      t008		int		    0	    4	  864	      temp	           NULL	
      t009		int		 NULL 	    4	  868	      temp	           NULL	
      t010		double		 NULL 	    8	  872	      temp	           NULL	
      t011		int		 NULL 	    4	  880	      temp	           NULL	
      t012		double		 NULL 	    8	  884	      temp	           NULL	
      t013		int		    0	    4	  892	      temp	           NULL	
      t014		int		 NULL 	    4	  896	      temp	           NULL	
      t015		int		 NULL 	    4	  900	      temp	           NULL	
      t016		double		 NULL 	    8	  904	      temp	           NULL	
      t017		int		   20	    4	  912	      temp	           NULL	
      t018		int		   10	    4	  916	      temp	           NULL	
      t019		int		   21	    4	  920	      temp	           NULL	
      t020		ptr(int)		 NULL 	    4	  924	      temp	           NULL	
      t021		ptr(int)		 NULL 	    4	  928	      temp	           NULL	
      t022		ptr(int)		 NULL 	    4	  932	      temp	           NULL	
      t023		void		 NULL 	    0	  936	      temp	           NULL	
      t024		int		    0	    4	  936	      temp	           NULL	

  0. Cycle Starts
  1. main Starts
  2. t000 = 100
  3. t001 = 0
  4. i = t001
  5. if (i < n) goto 11
  6. goto 16
  7. goto 16
  8. t002 = i
  9. i = i + 1
 10. goto 5
 11. t003 = i * 8
 12. t004 = arr[t003]
 13. t005 = dbl2int(t004)
 14. k = t005
 15. goto 8
 16. t006 = 1
 17. i = t006
 18. if (i < n) goto 24
 19. goto 40
 20. goto 40
 21. t007 = i
 22. i = i + 1
 23. goto 18
 24. t008 = 0
 25. t009 = t008 * 8
 26. t010 = arr[t009]
 27. t011 = i * 8
 28. t012 = arr[t011]
 29. if (t010 < t012) goto 32
 30. goto 21
 31. goto 39
 32. t013 = 0
 33. t014 = t013 * 8
 34. t015 = i * 8
 35. t016 = arr[t015]
 36. arr[t014] = t016
 37. goto 21
 38. goto 21
 39. goto 21
 40. t017 = 20
 41. a = t017
 42. t018 = 10
 43. b = t018
 44. t019 = 21
 45. c = t019
 46. t020 = & a
 47. t021 = & b
 48. t022 = & c
 49. param t022
 50. param t021
 51. param t020
 52. t023 = call Cycle, 3
 53. t024 = 0
 54. return t024
 55. main Ends
 56. Cycle Starts
 57. t025 = * b
 58. temp = t025
 59. t026 = * a
 60. * b = t026
 61. t027 = * c
 62. * a = t027
 63. * c = temp
 64. Cycle Ends
