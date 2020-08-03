![Image of Yaktocat](https://github.com/taufiqwahid/ESP32-with-Blynk-and-Google-Asistant/blob/master/Google%20Asistant.jpg)


# ESP32-with-Blynk-and-Google-Asistant
ESP32 with Blynk and Google Asistant
**BLYNK**

* Download the Blynk app for iOS or Android according to your device
* Create your Blynk Account
* Tap on create a New Project
* Now Choose Your Hardware ie Nodemcu for this case (Blynk Supported Hardware ) and then select type of connection.
* Now copy your Auth Token (it is a unique identifier which is needed to connect your hardware to your smartphone) or you can mail the token to your mail address

**IFTT**

Now for controlling the appliances over the internet using Google Assistant you need to the following steps.

* Go to website of IFTTT ( https://ifttt.com )

* Signup using your Google account ( same google account that you are using with the Google Assistant )

* Once you are signed in, click on "My Applets" and select "New Applet"( by this we will trigger to turn on the light)

* Now click on "this" and in the search bar search for "Google Assistant" and tap on it

* Once you are in click on connect and give permission

* Now select the trigger, here i selected the first option "Say a simple phrase" and on the next page do as shown in the above image. the command will be given by you to the assistant.

* Now the trigger is created then select "that"

* Search for "Webhooks" and connect. Then fill the data according to the above image ``URL : " https://188.166.206.43/Auth Token/update/D0 "``

	``(D0 is the pin D3 of Nodemcu equivalent to arduino uno's pin out) for turning on use 		["1"]``

* Now hit "Finish"

* Now create another new applet in the same way described above to turn off the light. The process is same as above

	**``click on "My Applets" and select "New Applet" → click on "this" → search for "Google Assistant" → select the trigger → "Say a simple phrase" and on the next page do as shown in the above image → the trigger is created → select "that" → Search for "Webhooks" and connect. Then fill the data according to the above image URL : " https://188.166.206.43/Auth Token/update/D0 " (D0 is the pin D3 of Nodemcu equivalent to arduino uno's pin out) for turning off use ["0"]→ Now hit "Finish"``**
  
  **Follow Tutotorial [Tutorial](https://www.instructables.com/id/GOOGLE-ASSISTANT-CONTROLLED-SWITCH-USING-NODEMCU/)**
