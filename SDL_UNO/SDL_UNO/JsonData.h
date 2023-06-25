#include "JsonParser.h"
using json = nlohmann::json;

static class JsonData {
public:
	static json GetUNOCardJsonData() {
	  return json::parse(R"({
			"rowCount": 8,
			"colCount": 9,
			"width": 34,
			"height": 50,
			"uno-cards": {
				"uno-yellow-cards": [
					{
						"number": 0,
						"index": 2
					},
					{
						"number": 1,
						"index": 6
					},
					{
						"number": 2,
						"index": 9
					},
					{
						"number": 3,
						"index": 14
					},
					{
						"number": 4,
						"index": 18
					},
					{
						"number": 5,
						"index": 22
					},
					{
						"number": 6,
						"index": 26
					},
					{
						"number": 7,
						"index": 30
					},
					{
						"number": 8,
						"index": 32
					},
					{
						"number": 9,
						"index": 36
					}
				],
				"uno-red-cards": [
					{
						"number": 0,
						"index": 1
					},
					{
						"number": 1,
						"index": 5
					},
					{
						"number": 2,
						"index": 10
					},
					{
						"number": 3,
						"index": 13
					},
					{
						"number": 4,
						"index": 17
					},
					{
						"number": 5,
						"index": 21
					},
					{
						"number": 6,
						"index": 25
					},
					{
						"number": 7,
						"index": 29
					},
					{
						"number": 8,
						"index": 31
					},
					{
						"number": 9,
						"index": 35
					}
				],
				"uno-green-cards": [
					{
						"number": 0,
						"index": 3
					},
					{
						"number": 1,
						"index": 7
					},
					{
						"number": 2,
						"index": 11
					},
					{
						"number": 3,
						"index": 15
					},
					{
						"number": 4,
						"index": 19
					},
					{
						"number": 5,
						"index": 23
					},
					{
						"number": 6,
						"index": 27
					},
					{
						"number": 7,
						"index": 31
					},
					{
						"number": 8,
						"index": 33
					},
					{
						"number": 9,
						"index": 37
					}
				],
				"uno-blue-cards": [
					{
						"number": 0,
						"index": 4
					},
					{
						"number": 1,
						"index": 8
					},
					{
						"number": 2,
						"index": 12
					},
					{
						"number": 3,
						"index": 16
					},
					{
						"number": 4,
						"index": 20
					},
					{
						"number": 5,
						"index": 24
					},
					{
						"number": 6,
						"index": 28
					},
					{
						"number": 7,
						"index": 32
					},
					{
						"number": 8,
						"index": 34
					},
					{
						"number": 9,
						"index": 38
					}
				],
				"uno-wildcard-cards": {
					"skip-cards": [
						{
							"color": "yellow",
							"index": 39
						},
						{
							"color": "blue",
							"index": 37
						},
						{
							"color": "green",
							"index": 40
						},
						{
							"color": "red",
							"index": 38
						}
					],
					"reverse-cards": [
						{
							"color": "yellow",
							"index": 46
						},
						{
							"color": "blue",
							"index": 48
						},
						{
							"color": "green",
							"index": 47
						},
						{
							"color": "red",
							"index": 45
						}
					],
					"draw-2-cards": [
						{
							"color": "yellow",
							"index": 50
						},
						{
							"color": "blue",
							"index": 52
						},
						{
							"color": "green",
							"index": 51
						},
						{
							"color": "red",
							"index": 49
						}
					],
					"wildcard-4": [
						{
							"index": 70
						}
					],
					"wildcard": [
						{
							"index": 65
						}
					]
				}
			}
		})");
	}
};

