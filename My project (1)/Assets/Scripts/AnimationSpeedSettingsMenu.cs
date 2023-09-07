[System.Serializable]
public class AnimationSpeedSettingsMenu 
{
    
    public float speedX;
    public float speedZ;
    public float speedCatch;

    public AnimationSpeedSettingsMenu(SetAnimationSpeed setAnimationSpeed)
    {
        speedX= setAnimationSpeed.speedX;
        speedZ= setAnimationSpeed.speedZ;
        speedCatch= setAnimationSpeed.speedCatch;
    }
}
