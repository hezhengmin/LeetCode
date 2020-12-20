/*Method 1*/
SELECT id
,movie
,description
,rating
FROM cinema
where id & 1 = 1 and description <> 'boring'
order by rating desc

/*Method 2*/
SELECT id
,movie
,description
,rating
FROM cinema
where id % 2 != 0 and description <> 'boring'
order by rating desc
