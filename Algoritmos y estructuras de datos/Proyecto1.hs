-- Ejercicio 1a --
esCero :: Int -> Bool
esCero x = x == 0

-- Ejemplos --
-- *Main> esCero 3
-- False
-- *Main> esCero 0
-- True

-- Ejercicio 1b --
esPositivo :: Int -> Bool
esPositivo x | x >= 0 = True
             | x < 0 = False

-- Ejemplos --
-- *Main> esPositivo 3
-- True
-- *Main> esPositivo (-1)
-- False

-- Ejercicio 1c --
esVocal :: Char -> Bool 
esVocal x = x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'

-- Ejemplos -- 
-- *Main> esVocal 'a'
-- True
-- *Main> esVocal 'b'
-- False

-- Ejercicio 1d --
valorAbsoluto :: Int -> Int 
valorAbsoluto x | x >= 0 = x
                | x < 0 = (-1)*x

-- Ejemplos --
-- *Main> valorAbsoluto 3
-- 3
-- *Main> valorAbsoluto (-1)
-- 1

-- Ejercicio 2a --
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = (x == True) && paratodo xs

-- Ejemplos --
-- *Main> paratodo [True, False]
-- False
-- *Main> paratodo [True, True]
-- True

-- Ejercicio 2b -- 
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

-- Ejemplos -- 
-- *Main> sumatoria [1,2,3,4]
-- 10
-- *Main> sumatoria [-1,-2,3,4]
-- 4

-- Ejercicio 2c --
productoria :: [Int] -> Int 
productoria [] = 1
productoria (x:xs) = x * productoria xs

-- Ejemplos -- 
-- *Main> productoria [1,2,3]
-- 6
-- *Main> productoria [-1,-2,4]
-- 8

-- Ejercicio 2c --
factorial :: Int -> Int
factorial x = product [1..x]

-- Ejemplos -- 
-- *Main> factorial 4
-- 24
-- *Main> factorial 6
-- 720

-- Ejercicio 2e --
promedio :: [Int] -> Int
promedio [] = 0
promedio (x:xs) = div (sumatoria xs) (length xs)

-- Ejemplos --
-- *Main> promedio [1,1,4]
-- 2
-- *Main> promedio [6,6,6,6]
-- 6

-- Ejercicio 3 -- 
pertenece :: Int -> [Int] -> Bool
pertenece _ [] = False
pertenece x (y:ys) | x == y = True
                   | otherwise = pertenece x ys

-- Ejemplos --
-- *Main> pertenece 2 [1,1,4]
-- False
-- *Main> pertenece 6 [4,3,6,7,7]
-- True

-- Ejercicio 4a --
paratodo' :: [a] -> (a -> Bool) -> Bool  
paratodo' [] f = True
paratodo' (x:xs) f = f x && (paratodo' xs f)

-- Ejemplos --
-- *Main> paratodo' [-1,2,3,4] esPositivo
-- False
-- *Main> paratodo' [1,2,3,4] esPositivo
-- True

-- Ejercico 4b --
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] f = False
existe' (x:xs) f = f x || (existe' xs f)

-- Ejemplos --
-- *Main> existe' [-1,-2,3,-4] esPositivo 
-- True
-- *Main> existe' [-1,-2,-3,-4] esPositivo 
-- False

-- Ejercicio 4c --
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] f = 0
sumatoria' (x:xs) f = (f x) + sumatoria' xs f

-- Ejemplos -- 
-- *Main> sumatoria' [1,2,3,4] (+2)
-- 18
-- *Main> sumatoria' [-1,-2,3,4] valorAbsoluto
-- 10

-- Ejercicio 4d --
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] f = 1
productoria' (x:xs) f = (f x) * (productoria' xs f)

-- Ejemplos -- 
-- *Main> productoria' [1,2,3,4] (+2)
-- 360
-- *Main> productoria' [-1,-2,3,4] valorAbsoluto
-- 24

-- Ejercicio 5 --
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs (== True)

-- Ejemplos -- 
-- *Main> paratodo'' [True, False, True]
-- False
-- *Main> paratodo'' [True, True, True]
-- True

-- Ejercicio 6a --
esPar :: Int -> Bool
esPar x = mod x 2 == 0

todosPares :: [Int] -> Bool
todosPares xs = paratodo' xs esPar

-- Ejemplos --
-- *Main> todosPares [2,3,4,5]
-- False
-- *Main> todosPares [2,4,6]
-- False

-- Ejercicio 6b -- 
esMultiplo :: Int -> Int -> Bool
esMultiplo n1 n2 = mod n1 n2 == 0

hayMultiplo :: Int -> [Int] -> Bool
hayMultiplo x xs = existe' xs (esMultiplo x)

-- Ejemplos -- 
-- *Main> hayMultiplo 5 [2,3,4,5]
-- True
-- *Main> hayMultiplo 5 [2,3,4]
-- False

-- Ejercicio 6c --
sumaCuadrados :: Int -> Int
sumaCuadrados x = sumatoria' [0..(x-1)] (^2)

-- Ejemplos -- 
-- *Main> sumaCuadrados 3
-- 5
-- *Main> sumaCuadrados 4
-- 14

-- Ejercicio 6d --
existeDivisor :: Int -> [Int] -> Bool
existeDivisor n ls = existe' ls (esMultiplo n)

-- Ejemplos --
-- *Main> existeDivisor 6 [2,3,4]
-- True
-- *Main> existeDivisor 6 [4,5,7]
-- False

-- Ejercicio 6e -- 
esPrimo :: Int -> Bool
esPrimo x = existeDivisor x [2.. (x-1)] == False

-- Ejemplos -- 
-- *Main> esPrimo 2
-- True
-- *Main> esPrimo 4
-- False

-- Ejercicio 6f --
factorial' :: Int -> Int
factorial' x = productoria [1..x]

-- Ejemplos --
-- *Main> factorial' 3
-- 6
-- *Main> factorial' 5
-- 120

-- Ejercicio 6g --
multiplicaPrimos :: [Int] -> Int
multiplicaPrimos xs = productoria (filter esPrimo xs)

-- Ejemplos --
-- *Main> multiplicaPrimos [2,3,4,5,6]
-- 30
-- *Main> multiplicaPrimos [7,8,9,11]
-- 77

-- Ejercicio 6h -- 
fib :: Int -> Int
fib 0 = 1
fib 1 = 1
fib x = fib (x-1) + fib (x-2)

esFib :: Int -> Bool
esFib x = pertenece x (map fib [0..(x+1)])

-- Ejemplos -- 
-- esFib 2
-- *Main> esFib 2
-- True
-- *Main> esFib 3
-- True
-- *Main> esFib 4
-- False

-- Ejercicio 6i --
todosFib :: [Int] -> Bool
todosFib [] = True
todosFib (xs) = paratodo' xs esFib

-- Ejemplos -- 
-- *Main> todosFib [1,2,3,4]
-- False
-- *Main> todosFib [2,3,5]
-- True

-- Ejercicio 7 --

-- map :: (a -> b) -> [a] -> [b]
-- map: Función y una lista; devolviendo una lista cuyos elementos son el resultado de aplicar la función ingresada a cada uno de ellos.

-- filter :: (a -> Bool) -> [a] -> [a]
-- filter: Función que recibe un predicado y una lista; devolviendo una lista solamente de los elementos que satisfacen el predicado anterior.

-- map succ [1,-4,6,2,-8] (con succ n = n+1) equivale a [2,-3,7,3,-7]

-- filter esPositivo [1,-4,6,2,-8] equivale a [1,6,2]

-- Ejercicio 8a --
duplicaElemento :: [Int] -> [Int] 
duplicaElemento [] = []
duplicaElemento (x:xs) = (x * 2):(duplicaElemento xs)

-- Ejemplos -- 
-- *Main> duplicaElemento [2,3,4]
-- [4,6,8]
-- *Main> duplicaElemento [-2,-3,4]
-- [-4,-6,8]

-- Ejercicio 8b -- 
duplicaElemento' :: [Int] -> [Int]
duplicaElemento' xs = map (*2) xs

-- Ejemplos -- 
-- *Main> duplicaElemento' [1,2,3]
-- [2,4,6]
-- *Main> duplicaElemento' [-1,-2,3]
-- [-2,-4,6]

-- Ejercicio 9a -- 
soloPrimos :: [Int] -> [Int]
soloPrimos [] = []
soloPrimos (x:xs)
  | esPrimo x = x:(soloPrimos xs)
  | otherwise = soloPrimos xs

-- Ejemplos --
-- *Main> soloPrimos [2,3,4,5]
-- [2,3,5]
-- *Main> soloPrimos [7,9,11,13]
-- [7,11,13]

-- Ejercicio 9b -- 
soloPrimos' :: [Int] -> [Int]
soloPrimos' xs = filter esPrimo xs

-- Ejemplos -- 
-- *Main> soloPrimos' [2,3,13]
-- [2,3,13]
-- *Main> soloPrimos' [1,7,11]
-- [1,7,11]

-- Ejercicio 9c -- 
multiplicaPrimos' :: [Int] -> Int
multiplicaPrimos' xs = productoria (soloPrimos xs)

-- Ejemplos --
-- *Main> multiplicaPrimos' [2,3,5,4]
-- 30
-- *Main> multiplicaPrimos' [2,4,6,11]
-- 22

-- Ejercicio 10a --
primIgualesA :: Eq a => a -> [a] -> [a]
primIgualesA x [] = []
primIgualesA x (y:ys)
  | x == y = y:(primIgualesA x ys)
  | otherwise = []

-- Ejemplos --
-- *Main> primIgualesA 3 [3,3,4,1]
-- [3, 3]
-- *Main> primIgualesA 3 [4,3,3,4,1]
-- []


-- Ejercicio 10b --
primIgualesA' :: Eq a => a -> [a] -> [a]
primIgualesA' x ys = takeWhile (x ==) ys

-- Ejemplos -- 
-- *Main> primIgualesA' 'a' "aaa"
-- "aaa"
-- *Main> primIgualesA' 5 [5, 5, 5, 4, 5, 2, 5, 5]
-- [5,5,5]


-- Ejercicio 11a --
primIguales :: Eq a => [a] -> [a]
primIguales [] = []
primIguales (x:y:xs)
  | x == y = x:primIguales (y:xs)
  | otherwise = x:[]

-- primIguales [2, 3, 4, 4]
-- [2]
-- primIguales [2, 2, 3, 4]
-- [2,2]

-- Ejercicio 11b --
primIguales' :: Eq a => [a] -> [a]
primIguales' [] = []
primIguales' xs = primIgualesA' (xs!!0) xs
-- Alternativamente: primIguales' (x:xs) = primIgualesA' x (x:xs)

-- primIguales' [2, 2, 3, 4]
-- [2,2]
-- primIguales' "aabcd"
-- "aa"

-- Ejercicio 12 --
