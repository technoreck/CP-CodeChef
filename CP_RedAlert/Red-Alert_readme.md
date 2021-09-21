<html>
  <body>
       <h1>The Red Alert Problem</h1> 
         
        Finally a monsoon has come. According to the Meteorological Department, there will be rain in the upcoming N days in the city.
        Initially, the water level of the city is zero millimetres. The amount of rain on the i-th day can be described by an integer Ai as follows:
  
       If Ai>0, the water level of the city increases by Ai millimetres on the i-th day.
  
       If Ai=0, there is no rain on the i-th day. The water level of the city decreases by D millimetres on such a day.
       However, if the water level is less than D millimetres before the i-th day, then it becomes zero instead.

       There will be a red alert in the city if the water level becomes strictly greater than H millimetres on at least one of the N days.

       Determine if there will be a red alert.
      
      <h2>Input Format</h2>
      
       The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
        
       The first line of each test case contains three space-separated integers N, D and H.
        
       The second line contains N space-separated integers A1,A2,…,AN.
    
      <h2>Output Format</h2>
    
       For each test case, print a single line containing the string "YES" if there will be a red alert or "NO" otherwise.
       
  </body>
</html>
  
