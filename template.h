
#define HEAD(head) "<head>" head "</head>"
#define BODY(body) "<body>" body "</body>"

#define HTML(title, page) \
"<html lang=\"en\">" \
  "<head>" \
    "<meta charset=\"utf-8\">" \
    "<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">" \
    "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">" \
    "<!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags -->" \
    "<meta name=\"description\" content=\"\">" \
    "<meta name=\"author\" content=\"\">" \
    "<link rel=\"icon\" href=\"../../favicon.ico\">" \
    "<title>" title "</title>" \
    "<!-- Bootstrap core CSS -->" \
    "<link rel=\"stylesheet\" href=\"//maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap.min.css\">" \
    "<link rel=\"stylesheet\" href=\"//maxcdn.bootstrapcdn.com/bootstrap/3.3.4/css/bootstrap-theme.min.css\">" \
    "<!-- HTML5 shim and Respond.js for IE8 support of HTML5 elements and media queries -->" \
    "<!--[if lt IE 9]>" \
      "<script src=\"//oss.maxcdn.com/html5shiv/3.7.2/html5shiv.min.js\"></script>" \
      "<script src=\"//oss.maxcdn.com/respond/1.4.2/respond.min.js\"></script>" \
    "<![endif]-->" \
  "</head>" \
  "<body>" \
    page \
    "<!-- Bootstrap core JavaScript" \
    "================================================== -->" \
    "<!-- Placed at the end of the document so the pages load faster -->" \
    "<script src=\"//ajax.googleapis.com/ajax/libs/jquery/1.11.2/jquery.min.js\"></script>" \
    "<script src=\"//maxcdn.bootstrapcdn.com/bootstrap/3.3.4/js/bootstrap.min.js\"></script>" \
  "</body>" \
"</html>"

#define PAGE(title, content) \
    "<nav class=\"navbar navbar-default navbar-static-top\">" \
      "<div class=\"container\">" \
        "<div class=\"navbar-header\">" \
          "<button type=\"button\" class=\"navbar-toggle collapsed\" data-toggle=\"collapse\" " \
            "data-target=\"#navbar\" aria-expanded=\"false\" aria-controls=\"navbar\">" \
            "<span class=\"sr-only\">Toggle navigation</span>" \
            "<span class=\"icon-bar\"></span>" \
            "<span class=\"icon-bar\"></span>" \
            "<span class=\"icon-bar\"></span>" \
          "</button>" \
          "<a class=\"navbar-brand\" href=\"/\">poolfinder.ca</a>" \
        "</div>" \
        "<div id=\"navbar\" class=\"collapse navbar-collapse\">" \
          "<ul class=\"nav navbar-nav navbar-right\">" \
            "<li><a href=\"/\">Change Location</a></li>" \
          "</ul>" \
        "</div><!--/.nav-collapse -->" \
      "</div>" \
    "</nav>" \
    "<div class=\"container\">" \
      "<h1>" title "</h1>" \
      content \
    "</div><!-- /.container -->"

#define TITLE(title) "<title>" title "</title>"
#define H1(h1) "<h1>" h1 "</h1>"
#define SMALL(small) "<small>" small "</small>"

void page(FILE *stream, const char *title, const char *subtitle,
	const char *body);

