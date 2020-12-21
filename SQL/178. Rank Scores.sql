SELECT Score
	  ,DENSE_RANK() over(
	    order by score desc
	  ) Rank
FROM Scores