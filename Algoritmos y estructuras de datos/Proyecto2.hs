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
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Eq, Ord, Show)

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
data Zona = Arco | Defensa | Mediocentro | Delantera deriving (Eq, Show)
data TipoReves = DosManos | UnaMano deriving (Eq, Show)
data Modalidad = Carretera | Pista | Monte | Bmx deriving (Eq, Show)
data PiernaHabil = Izquierda | Derecha deriving (Eq, Show)

-- Sinonimo
type ManoHabil = PiernaHabil

-- Deportista es un tipo algebraico con tipos parametricos 
data Deportista = Ajedrecista 
                | Ciclista Modalidad 
                | Velocista Altura
                | Tenista TipoReves ManoHabil Altura
                | Futbolista Zona NumCamiseta PiernaHabil Altura deriving (Eq, Show)
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
igual_zona z (Futbolista zona _ _ _ ) = zona == z
igual_zona z _ = False

contar_futbolista2 :: [Deportista] -> Zona -> Int
contar_futbolista2 [] z = 0
contar_futbolista2 xs z = length (filter (igual_zona z) xs)

-- Ejercicio 5a --
sonidoNatural :: NotaBasica -> Int
sonidoNatural Do = 0
sonidoNatural Re = 2
sonidoNatural Mi = 4
sonidoNatural Fa = 5
sonidoNatural Sol = 7
sonidoNatural La = 9
sonidoNatural Si = 11

-- Ejercicio 5b --
data Alteracion = Bemol | Natural | Sostenido deriving (Eq, Ord, Show)

-- Ejercicio 5c -- 
data NotaMusical = Nota NotaBasica Alteracion deriving (Eq, Ord, Show)

-- Ejercicio 5d --
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota n a) =
    case a of
        Bemol -> valorNota - 1
        Natural -> valorNota
        Sostenido -> valorNota + 1
    where valorNota = sonidoNatural n

-- Ejercicio 5e --
-- *Main> sonidoCromatico (Nota Do Sostenido) == sonidoCromatico (Nota Re Bemol)
-- True

-- *Main> sonidoCromatico (Nota Re Sostenido) == sonidoCromatico (Nota Re Bemol)
-- False

-- Ejercicio 5f --
-- *Main> sonidoCromatico (Nota Re Sostenido) >= sonidoCromatico (Nota Re Bemol)
-- True

-- *Main> sonidoCromatico (Nota Re Sostenido) >= sonidoCromatico (Nota Sol Sostenido)
-- False

-- Ejercicio 6 --
data Talvez a = Nada | Solo a deriving (Eq, Ord, Show) -- Tuve que redefinir este tipo de dato en español porque estas definiciones ya vienen importadas en este entorno GHCi''

-- Ejercicio 6a --
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x

-- Ejercicio 7 --
data Cola = VaciaC | Encolada Deportista Cola deriving Show

-- Ejercicio 7(a1) --
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing 
atender (Encolada dep cola) = Just cola

-- Ejercicio 7 (a2) --
encolar :: Deportista -> Cola -> Cola 
encolar dep1 VaciaC = (Encolada dep1 VaciaC)
encolar dep1 (Encolada dep2 cola) = (Encolada dep1 (Encolada dep2 cola)) 

-- Ejercicio 7 (a3) --
