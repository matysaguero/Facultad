{-# LANGUAGE NPlusKPatterns #-}
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
minimoElemento' :: (Ord a, Bounded a, Show a) => [a] -> a
minimoElemento' [] = maxBound
minimoElemento' (x:xs) = min x (minimoElemento' xs)

-- Ejercicio 3c --
-- *Main> minimoElemento' [Fa', La', Sol', Re', Fa']
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

-- Ejercicio 4a --
-- Deportista es un tipo algebraico con tipos parametricos 
data Deportista = Ajedrecista 
                | Ciclista Modalidad 
                | Velocista Altura
                | Tenista TipoReves ManoHabil Altura
                | Futbolista Zona NumCamiseta PiernaHabil Altura deriving (Eq, Show)

-- Ejercicio 4b -- 
-- El constructor Ciclista es el tipo: (:t) Ciclista :: Modalidad -> Deportista.

-- Ejercicio 4c -- 
contar_velocistas :: [Deportista] -> Int
contar_velocistas [] = 0
contar_velocistas (Velocista x:xs) = 1 + contar_velocistas xs
contar_velocistas (_:xs) = contar_velocistas xs

-- Ejemplos -- 
-- *Main> contar_velocistas []
-- 0
-- *Main> contar_velocistas [(Velocista 210),(Ajedrecista),(Ajedrecista),(Velocista 189)]
-- 2

-- Ejercicio 4d --
contar_futbolista :: [Deportista] -> Zona -> Int
contar_futbolista [] z = 0 
contar_futbolista ((Futbolista Arco _ _ _):xs) Arco = 1 + contar_futbolista xs Arco
contar_futbolista ((Futbolista Defensa _ _ _):xs) Defensa = 1 + contar_futbolista xs Defensa
contar_futbolista ((Futbolista Mediocentro _ _ _):xs) Mediocentro = 1 + contar_futbolista xs Mediocentro
contar_futbolista ((Futbolista Delantera _ _ _):xs) Delantera = 1 + contar_futbolista xs Delantera
contar_futbolista (_:xs) z = contar_futbolista xs z

-- Ejemplos --
-- *Main> contar_futbolista [(Futbolista Arco 1 Izquierda 200), (Futbolista Defensa 2 Derecha 180)] Arco
-- 1
-- *Main> contar_futbolista [(Futbolista Arco 1 Izquierda 200), (Futbolista Defensa 2 Derecha 180)] Delantera
-- 0

-- Ejercicio 4e --
igual_zona :: Zona -> Deportista -> Bool
igual_zona z (Futbolista zona _ _ _ ) = zona == z
igual_zona z _ = False

contar_futbolista2 :: [Deportista] -> Zona -> Int
contar_futbolista2 [] z = 0
contar_futbolista2 xs z = length (filter (igual_zona z) xs)

-- Ejemplos --
-- *Main> contar_futbolista2 [] Arco
-- 0
-- *Main> contar_futbolista2 [(Futbolista Arco 1 Izquierda 200), (Futbolista Defensa 2 Derecha 180)] Arco
-- 1

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

-- Ejemplo --
-- *Main> sonidoCromatico (Nota Do Sostenido)
-- 1
-- *Main> sonidoCromatico (Nota Do Bemol)
-- -1

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
data Talvez a = Nada | Solo a deriving (Eq, Ord, Show) -- Tuve que redefinir este tipo de dato en español porque estas definiciones ya vienen importadas en este prelude de GHCi

-- Ejercicio 6a --
primerElemento :: [a] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x

-- Ejemplos --
-- *Main> primerElemento []
-- Nothing
-- *Main> primerElemento [1,2,3,4]
-- Just 1

-- Ejercicio 7 --
data Cola = VaciaC | Encolada Deportista Cola deriving Show

-- Ejercicio 7a (1) --
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing 
atender (Encolada dep cola) = Just cola

-- Ejemplos --
-- *Main> atender (Encolada Ajedrecista VaciaC)
-- Just VaciaC
-- *Main> atender (Encolada Ajedrecista (Encolada(Velocista 180) VaciaC))
-- Just (Encolada (Velocista 180) VaciaC)

-- Ejercicio 7a (2) --
encolar :: Deportista -> Cola -> Cola 
encolar dep1 VaciaC = (Encolada dep1 VaciaC)
encolar dep1 (Encolada dep2 cola) = (Encolada dep1 (Encolada dep2 cola)) 

-- Ejemplos --
-- *Main> encolar Ajedrecista VaciaC
-- Encolada Ajedrecista VaciaC
-- *Main> encolar (Tenista UnaMano Derecha 180) (Encolada Ajedrecista (Encolada (Velocista 180) VaciaC))
-- Encolada (Tenista UnaMano Derecha 180) (Encolada Ajedrecista (Encolada (Velocista 180) VaciaC))

-- Ejercicio 7a (3) --
busca :: Cola -> Zona -> Maybe Deportista
busca VaciaC z = Nothing
busca (Encolada (Futbolista zona numero pie altura) cola) z | (zona == z) = Just (Futbolista zona numero pie altura)
                                                            | otherwise = busca cola z
busca _ _ = Nothing -- Ya que lo único que estamos buscando son Futbolistas (que son el único tipo de Deportista que contienen el constructor Zona),
                    -- defino la función para que en caso de que se le ingrese otro deportista que no sea Futbolista, me devuelva Nothing.

-- Ejemplos --
-- *Main> busca (Encolada (Futbolista Delantera 10 Derecha 200) (Encolada Ajedrecista (VaciaC))) Delantera
-- Just (Futbolista Delantera 10 Derecha 200)
-- *Main> busca (Encolada (Futbolista Delantera 10 Derecha 200) (Encolada Ajedrecista (VaciaC))) Arco
-- Nothing

-- Ejercicio 7b -- 
-- Cola se parece al tipo "lista". Ya que poseé un constructor para el "elemento vacío" que en este caso sería Nothing. 
-- Y un constructor recursivo de manera similar a lo que sería un elemento pegado a una lista

-- Ejercicio 8 --
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b) deriving Show
type Diccionario = ListaAsoc String String
type Padron = ListaAsoc Int String

-- Ejercicio 8a --
type Guia = ListaAsoc String Int

-- Ejercicio 8b (1)) --
la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo a b (xs)) = 1 + la_long (xs)

-- Ejemplos --
-- *Main> la_long (Nodo "hol" "aa" (Nodo "aadi" "oos" Vacia))
-- 2
-- *Main> la_long (Nodo 1 2 (Nodo 3 4 (Nodo 5 6 (Nodo 7 8 Vacia))))
-- 4

-- Ejercicio 8b (2) --
la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia xs = xs
la_concat ys Vacia = ys
la_concat (Nodo a b (xs)) ys = (Nodo a b (la_concat xs ys)) 

-- Ejemplos --
-- *Main> la_concat Vacia (Nodo 1 2 Vacia)
-- Nodo 1 2 Vacia
-- *Main> la_concat (Nodo 3 4 Vacia) Vacia
-- Nodo 3 4 Vacia
-- *Main> la_concat (Nodo 3 4 Vacia) (Nodo 5 6 (Nodo 7 9 Vacia))
-- Nodo 3 4 (Nodo 5 6 (Nodo 7 9 Vacia))

-- Ejercicio 8b (3) --
la_agregar :: Eq a => ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia a b = (Nodo a b (Vacia))
la_agregar (Nodo a b (xs)) clave dato | (a == clave) = (Nodo a dato (xs))
                                      | otherwise = (Nodo a b (la_agregar xs clave dato))

-- Ejemplo -- 
-- *Main> la_agregar Vacia 1 3 
-- Nodo 1 3 Vacia
-- *Main> la_agregar (Nodo 2 3 (Nodo 4 5 Vacia)) 4 10
-- Nodo 2 3 (Nodo 4 10 Vacia)
-- *Main> la_agregar (Nodo 2 3 (Nodo 4 5 Vacia)) 2 10
-- Nodo 2 10 (Nodo 4 5 Vacia)

-- Ejercicio 8b (4) --
la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo a b (xs)) = (a, b):la_pares xs 

-- Ejemplo - -
-- *Main> la_pares (Nodo "hola" "chau" Vacia)
-- [("hola","chau")]
-- *Main> la_pares (Nodo "hola" "chau" (Nodo "hello" "goodbye" (Nodo "konichiwa" "sayionara" Vacia)))
-- [("hola","chau"),("hello","goodbye"),("konichiwa","sayionara")]

-- Ejercicio 8b (5) --
la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia clave = Nothing
la_busca (Nodo a b (xs)) clave | (a == clave) = Just b
                               | otherwise = la_busca xs clave

-- Ejemplos -- 
-- *Main> la_busca (Nodo "hola" "adios" Vacia) "konichiwa"
-- Nothing
-- *Main> la_busca (Nodo "hola" "adios" (Nodo "konichiwa" "sayionara" Vacia)) "konichiwa"
-- Just "sayionara"

-- Ejercicio 8b (6) --
la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar clave Vacia = Vacia
la_borrar clave (Nodo a b (xs)) | (clave == a) = xs
                                | otherwise = (Nodo a b (la_borrar clave xs))

-- Ejemplos --
-- *Main> la_borrar "arrivederci" (Nodo "hola" "adios" (Nodo "hello" "goodbye" (Nodo "sayionara" "konichiwa" Vacia)))
-- Nodo "hola" "adios" (Nodo "hello" "goodbye" (Nodo "sayionara" "konichiwa" Vacia))
-- *Main> la_borrar "sayionara" (Nodo "hola" "adios" (Nodo "hello" "goodbye" (Nodo "sayionara" "konichiwa" Vacia)))
-- Nodo "hola" "adios" (Nodo "hello" "goodbye" Vacia)