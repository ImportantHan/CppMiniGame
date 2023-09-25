#include <iostream>
#include "SFML/Audio.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Network.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

using namespace sf;
using namespace std;

void MiniGameWindow() {
	// 윈도우 창 생성
	RenderWindow Window(VideoMode(1024, 768), "Mini Game", Style::Titlebar | Style::Close);
	Event e;

	while (Window.isOpen()) { // isOpen() : Window Open 여부 확인
		// close 버튼을 클릭 Event 감지 => Window Close
		while (Window.pollEvent(e)) { // Event 감지
			// Event type 구분
			switch (e.type) {
			case Event::Closed: // Window close 버튼 클릭 이벤트 종류
				Window.close();
				break;
			}
		}
	}
}