<?xml version='1.0' encoding='UTF-8' standalone='yes' ?>
<tagfile>
  <compound kind="class">
    <name>Buzzer</name>
    <filename>classBuzzer.html</filename>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>init</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>a713409c95042ee58de4e7d38d11dea04</anchor>
      <arglist>(Timer *timer)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setTone</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>a96d995d0781c8c417c5b4998ce02b03f</anchor>
      <arglist>(uint8_t midiTone)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>clearTone</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>aac0113b7573a035ec57d1e9b1b1fdfd0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static const uint8_t</type>
      <name>_FREQS</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>a957ebc90840fafb014b93d594d298b95</anchor>
      <arglist>[104]</arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static const uint8_t</type>
      <name>_PRESCALER</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>ad07f769b107c33a978b5e5c6188d07be</anchor>
      <arglist>[52]</arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static Timer *</type>
      <name>_TIMER</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>ad41a9257dec6c48a11dce9be83b34d46</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static uint8_t</type>
      <name>_currTone</name>
      <anchorfile>classBuzzer.html</anchorfile>
      <anchor>ad883cc0bfad5d64f5d0d16ade598000c</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>CAN</name>
    <filename>classCAN.html</filename>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>init</name>
      <anchorfile>classCAN.html</anchorfile>
      <anchor>aadeb7da442ad0b277cc9cfcb04f4618d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>terminate</name>
      <anchorfile>classCAN.html</anchorfile>
      <anchor>af4826a28e270dc9f765f0e4cf5f6ea99</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static uint16_t</type>
      <name>read</name>
      <anchorfile>classCAN.html</anchorfile>
      <anchor>a40ddfd9da907fbcbf56c014924c49982</anchor>
      <arglist>(uint8_t pos)</arglist>
    </member>
    <member kind="variable" protection="private" static="yes">
      <type>static bool</type>
      <name>active</name>
      <anchorfile>classCAN.html</anchorfile>
      <anchor>a5112d103b3ede0299ac4273b73f3bfd6</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Drive</name>
    <filename>classDrive.html</filename>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>init</name>
      <anchorfile>classDrive.html</anchorfile>
      <anchor>a3930fd2c5afdb05b14ff6658dbaaa92c</anchor>
      <arglist>(TimerChannelUsed tcuLeft, TimerChannelUsed tcuRight, uint8_t constLeft, uint8_t constRight)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setMovement</name>
      <anchorfile>classDrive.html</anchorfile>
      <anchor>a9af1ca10656809bcfbe32891d60c9d35</anchor>
      <arglist>(EngineMode mode, uint8_t power)</arglist>
    </member>
    <member kind="function" static="yes">
      <type>static void</type>
      <name>setRotation</name>
      <anchorfile>classDrive.html</anchorfile>
      <anchor>a9e21724703fbf9e3c3c9511c7308e517</anchor>
      <arglist>(DriveDir dir, uint8_t power)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Engine</name>
    <filename>classEngine.html</filename>
    <member kind="function">
      <type></type>
      <name>Engine</name>
      <anchorfile>classEngine.html</anchorfile>
      <anchor>a74c7c4f0a0ed96604b01137fed66a281</anchor>
      <arglist>(TimerChannelUsed tcu)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setPower</name>
      <anchorfile>classEngine.html</anchorfile>
      <anchor>a2c0cd968128630cafbc46cdbdd5a7162</anchor>
      <arglist>(EngineMode mode, uint16_t ocrNX)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setMode</name>
      <anchorfile>classEngine.html</anchorfile>
      <anchor>a447e763e5289efc9e1fadc19e2ffe9da</anchor>
      <arglist>(EngineMode mode)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>LED</name>
    <filename>classLED.html</filename>
    <member kind="function">
      <type></type>
      <name>LED</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a9e8e822e1705e73801e82f252de6a72c</anchor>
      <arglist>(PinPosition pinPos, Timer *timer)</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setColor</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a636af57b3f3c875270ad2d065c7d6d49</anchor>
      <arglist>(volatile LedColor color)</arglist>
    </member>
    <member kind="function">
      <type>LedColor</type>
      <name>getColor</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>afaf3465c8684ef037a8f13984754a607</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>PinPosition</type>
      <name>getPinPos</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>af3ce283ab86c179159c5a5e96b788fae</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>void</type>
      <name>setTimer</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a9175a1f998647a4c1ad3cd8b4a76855b</anchor>
      <arglist>(Timer *timer)</arglist>
    </member>
    <member kind="function">
      <type>Timer *</type>
      <name>getTimer</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a5805bffef714f740b5ef7cb9f736dd2e</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>_setColorAmber</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a7da30202fbf608e0e13599d22a8aef11</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" protection="private">
      <type>void</type>
      <name>_unsetColorAmber</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a2187df24f285f54afac7d62b25979d50</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>Timer *</type>
      <name>_timer</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>ae8141d4e6a2242c4834c5624eb422a3a</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>const PinPosition</type>
      <name>_pinPos</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a654f972bf2ebeb160b6ef635d9702e71</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>volatile LedColor</type>
      <name>_color</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a42404fecea8cadb717352f32d125d6e1</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>const uint8_t</type>
      <name>_GREEN</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a131d5ce552a39de92e8ac9c8e78cd5f0</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>const uint8_t</type>
      <name>_RED</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a02ca7c71b34d5b4259ca18bfe1b64134</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>const uint8_t</type>
      <name>_THIS_MASK</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>a1e8bf98add935f5faa5d4e6f81efe155</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>volatile uint8_t *const</type>
      <name>_PORT</name>
      <anchorfile>classLED.html</anchorfile>
      <anchor>aeb0fec4d0df2a56889a148de41e7196f</anchor>
      <arglist></arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>RAM</name>
    <filename>classRAM.html</filename>
  </compound>
  <compound kind="class">
    <name>Timer</name>
    <filename>classTimer.html</filename>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setPrescale</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>af5a4a0eaa50984cdced56b382b32059f</anchor>
      <arglist>(Prescale01 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>aa786b48aa193d7cb0b6fe35324f48a66</anchor>
      <arglist>(WGMode mode)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNA</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a8c67283f4a86e470a650f1cc54602ea9</anchor>
      <arglist>(ComNX comNa)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNB</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a7686b10e91011b2625cfd33e77804c5c</anchor>
      <arglist>(ComNX comNb)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNA</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a231b5a34407ea28ba119dc842e356d96</anchor>
      <arglist>(uint16_t ocrNa)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNB</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>adcf07b11d8fbd8dfc1a9fd033bf95f8d</anchor>
      <arglist>(uint16_t ocrNb)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setTcntN</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a16fa0819e04fa878f90a1e43cf682942</anchor>
      <arglist>(uint16_t tcntN)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOVFI</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a6b422ebe3ae6af89360048260ed005c4</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIA</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a816f8812a73c475e48368b73fefd83a8</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIB</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a636b98685e66c546da6e9684d03948e3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOVFI</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>ad49c0e547e2671e09ab79ec8908a9325</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIA</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a1d6396b63c38906d53a5e89d56e93d9d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIB</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a7a553c99b1ae0e4574fc0e7133f5a6ee</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function">
      <type>volatile uint16_t</type>
      <name>getAmberLeds</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a99854078a107fe95345bf875e7262b29</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="variable" protection="private">
      <type>ComNX</type>
      <name>_comNa</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a20151a5652a9b6cc196fd05fbf0dff54</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>ComNX</type>
      <name>_comNb</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>a24b0b2daf444641545e7d9a6d7f82f70</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>volatile uint16_t</type>
      <name>_amberLeds</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>af8e2e9fcf78f0da47a2dfa9da7d4a50b</anchor>
      <arglist></arglist>
    </member>
    <member kind="variable" protection="private">
      <type>uint8_t</type>
      <name>_nAmberLeds</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>ae71f77eb165bfff9db56c721440fd44f</anchor>
      <arglist></arglist>
    </member>
    <member kind="friend" protection="private">
      <type>friend void</type>
      <name>switchAmberLedsColor</name>
      <anchorfile>classTimer.html</anchorfile>
      <anchor>aae869a1311a1e5ec9e0b8fdbd0e94c5d</anchor>
      <arglist>(Timer *timer)</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Timer0</name>
    <filename>classTimer0.html</filename>
    <base>Timer</base>
    <member kind="function">
      <type></type>
      <name>Timer0</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a3894407feb938407f7356fc07ed2f73c</anchor>
      <arglist>(Prescale01 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setPrescale</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a6f57a83a0f06294150ab768da1a1049f</anchor>
      <arglist>(Prescale01 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a586bb14709b01481ad0fda6cc6e13b28</anchor>
      <arglist>(WGMode mode0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNA</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>af09fa384b0188a5097b7798cf866d426</anchor>
      <arglist>(ComNX com0a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNB</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>adb6a55fcf4a57cf51a869589f9aefc64</anchor>
      <arglist>(ComNX com0b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNA</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a38b4ed01af9dbb2e58464c876c7fbb7e</anchor>
      <arglist>(uint16_t ocr0a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNB</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a1a97bbbf487e2d710a9b1739a2b86d9d</anchor>
      <arglist>(uint16_t ocr0b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setTcntN</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a1d0fb0749964b0eade9f7a321c98a9c4</anchor>
      <arglist>(uint16_t tcnt0)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOVFI</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a5a4905a2b9b7a55a6fb534e6bb6906ad</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIA</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a9998c39d2a5cc4c07e2b7455f95b68c3</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIB</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>a6e0ab947139d763d986ce2d985c32f59</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOVFI</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>ac8f02c589769e187a18e2c82fd1dcd84</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIA</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>aef03dcd6ea400f1e576644e27763b847</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIB</name>
      <anchorfile>classTimer0.html</anchorfile>
      <anchor>aa961406021ed7a507c1b3bc7c0946283</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Timer1</name>
    <filename>classTimer1.html</filename>
    <base>Timer</base>
    <member kind="function">
      <type></type>
      <name>Timer1</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>afd1f7af566d5bea438e87d099b34e266</anchor>
      <arglist>(Prescale01 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setPrescale</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a07df7b06f99c381b33bd02130a94bd06</anchor>
      <arglist>(Prescale01 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a724a211dd5f0f1661a50779c0c5069b1</anchor>
      <arglist>(WGMode mode1)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNA</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>abf19f147cda5f7eff462fd110e6f5838</anchor>
      <arglist>(ComNX com1a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNB</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a8be9a6e193e2bae5d42552e900241815</anchor>
      <arglist>(ComNX com1b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNA</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a44a01457ca49c1d9e03b2ec0e88858c0</anchor>
      <arglist>(uint16_t ocr1a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNB</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a3a199165fee5167563698f3841f0a3bf</anchor>
      <arglist>(uint16_t ocr1b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setTcntN</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a918184a397c0bfba398dd90cba89d59b</anchor>
      <arglist>(uint16_t tcnt1)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOVFI</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>ab15bd577d3bedd84b8ab0e609abfd0f0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIA</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a83ace848e71ed2bf19559db3e43efed0</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIB</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a8e66694c4bfde064a94af8dd068325fb</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOVFI</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>ab4a4cafd7c80f8e370c25004cbd42299</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIA</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>a1e9048a45ee0a3db4431992ecedfd871</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIB</name>
      <anchorfile>classTimer1.html</anchorfile>
      <anchor>af0fc673a0f3eb3b436e7be4e3e093911</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>Timer2</name>
    <filename>classTimer2.html</filename>
    <base>Timer</base>
    <member kind="function">
      <type></type>
      <name>Timer2</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a1931460101a39c10e4cce2ce8d2e243e</anchor>
      <arglist>(Prescale2 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setPrescale</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>af0dddc404e6f4afe57eb753f667159e0</anchor>
      <arglist>(Prescale2 prescale)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setMode</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a086b23d12184a0dbd7a4a46e469519e3</anchor>
      <arglist>(WGMode mode2)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNA</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a4b8f330fff2d45d7dbfa88b58ab18082</anchor>
      <arglist>(ComNX com2a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setComNB</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a8d32fc0d70b4240e8961bcb75205bcfd</anchor>
      <arglist>(ComNX com2b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNA</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a77a56cb788061658518ea551dbbbd594</anchor>
      <arglist>(uint16_t ocr2a)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setOcrNB</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a54b46f545cac4538bbe0f25cd043451a</anchor>
      <arglist>(uint16_t ocr2b)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>setTcntN</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>ab22763d85ff82f007e6af8c4e6b3d51e</anchor>
      <arglist>(uint16_t tcnt2)</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOVFI</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a4b508828fe5e2e65f53decaa3cbb79df</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIA</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a714f912353eb282a092ac5a901e2b88d</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>allowOCIB</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a7b0507b21cc371741f988a0751adb542</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOVFI</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>a8747a0fb8853ae8a7a9cf3ed65881a3c</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIA</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>ab06a37285b7a1e544efdf452f79d2a49</anchor>
      <arglist>()</arglist>
    </member>
    <member kind="function" virtualness="virtual">
      <type>virtual void</type>
      <name>denyOCIB</name>
      <anchorfile>classTimer2.html</anchorfile>
      <anchor>adff2261e544044d9f66c7ece538937e9</anchor>
      <arglist>()</arglist>
    </member>
  </compound>
  <compound kind="class">
    <name>UART</name>
    <filename>classUART.html</filename>
  </compound>
</tagfile>