# LAB PROGETTAZIONE - PROGETTO FINALE
Durante la progettazione abbiamo effettuato i seguenti accorgimenti queste problematiche:
 - La scelta random delle mosse da fare, seppur implementata in un file (NOME FILE) e incluso nella cartella src del progetto, non viene utilizzato durante la compilazione perché è stato sostituito da un alto file (NOME FILE) che fa delle mosse pseudorandom, con un più che notevole risparmio di tempo. Nella compilazione tramite CMake verrà dunque utilizzata una versione del random "semplificata" per quanto riguarda le prestazioni, evitando così di dover perdere diversi secondi per aspettare ogni mossa del computer
 - La patta è stata semplificata ad un semplice contatore di 50 mosse, dopo le quali, se nessuna delle parti vince, la partita si dichiara conclusa
 - Manca l'implementazione dell'en passant, mentre l'implementazione dello scaccomatto è stata semplificata considerando una partita conclusa se, per qualunque posizione in cui il re potrebbe spostarsi, esso rimarrebbe sotto scacco. Non è stato dunque considerato il caso in cui la pedina che sta facendo scacco possa essere mangiata a sua volta da qualcun'altro, o, per esempio, che il giocatore scelga di sacrificare una propria pedina per evitare che il re rimanga sotto scacco


il file di log non viene pulito ogni volta che è utilizzato, quindi bisogna cancellarlo per farlo funzionare correttamente
