-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Finding the description
SELECT description
FROM crime_scene_reports
WHERE year = 2023
AND month = 7
AND day = 28
AND street = 'Humphrey Street';

-- We can find the three witnesses with the help of the transcripts of the above code
SELECT id, name, transcript
FROM interviews
WHERE year = 2023
AND month = 7
AND day = 28;

-- We can find some account_numbers with the help of the transcripts of the above code
SELECT id, account_number, transaction_type, amount
FROM atm_transactions
WHERE year = 2023
AND month = 7
AND day = 28
AND atm_location = 'Leggett Street';

-- Finding the ones that bakery_security_logs found between 10:15 and 10:25
SELECT name, phone_number, passport_number, minute
FROM people
JOIN bakery_security_logs ON people.license_plate = bakery_security_logs.license_plate
WHERE year = 2023
AND month = 7
AND day = 28
AND hour = 10
AND minute > 15
AND minute < 25;

-- We are finding the person_id
SELECT person_id, creation_year
FROM bank_accounts
JOIN atm_transactions ON bank_accounts.account_number = atm_transactions.account_number
WHERE year = 2023
AND month = 7
AND day = 28
AND atm_location = 'Leggett Street'
AND transaction_type = 'withdraw';
