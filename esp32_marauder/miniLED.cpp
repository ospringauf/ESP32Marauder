#include "miniLED.h"

void miniLED::RunSetup()
{
  pinMode(MINI_LED_PIN, OUTPUT);

  if (!settings_obj.loadSetting<bool>("EnableLED"))
  {
    digitalWrite(MINI_LED_PIN, LOW);
    return;
  }

  delay(50);

  digitalWrite(MINI_LED_PIN, HIGH);
  delay(500);
  digitalWrite(MINI_LED_PIN, LOW);
  delay(250);
  digitalWrite(MINI_LED_PIN, HIGH);
  delay(500);
  digitalWrite(MINI_LED_PIN, LOW);
  delay(250);
  digitalWrite(MINI_LED_PIN, HIGH);
  delay(500);
  digitalWrite(MINI_LED_PIN, LOW);
}

void miniLED::attackLED()
{
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;

  digitalWrite(MINI_LED_PIN, LOW);
  delay(300);
  digitalWrite(MINI_LED_PIN, HIGH);
}

void miniLED::sniffLED()
{
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;

  digitalWrite(MINI_LED_PIN, LOW);
  delay(300);
  digitalWrite(MINI_LED_PIN, HIGH);
}

void miniLED::offLED()
{
  if (!settings_obj.loadSetting<bool>("EnableLED"))
    return;

  digitalWrite(MINI_LED_PIN, LOW);
}

void miniLED::main()
{
  // do nothing
}