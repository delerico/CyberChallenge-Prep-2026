# Overflow Exercises – CyberChallenge Prep 2026

Questa sezione contiene 10 esercizi dedicati agli overflow dei tipi numerici in C.  
Gli esempi coprono i comportamenti richiesti nel pretest e nel test di CyberChallenge.IT, con particolare attenzione a:

- rappresentazione interna dei dati
    
- wrap-around dei tipi unsigned
    
- overflow/underflow nei tipi signed
    
- integer promotion
    
- conversioni tra signed e unsigned
    
- confronto tra tipi misti
    
- comportamento definito e indefinito dello standard C
    

Gli esercizi sono pensati per capire a fondo cosa accade a livello di memoria e come vengono valutate le espressioni aritmetiche nel linguaggio C.

---

## Contenuto

Gli esercizi includono:

### • Unsigned wrap-around

Overflow in `unsigned char` e `unsigned int`, con ritorno a zero secondo aritmetica modulo 2ⁿ.

### • Signed wrap-around (two’s complement)

Comportamento pratico dei tipi signed a 8 bit e 32 bit, incluso  
`127 + 1 → -128` e `-128 - 1 → 127`, tipico delle architetture moderne.

### • Integer promotion

Somme tra tipi piccoli (es. `unsigned char`) promossi a `int` prima dell’operazione:  
evita overflow inattesi.

### • Signed → unsigned conversion

Reinterpretazione bit-a-bit: il valore negativo viene convertito nel corrispondente grande positivo.

### • Undefined Behavior nei signed int

`INT_MAX + 1` e `INT_MIN - 1` sono formalmente UB nello standard C,  
ma producono wrap-around nelle implementazioni two’s complement.

### • Confronto signed/unsigned

Nei confronti misti (`int` vs `unsigned int`), il valore signed viene convertito a unsigned,  
causando risultati sorprendenti.

---

## Obiettivo

Comprendere le regole che regolano l’aritmetica dei tipi numerici in C e saper individuare:

- overflow reali
    
- comportamenti definiti e indefiniti
    
- conversioni implicite
    
- trappole tipiche del pretest CyberChallenge
    

Questo modulo completa la sezione C insieme a:

- Puntatori (Level 1–5)
    
- Cast a `char*` e byte-level reading
    
- Struct, padding e layout della memoria
    

---

## Esercizi inclusi (10 totale)

1. Unsigned char wrap-around
    
2. Signed char overflow positivo
    
3. Signed char overflow negativo
    
4. Overflow di `int` (INT_MAX + 1)
    
5. Conversione signed → unsigned
    
6. Overflow di `unsigned int`
    
7. Somma di unsigned char (modulo 256)
    
8. Integer promotion ed evitamento dell’overflow
    
9. Underflow di `int` (INT_MIN - 1)
    
10. Confronto misto signed/unsigned
