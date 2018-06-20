int minmax(Zustands-Knoten k):
  if(k ist Blatt){
    return k.getBewertung
  } else {
  	for(alle Kindknoten kind von k){
    	res = - min(res, Bewertung(k))
    }
  }
