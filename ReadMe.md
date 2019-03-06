# ofxCenteredTrueTypeFont

Simple ofTrueTypeFont subclass that allows to draw text centered around a point

Public methods are:  

```cpp
ofVec2f getOffset( string s );
void drawStringCentered(string s, float x, float y, bool asVector = false);
void drawStringCentered(string s, ofVec2f pos, bool asVector = false);
void drawCenteredBoundingBox(string s, float x, float y, float padding = 0);
void drawCenteredBoundingBox(string s, ofVec2f pos, float padding = 0);
void drawStringCenteredVertically(string s, float x, float y);
void drawStringCenteredVertically(string s, ofVec2f pos);
void drawStringCenteredHorizontally(string s, float x, float y);
void drawStringCenteredHorizontally(string s, ofVec2f pos);
```
