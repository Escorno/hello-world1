#include <stdio.h>
#include <curl/curl.h>

int main(void)
{
  CURL *curl;
  CURLcode res;
  
  curl=curl_easy_init();
  if(curl){
    curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
    if(res!=CURLE_OK)
       fprintf(stderr,"curl_easy-perform() failed:%s\n",
              curl_easy_strerror(res));
        curl_easy_cleanup(curl);
        }
        return 0;
  }
