#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *browser_new_tab = "chromium --new-tab";
  char *wiki_home_url = "https://terraria.wiki.gg/wiki/Terraria_Wiki";
  char *wiki_search_url = "https://terraria.wiki.gg/index.php?search=";
  if(argc == 1) { // open the wiki homepage if no arguments are recieved
    char *open_wiki_home_url = malloc((sizeof(char) * strlen(browser_new_tab)) + 1 + strlen(wiki_home_url) + 1);
    strcpy(open_wiki_home_url, browser_new_tab);
    strcat(open_wiki_home_url, " ");
    strcat(open_wiki_home_url, wiki_home_url);
    system(open_wiki_home_url);
    free(open_wiki_home_url);
  }
  else { // if arguments are recieved concatenate them and search the wiki 
    int query_length = argc - 1;
    for(int i = 1; i <= argc - 1; i += 1) query_length += strlen(argv[i]);
    char *open_wiki_search_url = malloc(sizeof(char) * (strlen(browser_new_tab) + 1 + strlen(wiki_search_url) + query_length));
    strcpy(open_wiki_search_url, browser_new_tab);
    strcat(open_wiki_search_url, " ");
    strcat(open_wiki_search_url, wiki_search_url);
    for(int i = 1; i <= argc - 1; i += 1) {
      strcat(open_wiki_search_url, argv[i]);
      if(i != argc - 1) strcat(open_wiki_search_url, "+");
    }
    system(open_wiki_search_url);
    free(open_wiki_search_url);
  }
  return 0;
}
