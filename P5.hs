main = print $ head [n|n <- [1..], sum (map (n `mod`) [2,3,5,7,11,13,16,17,18,19]) == 0]
