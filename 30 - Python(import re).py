import re
text="The rain in spain"
x=re.findall("ai",text)
print(x)
x=re.search("\s",text)
print("the first white-space : ",x.start())
x=re.sub("\s","9",text)
print(x)
x=re.search(r"\bs\w+",text)
print(x.span())
string="123 245,3143 21345,1342 1112"
pattern="{\d{3} {\d{2}}"
match=re.findall(pattern,string)
if match:
    print(match.group())
else:
    print("...NOT AVAILABLE...")
