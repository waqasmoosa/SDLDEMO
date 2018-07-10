#include <iostream>
#include <math.h>
#include <time.h>
#include "SDL.h"

using namespace std;

const int screen_width = 500;
const int screen_height = 500;

int main(int argc, char ** argv)
{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window *window = SDL_CreateWindow("SDLDEMOSCENE", 50, 50, screen_width, screen_height, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, 0, SDL_RENDERER_ACCELERATED);

	srand(time(NULL));

	int r, g, b;


	SDL_Rect rectangle, rectangle2, rectangle3, rectangle4;

	double rect1_x = screen_width / 2;
	double rect1_y = screen_height / 2;
	double rect1_width = 5;
	double rect1_height = 5;

	double rect2_x = screen_width / 2;
	double rect2_y = screen_height / 2;
	double rect2_width = 5;
	double rect2_height = 5;

	double rect3_x = screen_width / 2;
	double rect3_y = screen_height / 2;
	double rect3_width = 5;
	double rect3_height = 5;

	double rect4_x = screen_width / 2;
	double rect4_y = screen_height / 2;
	double rect4_width = 5;
	double rect4_height = 5;
	


	bool quit = false;

	while (quit == false)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				quit = true;
			}
		}

		rectangle.x = rect1_x;
		rectangle.y = rect1_y;
		rectangle.h = rect1_height;
		rectangle.w = rect1_width;

		rectangle2.x = rect2_x;
		rectangle2.y = rect2_y;
		rectangle2.h = rect2_height;
		rectangle2.w = rect2_width;

		rectangle3.x = rect3_x;
		rectangle3.y = rect3_y;
		rectangle3.h = rect3_height;
		rectangle3.w = rect3_width;

		rectangle4.x = rect4_x;
		rectangle4.y = rect4_y;
		rectangle4.h = rect4_height;
		rectangle4.w = rect4_width;
		r = rand() % 255 + 1;
		g = rand() % 255 + 1;
		b = rand() % 255 + 1;

		SDL_SetRenderDrawColor(renderer, r, 255, 255, 255);
		SDL_RenderFillRect(renderer, &rectangle);

		rect1_x -= 0.01;
		rect1_y -= 0.01;
		rect1_width += 0.02;
		rect1_height += 0.02;

		if (rect1_x < 175 || rect1_y < 175)
		{
			SDL_SetRenderDrawColor(renderer, 0, g, 0, 255);
			SDL_RenderFillRect(renderer, &rectangle2);

			rect2_x -= 0.01;
			rect2_y -= 0.01;
			rect2_width += 0.02;
			rect2_height += 0.02;
		}

		if (rect2_x < 175 || rect2_y < 175)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, b, 255);
			SDL_RenderFillRect(renderer, &rectangle3);

			rect3_x -= 0.01;
			rect3_y -= 0.01;
			rect3_width += 0.02;
			rect3_height += 0.02;
		}

		if (rect3_x < 175 || rect3_y < 175)
		{
			SDL_SetRenderDrawColor(renderer, r, g, b, 255);
			SDL_RenderFillRect(renderer, &rectangle4);

			rect4_x -= 0.01;
			rect4_y -= 0.01;
			rect4_width += 0.02;
			rect4_height += 0.02;
		}

		if (rect4_x < 175 || rect4_y < 175)
		{
			rect2_height = 0;
			rect2_width = 0;
			rect2_x = 250;
			rect2_y = 250;
			rect1_height = 5;
			rect1_width = 5;
			rect1_x = 250;
			rect1_y = 250;
			rect4_height = 0;
			rect4_width = 0;
			rect4_x = 250;
			rect4_y = 250;
			rect3_height = 5;
			rect3_width = 5;
			rect3_x = 250;
			rect3_y = 250;
		}
		


		SDL_RenderPresent(renderer);
	}

	SDL_Quit();
	return 0;
}