SELECT name
FROM songs
WHERE artists_id IN (
    SELECT id
    FROM artists
    WHERE name = 'Post Malone'
);
