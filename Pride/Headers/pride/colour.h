#pragma once

#include <SDL3/SDL.h>

namespace Pride
{
	/// <summary>
	/// Represents a RGBA colour struct.
	/// </summary>
	struct Colour
	{
		Uint8 r, g, b, a;

		constexpr Colour(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha = 255) 
			: r(red), g(green), b(blue), a(alpha) {}
	};

	namespace Colours
	{
		inline constexpr Colour White = Colour(255, 255, 255);
		inline constexpr Colour Black = Colour(0, 0, 0);
		inline constexpr Colour Red = Colour(255, 0, 0);
		inline constexpr Colour Green = Colour(0, 255, 0);
		inline constexpr Colour Blue = Colour(0, 0, 255);
		inline constexpr Colour Yellow = Colour(255, 255, 0);
		inline constexpr Colour Cyan = Colour(0, 255, 255);
		inline constexpr Colour Magenta = Colour(255, 0, 255);
		inline constexpr Colour Grey = Colour(128, 128, 128);
		inline constexpr Colour Orange = Colour(255, 165, 0);
		inline constexpr Colour Purple = Colour(128, 0, 128);
		inline constexpr Colour Brown = Colour(165, 42, 42);
		inline constexpr Colour SkyBlue = Colour(135, 206, 235);
	}
}