/* The students should not be counted duplicate in each course. */
SELECT class
FROM courses
group by class
having count(distinct student) >= 5