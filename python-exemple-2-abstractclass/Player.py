

from abc import ABC, abstractmethod


class Player(ABC):
      def __init__(self):
        _isOpen   = False
        _isPlaying = False
        _volume   = 0.0

      @abstractmethod
      def open(self,fipePath):
        pass
      
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

         
      
     



     