// SFML-Main.cpp
// Una plantilla para la creación de programas con SFML
// Programación I
// Tecnicatura Universitaria de Programación
// Universidad Tecnológica Nacional
#include<SFML/Graphics.hpp>
#include <iostream>
#include <fstream>
#include <string>
using namespace sf;
using namespace std;


//int main()
//{
//	sf::RenderWindow mainWindow(sf::VideoMode(800, 800), "Juego de Dados");
//	mainWindow.setVerticalSyncEnabled(true);
//	
//
//	while (mainWindow.isOpen())
//
//	{
//		sf::Font font;
//		font.loadFromFile("arial.ttf");
//		sf::Text text;
//		text.setFont(font);
//		sf::Event event;
//		while (mainWindow.pollEvent(event))
//		{
//			// "close requested" event: we close the window
//			if (event.type == sf::Event::Closed)
//				mainWindow.close();
//		}
//		// clear the window with black color
//		mainWindow.clear(sf::Color::Black);
//
//		////Welcome
//		//string playerOne;
//		//string playerTwo;
//		//int gameMode;
//		//bool validation = true;
//
//
//		////Welcome and game mode selection (against the pc or 1v1).
//		//text.setString("Bienvenid@/s al gran juego de dados!\n A continuación ingrese su nombre: ");
//		//mainWindow.draw(text);
//		//
//		//getline(cin, playerOne);
//		//cout << "Que bonito nombre " << playerOne << "! Por favor selecciona una opción a continuación: ";
//
//		//do {
//		//	cout << "1. Juega contra mi \n2. Juega con otra persona (segundo jugador)\n3. Salir del juego.";
//		//	cin >> gameMode;
//		//	if (gameMode == 1) cout << "Perfecto! "; //terminar el dialogo xd 
//		//	else if (gameMode == 2)
//		//	{
//		//		cout << "Nombre del segundo jugador: \n";
//		//		getline(cin, playerTwo);
//		//	}
//		//	else if (gameMode == 3)
//		//	{
//		//		cout << "Nos vemos la próxima!";
//		//		mainWindow.close();
//		//	}
//		//	else { cout << "La opción ingresada no es válida, por favor intenta nuevamente."; validation = false; }
//		//} while (validation != true);
//
//
//		//cout << "¿con qué juego quieres intentar primero? \n";
//
//
//		// end the current frame
//		mainWindow.display();
//	}
//	
//
//	return 0;
//}