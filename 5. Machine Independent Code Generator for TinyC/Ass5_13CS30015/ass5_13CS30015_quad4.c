assiging M now3
assiging M now13
assiging M now13
assiging M now17
assiging M now19
assiging M now23
assiging M now26
assiging M now28
assiging M now32
assiging M now35
assiging M now39
assiging M now45
assiging M now46
assiging M now48
assiging M now52
assiging M now55
assiging M now57
assiging M now61
assiging M now64
assiging M now68
assiging M now74
assiging M now75
assiging M now77
assiging M now81
assiging M now84
assiging M now86
assiging M now90
assiging M now93
assiging M now97
assiging M now99
ST (global):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
useDoublePointer		func		 NULL 	    0	    0	    global	ST (useDoublePointer)	
      main		func		 NULL 	    0	    0	    global	           ST (main)	

ST (useDoublePointer):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		void		 NULL 	    0	    0	    return	           NULL	
         n		int		 NULL 	    4	    0	     param	           NULL	
         l		ptr(int)		 NULL 	    4	    4	     local	           NULL	
      t000		ptr(int)		 NULL 	    4	    8	      temp	           NULL	
       lol		ptr(ptr(int))		 NULL 	    4	   12	     local	           NULL	
      t001		ptr(ptr(int))		 NULL 	    4	   16	      temp	           NULL	

ST (main):
Name	Type		Init Val	Size	Offset	Scope	Nested Table
  __retVal		int		 NULL 	    4	    0	    return	           NULL	
         a		array(2, array(2, double))		 NULL 	   32	    4	     local	           NULL	
      t002		int		    2	    4	   36	      temp	           NULL	
      t003		int		    2	    4	   40	      temp	           NULL	
         b		array(2, array(2, double))		 NULL 	   32	   44	     local	           NULL	
      t004		int		    2	    4	   76	      temp	           NULL	
      t005		int		    2	    4	   80	      temp	           NULL	
         c		array(2, array(2, double))		 NULL 	   32	   84	     local	           NULL	
      t006		int		    2	    4	  116	      temp	           NULL	
      t007		int		    2	    4	  120	      temp	           NULL	
         i		int		 NULL 	    4	  124	     local	           NULL	
         j		int		 NULL 	    4	  128	     local	           NULL	
      max1		int		    0	    4	  132	     local	           NULL	
      t008		int		    0	    4	  136	      temp	           NULL	
      min1		int		    0	    4	  140	     local	           NULL	
      t009		int		    0	    4	  144	      temp	           NULL	
      t010		int		    0	    4	  148	      temp	           NULL	
      t011		int		    2	    4	  152	      temp	           NULL	
      t012		int		 NULL 	    4	  156	      temp	           NULL	
      t013		int		    0	    4	  160	      temp	           NULL	
      t014		int		    2	    4	  164	      temp	           NULL	
      t015		int		 NULL 	    4	  168	      temp	           NULL	
      t016		int		 NULL 	    4	  172	      temp	           NULL	
      t017		int		 NULL 	    4	  176	      temp	           NULL	
         l		int		    0	    4	  180	     local	           NULL	
      t018		int		    0	    4	  184	      temp	           NULL	
      t019		int		    2	    4	  188	      temp	           NULL	
      t020		int		 NULL 	    4	  192	      temp	           NULL	
      t021		int		    0	    4	  196	      temp	           NULL	
      t022		int		    2	    4	  200	      temp	           NULL	
      t023		int		 NULL 	    4	  204	      temp	           NULL	
      t024		int		 NULL 	    4	  208	      temp	           NULL	
      t025		int		 NULL 	    4	  212	      temp	           NULL	
         m		int		    0	    4	  216	     local	           NULL	
      t026		int		    0	    4	  220	      temp	           NULL	
      t027		int		    2	    4	  224	      temp	           NULL	
      t028		int		 NULL 	    4	  228	      temp	           NULL	
      t029		int		    0	    4	  232	      temp	           NULL	
      t030		int		    2	    4	  236	      temp	           NULL	
      t031		int		 NULL 	    4	  240	      temp	           NULL	
         n		int		 NULL 	    4	  244	     local	           NULL	
      t032		int		 NULL 	    4	  248	      temp	           NULL	
      t033		void		 NULL 	    0	  252	      temp	           NULL	
      t034		int		    0	    4	  252	      temp	           NULL	

  0. useDoublePointer Starts
  1. t000 = & n
  2. l = t000
  3. t001 = & l
  4. lol = t001
  5. useDoublePointer Ends
  6. main Starts
  7. t002 = 2
  8. t003 = 2
  9. t004 = 2
 10. t005 = 2
 11. t006 = 2
 12. t007 = 2
 13. t008 = 0
 14. max1 = t008
 15. t009 = 0
 16. min1 = t009
 17. t010 = 0
 18. i = t010
 19. t011 = 2
 20. if (i < t011) goto 26
 21. goto 45
 22. goto 45
 23. i = i + 1
 24. t012 = i
 25. goto 19
 26. t013 = 0
 27. j = t013
 28. t014 = 2
 29. if (j < t014) goto 35
 30. goto 23
 31. goto 44
 32. j = j + 1
 33. t015 = j
 34. goto 28
 35. t016 = i + j
 36. if (t016 > max1) goto 39
 37. goto 32
 38. goto 43
 39. t017 = i + j
 40. max1 = t017
 41. goto 32
 42. goto 32
 43. goto 32
 44. goto 23
 45. l = max1
 46. t018 = 0
 47. i = t018
 48. t019 = 2
 49. if (i < t019) goto 55
 50. goto 74
 51. goto 74
 52. i = i + 1
 53. t020 = i
 54. goto 48
 55. t021 = 0
 56. j = t021
 57. t022 = 2
 58. if (j < t022) goto 64
 59. goto 52
 60. goto 73
 61. j = j + 1
 62. t023 = j
 63. goto 57
 64. t024 = i + j
 65. if (t024 < min1) goto 68
 66. goto 61
 67. goto 72
 68. t025 = i + j
 69. min1 = t025
 70. goto 61
 71. goto 61
 72. goto 61
 73. goto 52
 74. m = min1
 75. t026 = 0
 76. i = t026
 77. t027 = 2
 78. if (i < t027) goto 84
 79. goto 97
 80. goto 97
 81. i = i + 1
 82. t028 = i
 83. goto 77
 84. t029 = 0
 85. j = t029
 86. t030 = 2
 87. if (j < t030) goto 93
 88. goto 81
 89. goto 96
 90. j = j + 1
 91. t031 = j
 92. goto 86
 93. t032 = l + min1
 94. n = t032
 95. goto 90
 96. goto 81
 97. param n
 98. t033 = call useDoublePointer, 1
 99. t034 = 0
100. return t034
101. main Ends
