-- Ejercicio 1a -- 
data Carrera = Matematica | Fisica | Computacion | Astronomia

-- Ejercicio 1b -- 
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematicas"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Ciencias de la Computacion"
titulo Astronomia = "Licenciatura en Astronomia"

-- Ejemplos -- 
-- *Main> titulo Matematica
-- "Licenciatura en Matematicas"
-- *Main> titulo Computacion
-- "Licenciatura en Ciencias de la Computacion"

-- Ejercicio 1c -- 
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si 

-- Ejercicio 1d -- 
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'

-- Ejemplos --
-- *Main> cifradoAmericano Do
-- 'C'
-- *Main> cifradoAmericano Re
--- 'D'

-- Ejercicio 2 --
data NotaBasica2 = Do' | Re' | Mi' | Fa' | Sol' | La' | Si' deriving (Eq, Ord, Bounded, Show)

-- Ejemplos --
-- *Main> Do' < Re'
-- True
-- *Main> Fa' `min` Sol'
-- Fa'

-- Ejercicio 3 --
minimoElemento :: Ord a => [a] -> a 
minimoElemento (x:y:xs) | x < y = minimoElemento (x:xs)
                        | otherwise = minimoElemento (y:xs)
minimoElemento [x] = x
minimoElemento [] = error "lista vacia, no hay minimo definido"
-- Quise intentar definir esta funcion de otra forma pero no se me ocurrio sin definir el ultimo caso de lista vacia --

-- Ejemplos --
-- *Main> minimoElemento  [1,2,3,4]
-- 1
-- *Main> minimoElemento  [2,3,4]
-- 2

-- Ejercicio 3b --
minimoElemento' :: (Ord a, Bounded a) => [a] -> a
minimoElemento' [] = maxBound
minimoElemento' (x:xs) = min x (minimoElemento' xs)

-- Ejercicio 3c --
-- *Main> minimoElemento [Fa', La', Sol', Re', Fa']
-- Re'

-- Ejercicio 4 --

-- Sinonimos de tipo 
type Altura = Int
type NumCamiseta = Int

-- Tipos algebraicos sin parametros (aka enumerados)
data Zona = Arco | Defensa | Mediocentro | Delantera 
data TipoReves = DosManos | UnaMano
data Modalidad = Carretera | Pista | Monte | Bmx
data PiernaHabil = Izquierda | Derecha 

-- Sinonimo
type ManoHabil = PiernaHabil

-- Deportista es un tipo algebraico con tipos parametricos 
data Deportista = Ajedrecista
                | Ciclista Modalidad
                | Velocista Altura
                | Tenista TipoReves ManoHabil Altura
                | Futbolista Zona NumCamiseta PiernaHabil Altura

-- Ejercicio 4d --
contar_futbolista :: [Deportista] -> Zona -> Int
contar_futbolista [] z = 0 
contar_futbolista ((Futbolista Arco _ _ _):xs) Arco = 1 + contar_futbolista xs Arco
contar_futbolista ((Futbolista Defensa _ _ _):xs) Defensa = 1 + contar_futbolista xs Defensa
contar_futbolista ((Futbolista Mediocentro _ _ _):xs) Mediocentro = 1 + contar_futbolista xs Mediocentro
contar_futbolista ((Futbolista Delantera _ _ _):xs) Delantera = 1 + contar_futbolista xs Delantera
contar_futbolista (_:xs) z = contar_futbolista xs z

-- Ejercicio 4e --
igual_zona :: Zona -> Deportista -> Bool
igual_zona z = (Futbolista zona _ _ _ ) = zona == z
igual zona z _ = False

contar_futbolista2 :: [Deportista] -> Zona -> Int
contar_futbolista2 [] z = 0
contar_futbolista2 xs z = length (filter (igual_zona z) xs)

-- 5a --
sonidoNatural :: NotaBasica -> Int
sonidoNatural Do = 0
sonidoNatural Re = 2
sonidoNatural Mi = 4
sonidoNatural Fa = 5
sonidoNatural Sol = 7
sonidoNatural La = 9
sonidoNatural Si = 11
