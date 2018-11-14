#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <vector>
#include "defines.h"
#include "InputHandler.h"

using namespace std;
using namespace managers;
namespace integra {
	namespace main {
		
		class Game {
		private:
			int cnt;
			Character* m_Player;
			SDL_Window* m_Window;            
			SDL_Renderer* m_Renderer;
			InputHandler* m_Input;
		public:
			static const int SCREEN_WIDTH = 1920;
			static const int SCREEN_HEIGHT = 1080;
			Game();
			bool init(const char* title, int x, int y, int w, int h);
			~Game();
			void update();
			void render();
			void handleEvents();
			void cleanUp();

			inline InputHandler* getInputHandler() {
				return this->m_Input;
			}

			inline Character* getPlayer() {
				return this->m_Player;
			}
		};
} }