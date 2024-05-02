#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_AMG88xx.h>
#include <git_revision.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Hello, world!");
  // Serial.printf("Git commit: %s, Remote REPO: %s\n" __GIT_COMMIT__, __GIT_REMOTE_URL__);
}

void loop()
{
}
