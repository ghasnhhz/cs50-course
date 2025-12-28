SELECT COUNT(title)
FROM movies
WHERE id = (
    SELECT movie_id
    FROM movies
    WHERE rating = '10.0';
)
