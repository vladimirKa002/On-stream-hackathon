using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneChanger : MonoBehaviour
{
	private static Google.XR.Cardboard.XRLoader xrloader;

	public static void ChangeScene(string sceneName)
	{
		if (sceneName == "HelloCardboard" || sceneName == "HelloCardboard2" || sceneName == "HelloCardboard_test")
		{
			System.Threading.Thread.Sleep(5000);

			xrloader = new Google.XR.Cardboard.XRLoader();
			SceneManager.LoadScene(sceneName);
			xrloader.Initialize();
			xrloader.Start();
		}
		else
		{
			xrloader.Stop();
			xrloader.Deinitialize();
			SceneManager.LoadScene(sceneName);
		}
	}
	public void Exit()
	{
		Application.Quit();
	}
}