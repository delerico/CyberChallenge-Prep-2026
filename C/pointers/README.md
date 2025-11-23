# Pointer Exercises – CyberChallenge Prep

Esercizi organizzati per livelli crescenti, con l’obiettivo di sviluppare una comprensione profonda dei puntatori, della memoria e della semantica del C.  
Il percorso segue la struttura tipica delle domande del pretest e del test CyberChallenge.

---

## Level 1 — Fondamenti dei Puntatori

Concetti principali:

- dereferenziazione `*p`
    
- indirizzi e riferimento `&x`
    
- array e accesso tramite `*(p + i)`
    
- aliasing tramite puntatori
    
- modifiche dirette dei valori
    

Obiettivo: acquisire familiarità con puntatori, array e accesso ai dati.

Contenuto:

- 10 esercizi
    

---

## Level 2 — Aritmetica dei Puntatori e Funzioni

Concetti principali:

- incremento del puntatore con `p++`
    
- modifica dell’array tramite copia del puntatore
    
- comportamento del puntatore passato alle funzioni
    
- indexing tramite `p[i]`
    
- combinazioni tra `*p`, `p++` e `*(p+i)`
    

Obiettivo: imparare a modificare strutture dati e a comprendere il comportamento dei puntatori nelle funzioni.

Contenuto:

- 10 esercizi
    

---

## Level 3 — Semantica dei Puntatori e Pointer-to-Pointer

Concetti principali:

- differenza tra modificare il puntatore e modificare i dati puntati
    
- il puntatore passato per valore non cambia nel chiamante
    
- modifica del puntatore tramite `int **`
    
- differenze tra `p++` e `(*p)++`
    
- alias multipli dello stesso dato
    
- restituzione di puntatori dalle funzioni
    

Obiettivo: comprendere come funziona davvero la semantica dei puntatori nel C e introdurre i puntatori a puntatori.

Contenuto:

- 10 esercizi
    

---

## Level 4 — Lettura della Memoria e Endianess

Concetti principali:

- cast tra `int*` e `char*`
    
- lettura dei singoli byte in memoria
    
- interpretazione della rappresentazione little-endian
    
- accesso byte-level tramite dereferenziazione
    
- analisi di cosa effettivamente viene letto/stampato dal programma
    

Obiettivo: imparare a leggere la memoria come nei problemi più avanzati del test.

Contenuto:

- 10 esercizi
    

---

## Level 5 — Struct, Layout di Memoria e Padding

Concetti principali:

- struct e puntatori a struct
    
- padding e allineamento
    
- sizeof dei campi e della struct
    
- offset interni e layout di memoria
    
- array di struct
    

Obiettivo: comprendere il layout reale dei dati in memoria, fondamentale per i problemi avanzati su struct e campi allineati.

Contenuto:

- 10 esercizi
    

---

Questo percorso fornisce una preparazione completa e progressiva sui puntatori, dalla base alla manipolazione byte-level, utile per affrontare sia il pretest che il test CyberChallenge.
