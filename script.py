pairs = [
    ("bola", "cola"),
    ("noite", "foice"),
    ("ana", "banana"),
    ("hardware", "software")
]

for s1, s2 in pairs:
    distance = levenshtein(s1, s2)
    print(f"Distancia de Levenshtein entre '{s1}' e '{s2}': {distance}")