


class AudioPlayer:
  def __init__(self):
    self.isOpen    = False
    self.isPlaying = False
    self.volume    = 0.0
    
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
                


