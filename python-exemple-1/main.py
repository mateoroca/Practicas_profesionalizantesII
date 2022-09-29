from AudioPlayer import AudioPlayer



class VLC(AudioPlayer):
     def __init__(self):
          super().__init__()
          self.pitch = 0.0

     def setPitch(self,value):
          self.pitch = value
          print("The pitch value is:")
          print(self.pitch)
     
       

#-------------------------------------------------------------------------------------------

class Winamp(AudioPlayer):
    def __init__():
        super().__init__()

    def open(self, filePath):
        self.isOpen = True
        print( "The audiofile: " , filePath , " is open." )

#-------------------------------------------------------------------------------------------

def main():
    
    player = AudioPlayer
    
    player.open(AudioPlayer,"./resources/orchestral.ogg")
    player.play(AudioPlayer)
    player.stop(AudioPlayer)
    player.setVolume(AudioPlayer,3)

    print("\n\n")
    
    vclPlayer = VLC

    vclPlayer.open(VLC,"./resources/orchestral.ogg")
    vclPlayer.play(VLC)
    vclPlayer.stop(VLC)
    vclPlayer.setVolume(VLC,7)
    vclPlayer.setPitch(VLC,5.0)


    print("\n\n")

    winamp = Winamp

    winamp.open(Winamp,"./resources/orchestral.ogg")
    winamp.play(Winamp)
    winamp.stop(Winamp)
    winamp.setVolume(Winamp,5)

    

if __name__ == '__main__':
    main()