-- Ejercicio 2a --

data Luminosidad = Supergigante | Gigante | SecuenciaPrincipal | Enana deriving Show
data Temperatura = O | A | B | F | G | K | M  deriving Show
data Estructura = Rocoso | Gaseoso deriving Show
type Nombre = String
type NumSat = Int 
type DistEstrella = Float 

data Astro = Estrella Luminosidad Temperatura Nombre
            | Planeta Estructura NumSat DistEstrella deriving Show

-- Ejercicio 2b --
masSatelites :: [Astro] -> Int -> [Astro]
masSatelites ((Planeta es nums dist): as) num | nums > num = (Planeta es nums dist):(masSatelites as) num
                                              | otherwise = (masSatelites as) num
masSatelites (_:as) num = []

-- Ejemplos -- 
-- *Main> masSatelites [ (Estrella Supergigante A "Solcii")] 3
-- []
-- *Main> masSatelites [(Planeta Gaseoso 5 10000), (Planeta Rocoso 10 30000), (Estrella Supergigante A "Solcii")] 3
-- [Planeta Gaseoso 5 10000.0,Planeta Rocoso 10 30000.0]

-- Ejercicio 3 --
data Nivel = Uno | Dos | Tres 
data NotasdeIngles = NoHayMasEstudiantes
                    | EvolucionDelEstudiante String Nivel Int Int Int NotasdeIngles


