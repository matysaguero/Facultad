-- Por ejemplo --
paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) = (x == True) && paratodo xs

-- Por otro ejemplo --
sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

-- Por otro ejemplo más --
productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

-- Por la patria --
factorial :: [Int] -> Int
factorial [] = 1
factorial (x:xs) = productoria [1..x]