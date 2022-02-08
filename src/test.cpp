#include <iostream>
#include <list>
#include <vector>

class youtubeChannel { // user-defined data type (to represent a real life object)
	public:
		std::string Name;
		std::string OwnerName;
		int SubscribersCount;
		std::list<std::string> PublishedVideoTitles;
};

int main() {

	youtubeChannel ytChannel;
	ytChannel.Name = "CinnamonToastKen";
	ytChannel.OwnerName = "Ken";
	ytChannel.SubscribersCount = 5000000;
	ytChannel.PublishedVideoTitles = {"90 days fiance Video 1", "90 days fiance Video 2", "90 days days fiance Video 3"};

	return 0;
}
