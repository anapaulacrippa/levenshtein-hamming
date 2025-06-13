pairs = [
    ("bola", "cola"),
    ("string", "strong"),
    ("noite", "foice"),
    ("cabana", "banana"),
    ("teclado", "telhado"),
    ("hardware", "software")
]

print("\n--- Distancia de Levenshtein ---")
for s1, s2 in pairs:
    distance = levenshtein(s1, s2)
    print(f"- '{s1}' e '{s2}': {distance}")

print("\n--- Distancia de Hamming ---")
for s1, s2 in pairs:
    distance = hamming(s1, s2)
    print(f"- '{s1}' e '{s2}': {distance}")
