pairs = [
    ("bola", "cola"),
    ("mala", "bala")
]

for s1, s2 in pairs:
    distance = levenshtein(s1, s2)
    print(f"Distância entre '{s1}' e '{s2}': {distance}")
