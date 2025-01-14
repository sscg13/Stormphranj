/*
 * Stormphranj, a UCI shatranj engine
 * Copyright (C) 2024 Ciekce
 *
 * Stormphranj is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Stormphranj is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Stormphranj. If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "types.h"

#include "search.h"

namespace stormphranj::bench
{
#ifdef SPJ_PGO_PROFILE
	constexpr i32 DefaultBenchDepth = 14;
#else
	constexpr i32 DefaultBenchDepth = 20;
#endif

	auto run(search::Searcher &searcher, i32 depth = DefaultBenchDepth) -> void;
}
