#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *browser_new_tab = "chromium --new-tab";
  if(argc == 1) { // open the wiki homepage if no arguments are recieved
    char *open_wiki_home_url = malloc((sizeof(char) * strlen(browser_new_tab)) + 45);
    strcpy(open_wiki_home_url, browser_new_tab);
    strcat(open_wiki_home_url, " https://terraria.wiki.gg/wiki/Terraria_Wiki");
    system(open_wiki_home_url);
    free(open_wiki_home_url);
  }
  else { // if arguments are recieved open the wiki search page using arguments as the search query
    char *open_wiki_search_url = malloc(sizeof(char) * (strlen(browser_new_tab) + 44));
    strcpy(open_wiki_search_url, browser_new_tab);
    strcat(open_wiki_search_url, " https://terraria.wiki.gg/index.php?search=");
    if(argc == 2) {
      open_wiki_search_url = realloc(open_wiki_search_url, sizeof(char) * (strlen(open_wiki_search_url) + strlen(argv[1]) + 1));
      strcat(open_wiki_search_url, argv[1]);
      system(open_wiki_search_url);
      free(open_wiki_search_url);
    }
    else {
      for(int i = 1; i <= argc - 1; i += 1) {
        if(i != argc - 1) open_wiki_search_url = realloc(open_wiki_search_url, sizeof(char) * (strlen(open_wiki_search_url) + strlen(argv[i]) + 2));
        else open_wiki_search_url = realloc(open_wiki_search_url, sizeof(char) * (strlen(open_wiki_search_url) + strlen(argv[i]) + 1));
        strcat(open_wiki_search_url, argv[i]);
        if(i != argc - 1) strcat(open_wiki_search_url, "+");
      }
      system(open_wiki_search_url);
      free(open_wiki_search_url);
    }
  }
  return 0;
}
