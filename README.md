# SolidGame (Working Title): Easy Physical Media for your Games.
Hi, I'm George and although I have never used physical media for games, I've craved it. My goal for this project is to create an easy way for anyone to make phyisical media for their games.  
**Current Stage:** Finished the prototype for the floppy disk 3d model.  
**Next step:** Print and test the floppy disk prototype with NFC stickers  

# About / Specifications
Likely all of these will be using NFC (at least to start), so you will need the following hardware
- NFC tags (I'm currently using NTAG213)
- NFC Reader (Currently using RC522)
- Arduino or other microcontroller (I am prototyping with Leonardo, however will switch to smaller ESP or custom PCB)

You will need basic electronics knowledge, likely no programming you would need to do.  
~~In terms of software, I am currently prototyping using [Playnite](https://playnite.link/), an open source game launcher + a listening python script, however I am considering making my own simple software for ease,~~ **UPDATE: I am using just a python script and currently the nfc tags store the steam AppID, which then launches the game. I am working on getting it to work with any launcher** and you could use basically anything. The main thing this project is is the 3d models and art, as any software can really be used.

# Roadmap:
| Media types | Progress |
| --- | --- |
| L Floppy disk | Proto done |
| S Floppy disk | Not started |
| Cassete | Not started |
| NES Cartridge | Not started |

| Other | Progress |
| --- | --- |
| NFC Reader | Not started |
| Game opening automation | Not started |
| Cassete spinning | Not started |
| Sticker designs for printing | Not started |
| Easy way to make your own designs | Not started |
| Floppy disk storage | Not started |

# Features (Upcoming)
- Various media types, expect floppy disks, cassetes, NES cartridges and I'm sure I'll come up with something else.
- Either NFC or physical data/pogo pins to detect
- Smart Home software config to launch games\*
- Easy designing software  
\* Havn't decided what yet, however it would be easy to use any smart home software

# Attributions / Links
[I made physical media for my PC Games - Haggis on Toast](https://www.youtube.com/watch?v=G7InIXoqAJQ) - Main inspiration
