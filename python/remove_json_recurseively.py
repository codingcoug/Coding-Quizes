import os

def delete_json_files(directory):
    for filename in os.listdir(directory):
        filepath = os.path.join(directory, filename)
        if os.path.isdir(filepath):
            delete_json_files(filepath)
        elif filepath.endswith(".json"):
            print(filepath)
            os.remove(filepath)

start_directory = "H:\\1 TB HD Backup\\Audio Books"
delete_json_files(start_directory)




