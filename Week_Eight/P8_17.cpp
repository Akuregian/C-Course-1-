#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

/*
    Program will covert a .bmp image into grayscale
    using specific information gathered from the 24 bit string (4 total)
*/


using namespace std;

/* 
Gets an integer from the binary stream
@param fstream& stream the stream
@param int offset
@return the integer thats starts at the given offset
*/
int get_int(fstream& stream, int offset)
{
    stream.seekg(offset);
    int results = 0;
    int base = 1;
    for(int i = 0; i < 4;i++) {
        results = results + stream.get() * base;
        base = base * 256;
    }
    return results;
}

/*
Process the Pixel and change the color of images
@param blue is the blue pixel
@param red is the red pixel
@param green is the green pixel
*/
void processPixel(int& blue, int& green, int& red) 
{  
    int gray = (0.3 * red + 0.59 * green + 0.11 * blue);
    red = gray;
    green = gray;
    blue = gray;
}

int main()
{
    // load in the queen mary BMP image
    cout << "Enter the file name: ";
    string fileName;
    cin >> fileName;

    fstream queenMary;
    queenMary.open(fileName, ios::in | ios::out | ios::binary);
    if(queenMary.fail()) 
    {
        cout << "File Not Found" << endl;
        return 0;
    }

    // get the image dimensions
    int file_size = get_int(queenMary, 2); // Size of the file
    int starting = get_int(queenMary, 10); // startin point (bottom right)
    int width = get_int(queenMary, 18); // width of the image
    int height = get_int(queenMary, 22); // height of the image

    //scan lines must occupy multiples of 4 bytes
    int scanLine = width * 3;
    int padding = 0;
    if(scanLine % 4 != 0) 
    {
        padding = 4 - scanLine % 4;
    }

    if(file_size != starting + (scanLine + padding) * height) 
    {
        cout << "Not a 24-bit true color image" << endl;
        return 1;
    }

    //the position to start at
    int pos = starting;

    for(int i = 0; i < width; i++) // for each scan line
    {
        for(int j = 0; j < height; j++) // for each pixel
        {
            queenMary.seekg(pos);
            int blue = queenMary.get();
            int green = queenMary.get();
            int red = queenMary.get();

            // Process the Pixel
            for(int i = 0; i < 3; i++) {
                processPixel(blue, green, red);
            }
            // go back to the starting point of the image
            queenMary.seekg(pos);

            // write the new pixels
            queenMary.put(blue);
            queenMary.put(green);
            queenMary.put(red);

            pos = pos + 3;

        }
        // skips the padding
        queenMary.seekp(padding, ios::cur);
        pos = pos + padding;
    }

    return 0;
}