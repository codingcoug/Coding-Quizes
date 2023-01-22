import os

os.chdir("H:\\1 TB HD Backup\\Audio Books")
for filename in os.listdir():
    if filename.endswith(".mp3"):
        folder_name = filename[:-4]
        if not os.path.exists(folder_name):
            os.mkdir(folder_name)
        os.rename(filename, f"{folder_name}/{filename}")