# from matplotlib.pyplot import text
from click import get_text_stream
from pyparsing import Regex
import requests
import re
from bs4 import BeautifulSoup
import soupsieve
url = "http://cs.qau.edu.pk/faculty.php"

EMAIL_REGEX = r"([-!#-'*+/-9=?A-Z^-~]+(\.[-!#-'*+/-9=?A-Z^-~]+)*|\"([]!#-[^-~ \t]|(\\[\t -~]))+\")@([-!#-'*+/-9=?A-Z^-~]+(\.[-!#-'*+/-9=?A-Z^-~]+)*|\[[\t -Z^-~]*])"
PHONE_REGEX = r"(\+92[-])?(\d{2})[-]?(\d{4})[ ]?(\d{4})"
r = requests.get(url)

for re_match in re.findall(EMAIL_REGEX, r.text):
    print(re_match)
