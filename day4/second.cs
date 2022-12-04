using System;

namespace advent_Day4_part2
{
	class Program
	{
		static void Main(string[] args)
		{
			string input;
			string[] split;
			int beginFirst, endFirst, beginSecond, endSecond;
			int result = 0;
			do
			{
				input = Console.ReadLine();
				if(string.IsNullOrEmpty(input))
				{
					break;
				}

				split = input.Split(',', '-');

				beginFirst = Int32.Parse(split[0]);
				endFirst = Int32.Parse(split[1]);
				beginSecond = Int32.Parse(split[2]);
				endSecond = Int32.Parse(split[3]);

				if((beginFirst <= beginSecond && beginSecond <= endFirst) ||
					(beginFirst <= endSecond && endSecond <= endFirst) ||
					(beginSecond <= beginFirst && beginFirst <= endSecond) ||
					(beginSecond <= endFirst && beginFirst <= endSecond))
				{
					result++;
				}
			} while (true);

			Console.WriteLine(result);
		}
	}
}
