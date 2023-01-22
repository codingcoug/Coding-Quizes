# import os
# import glob
# import pydub

# from pydub import AudioSegment

# def merge_mp3_files(path, output_file):
#     # Get a list of mp3 files in the specified path
#     mp3_files = glob.glob(os.path.join(path, "*.mp3"))
#     # Sort mp3 files based on the file names
#     mp3_files.sort()
#     sound = AudioSegment.empty()
#     for mp3_file in mp3_files:
#         print(mp3_file)
#         sound += AudioSegment.from_mp3(mp3_file)
#     sound.export(output_file, format="mp3")

# # specify the path and the name of the output file
# path = "H:\\1 TB HD Backup\Audio Books\\1 Sort Through\\A.A. Milne - Winnie the Pooh (1 of 3)\\"
# os.chdir(path)
# output_file = "Winnie the Pooh.mp3"
# merge_mp3_files(path, output_file)

import os
import glob
from pydub import AudioSegment

def format_path(path: str) -> str:
    return (path.replace("\\1", "\\\\1")).replace("\\", "\\\\") + "\\"

def merge_mp3_files(path):
    # Get the parent folder name
    parent_folder = os.path.basename(os.path.dirname(path))
    # Get a list of mp3 files in the specified path
    mp3_files = glob.glob(os.path.join(path, "*.mp3"))
    # Sort mp3 files based on the file names
    mp3_files.sort()
    sound = AudioSegment.empty()
    for mp3_file in mp3_files:
        sound += AudioSegment.from_mp3(mp3_file)
    # Use the parent folder name as the output file's name
    output_file = parent_folder + ".mp3"
    sound.export(output_file, format="mp3")



# specify the path
path = "H:\One TB HD Backup\Audio Books\_AA Sort Through\J.R.R. Tolkien - The Lord Of The Rings"
path = format_path(path)
#print(path)
os.chdir(path)
merge_mp3_files(path)