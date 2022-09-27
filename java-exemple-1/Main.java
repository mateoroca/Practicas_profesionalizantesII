


class AudioPlayer
{ 
  
   private boolean isOpen;
   private boolean isPlaying;
   private float volume;

  public AudioPlayer()
  {
      
  }

   public void open(String filePath)
   {
       isOpen = true;
       System.out.println("The audiofile: "+filePath+"is open" );
   }
   
  public void play()
   {
     if(isOpen) isPlaying = true;
     System.out.println("The audiofile is playing." );
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



class VLC extends AudioPlayer
{
   
  private float pitch;

  public VLC()
  {
     setVolume(10);

  }
  public void setPitch(float value)
  {
    pitch = value;
    System.out.println("The pitch value is:"+pitch);
  }
 

}













public class Main
{
      public  static void main(String args[])
        {
          AudioPlayer player = new AudioPlayer();
                player.open("./resources/orchestral.ogg");
                player.play();
                player.setVolume(4);

          System.out.println(System.lineSeparator());

          VLC vlcPlayer = new VLC();
                vlcPlayer.open("./resources/orchestral.ogg");
                vlcPlayer.play();
                vlcPlayer.setVolume(13);
                
         }

 }






