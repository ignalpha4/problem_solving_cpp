import requests
from bs4 import BeautifulSoup
import json

# Send an HTTP POST request to the website to get the plot data
url = 'https://mahabhunakasha.mahabhumi.gov.in/27/loadVillage.jsp'
data = {
    'state': 'Maharashtra',
    'category': 'rural',
    'district': '31',
    'taluka': '04',
    'village': '273100040380600000',
    'mapType': 'village map'
}

# Disable SSL certificate verification
requests.packages.urllib3.disable_warnings()

# Make the request and parse the response
response = requests.post(url, data=data, verify=False)
soup = BeautifulSoup(response.content, 'html.parser')

# Find the plot numbers
plot_numbers = ['417', '418', '42', '420']  # Replace with the actual plot numbers

# Create a list to store the plot data
plot_data = []

# Process each plot number
for plot_number in plot_numbers:
    # Update the plot number in the data payload
    data['plotno'] = plot_number

    # Make a new request for the specific plot number
    response = requests.post(url, data=data, verify=False)
    soup = BeautifulSoup(response.content, 'html.parser')

    # Find the content displayed for the plot
    plot_content = soup.find('div', class_='infoContainer')
    if plot_content:
        formatted_content = ""
        for div in plot_content.find_all('div', recursive=False):
            if div.text.strip() == "---------------------------------":
                formatted_content += "\n"
            else:
                formatted_content += div.text.strip() + "\n"
        
        # Append the plot data to the list
        plot_data.append({
            'plotNo': plot_number,
            'villageNo': '63',  # Replace with the actual village number
            'info': formatted_content
        })

# Convert the plot data to JSON format
json_data = json.dumps(plot_data, indent=4, ensure_ascii=False)

# Write the JSON data to a text file
with open('output.json', 'w', encoding='utf-8') as file:
    file.write(json_data)
