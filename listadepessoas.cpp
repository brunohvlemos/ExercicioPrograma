#include "listadepessoas.h"

// ta pelas coxas, voce passa o id pra saber qual eh a pessoa e ele instancia essa "person" temporaria como a pessoa especifica
void ListaDePessoas::pickaPerson (int id, Pessoa* person1, Pessoa* person2, Pessoa* person3, Pessoa* person4, Pessoa* person5, Pessoa* person6, Pessoa* person7, Pessoa* person8, Pessoa* person9, Pessoa* person10){
	switch (id){
		case 1: person = person1;
		case 2: person = person2;
		case 3: person = person3;
		case 4: person = person4;
		case 5: person = person5;
		case 6: person = person6;
		case 7: person = person7;
		case 8: person = person8;
		case 9: person = person9;
		case 10: person = person10;
	}
};
// Aqui ele retorna o valor da temporaria pra atualizar a de verdade quando parou de mexer com ela
void ListaDePessoas::atualiza (int id, Pessoa* person1, Pessoa* person2, Pessoa* person3, Pessoa* person4, Pessoa* person5, Pessoa* person6, Pessoa* person7, Pessoa* person8, Pessoa* person9, Pessoa* person10){
	switch (id){
		case 1: person1 = person;
		case 2: person2 = person;
		case 3: person3 = person;
		case 4: person4 = person;
		case 5: person5 = person;
		case 6: person6 = person;
		case 7: person7 = person;
		case 8: person8 = person;
		case 9: person9 = person;
		case 10: person10 = person;
	}
};
