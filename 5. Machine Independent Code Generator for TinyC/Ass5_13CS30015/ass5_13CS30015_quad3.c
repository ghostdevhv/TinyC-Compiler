assiging M now3
assiging M now5
assiging M now9
assiging M now12
assiging M now15
assiging M now17
assiging M now21
assiging M now24
assiging M now27
assiging M now27
assiging M now31
assiging M now33
assiging M now36
assiging M now38
assiging M now40
assiging M now43
assiging M now46
assiging M now48
assiging M now50
assiging M now52
assiging M now53
ST (global):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
      main		func		 NULL 	    0	    0	    global	           ST (main)	

ST (main):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         k		int		   20	    4	    4	     local	           NULL	
      t000		int		   20	    4	    8	      temp	           NULL	
      t001		int		   20	    4	   12	      temp	           NULL	
      t002		int		   40	    4	   16	      temp	           NULL	
      t003		int		 NULL 	    4	   20	      temp	           NULL	
      huha		int		    1	    4	   24	     local	           NULL	
      t004		int		    1	    4	   28	      temp	           NULL	
      t005		int		   40	    4	   32	      temp	           NULL	
      t006		int		   20	    4	   36	      temp	           NULL	
      t007		int		 NULL 	    4	   40	      temp	           NULL	
    huihui		int		    0	    4	   44	     local	           NULL	
      t008		int		    0	    4	   48	      temp	           NULL	
      t009		int		   30	    4	   52	      temp	           NULL	
    kalyan		int		    1	    4	   56	     local	           NULL	
      t010		int		    1	    4	   60	      temp	           NULL	
      t011		int		 NULL 	    4	   64	      temp	           NULL	
        ra		int		   10	    4	   68	     local	           NULL	
      t012		int		   10	    4	   72	      temp	           NULL	
        ba		int		   80	    4	   76	     local	           NULL	
      t013		int		   80	    4	   80	      temp	           NULL	
      t014		int		 NULL 	    4	   84	      temp	           NULL	
      t015		int		 NULL 	    4	   88	      temp	           NULL	
      t016		int		 NULL 	    4	   92	      temp	           NULL	
      t017		int		 NULL 	    4	   96	      temp	           NULL	
      t018		int		 NULL 	    4	  100	      temp	           NULL	
      t019		int		 NULL 	    4	  104	      temp	           NULL	

  0. main Starts
  1. t000 = 20
  2. k = t000
  3. t001 = 20
  4. k = t001
  5. t002 = 40
  6. if (k <= t002) goto 12
  7. goto 15
  8. goto 15
  9. t003 = k
 10. k = k + 1
 11. goto 5
 12. t004 = 1
 13. huha = t004
 14. goto 9
 15. t005 = 40
 16. k = t005
 17. t006 = 20
 18. if (k >= t006) goto 24
 19. goto 27
 20. goto 27
 21. t007 = k
 22. k = k - 1
 23. goto 17
 24. t008 = 0
 25. huihui = t008
 26. goto 21
 27. t009 = 30
 28. if (k < t009) goto 31
 29. goto 36
 30. goto 36
 31. t010 = 1
 32. kalyan = t010
 33. t011 = k
 34. k = k - 1
 35. goto 27
 36. t012 = 10
 37. ra = t012
 38. t013 = 80
 39. ba = t013
 40. if (ra < ba) goto 43
 41. goto 46
 42. goto 55
 43. t014 = ra + ba
 44. ra = t014
 45. goto 55
 46. t015 = ra - ba
 47. ba = t015
 48. t016 = ra
 49. ra = ra - 1
 50. t017 = ba
 51. ba = ba + 1
 52. t018 = ra >> ba
 53. t019 = ba << ra
 54. goto 55
 55. main Ends
