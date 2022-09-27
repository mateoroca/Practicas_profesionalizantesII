






abstract class Player
{
        protected   boolean  isPlaying;
        private     float    volume;
        protected   boolean  isOpen;


     public abstract void open(String filePath);
    
     public void play()
        {


            if(isOpen) isPlaying = true;
            System.out.println("The audiofile is playing.");
      

        }

     public void stop()
        {


            if(isPlaying) isPlaying = false;
            System.out.println("The audiofile is stopped.");


        }
  
   public void setVolume(float value)
        {


            volume = value;
            System.out.println("The volume value is: "+volume);
         

        }
}

////////////////////////////////////////////////////////////////////////////


class VLC extends Player
{
   
     private float pitch;



public VLC()
       {

           isOpen     = false;
           isPlaying  = false;
         
           setVolume(10);

     
       }

 public void open(String filePath)
       {
         

          isOpen = true;
          System.out.println("The audiofile: "+filePath+" is open.");


       }
 
  public void setPitch(float value)
       {


          pitch = value;
          System.out.println("The pitch value is:"+pitch);


       }
}



////////////////////////////////////////////////////////////////////////////////////////////

class Winamp extends Player
{
    public void open(String filePath)
    {
          isOpen = true;
          System.out.println("The audiofile: "+filePath+" is open.");
    }
}



///////////////////////////////////////////////////////////////////////////////////////////
  public class Main
  {
        public  static void main(String args[])
          {
            
  
            
  
            VLC vlcPlayer = new VLC();

                  vlcPlayer.open("./resources/orchestral.ogg");
                  vlcPlayer.play();
                  vlcPlayer.setVolume(13);

                  System.out.println(System.lineSeparator());
            
            Winamp winampPlayer = new Winamp();

                   winampPlayer.open("./resources/orchestral.ogg");
                   winampPlayer.play();
                   winampPlayer.setVolume(9);      
                  
           }
  
   }