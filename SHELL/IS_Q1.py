import os 
#from unipath import Path

def get_directory(PATH):
	Dirs=os.listdir(PATH)
	print(PATH)
	for d in Dirs:
		print(d)


get_directory("~/Documents/GIT")
