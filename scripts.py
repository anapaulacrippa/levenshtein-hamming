pares = [
    ("hardware", "software"),
    ("bit", "byte")
    ("bola", "cola"),
    ("ana", "ana")
]

for s1, s2 in pares:
    distance = levenshtein(s1, s2)
    print(f"Distância entre '{s1}' e '{s2}': {distance}")
