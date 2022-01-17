#include "replay.h"

using namespace std;

int main(int argCount, char* argVec[])
{
    //Controllo numero argomenti da riga di comando
    if (argCount > 3)
    {
        cout << "Numero di argomenti troppo alto";
        return 1;
    }
    if (argCount == 0)
    {
        cout << "Inserire gli argomenti da riga di comando";
        return 1;
    }

    //creo una scacchiera su su eseguire le mosse (che si assume saranno sicuramente corrette,
    //in quanto replay di una partita gia' effettuata in passato, dunque non vengono fatti
    //controlli sulla validita' delle mosse, ma solo su quella delle stringhe di input)
    scacchiera board;
    fstream fileReader;
    fileReader.open(argVec[1], ios::in);
    if (fileReader.is_open()) {
        string myText;
        
        //leggo tutto il file e, per ogni linea, traduco l'input e svolgo la mossa sulla scacchiera
        while (getline(fileReader, myText)) {
            std::vector<int> input = traduttore::traduci(myText);
            board.movePedina(input.at(0), input.at(1), input.at(2), input.at(3));
            
            //a seconda della presenza o meno di un secondo parametro passato a riga di comando
            //la scacchiera viene stampata a video piuttosto che su un altro file
            if (argCount == 2) {
             board.printScacchieraVideo();
             }
            if (argCount == 3) {
             board.printScacchieraFile(argVec[2]);
         }
    }
        fileReader.close();
    }       	 
}




