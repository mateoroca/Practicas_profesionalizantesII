from Player import Player


class VLC(Player):
  def __init__(self):
       super().__init__()
   
  def open(self,filePath):
    self.isOpen   = True
    print("The audiofile: "+filePath+"is open")
  
  def play(self):
    if( self.isOpen ): 
            self.isPlaying = True
            print( "The audiofile is playing.")

  def stop(self):
    if(self.isPlaying):
            self.isPlaying = False
            print("The audiofile is stopped.")

  def setVolume(self,value):
            self.volume = value
            print("The volume value is: ")
            print(value)


#------------------------------------------------------------------------------------------

class Winamp(Player):
    def __init__():
        super().__init__()

    def open(self, filePath):
        self.isOpen = True
        print( "The audiofile: " , filePath , " is open." )




def main():
    
    
    vlcPlayer = VLC
 
    vlcPlayer.open(VLC,"./resources/orchestral.ogg")
    vlcPlayer.play(VLC)
    vlcPlayer.stop(VLC)
    vlcPlayer.setVolume(VLC,1)

    print("\n\n")

    winamp = Winamp

    winamp.open(Winamp,"./resources/orchestral.ogg")
    winamp.play(Winamp)
    winamp.stop(Winamp)
    winamp.setVolume(Winamp,5)
 
    

if __name__ == '__main__':
    main()
