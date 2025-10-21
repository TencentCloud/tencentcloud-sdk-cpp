/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TTS配置信息。
                */
                class TalkTTSConfigInfo : public AbstractModel
                {
                public:
                    TalkTTSConfigInfo();
                    ~TalkTTSConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的LLM类型，支持tencent-腾讯；azure-亚马逊；volcengine-火山引擎；elevenlabs-ELEVENLABS；minimax-MINIMAX；cartesia-CARTESIA；aliyun-阿里；系统默认-tencent。
                     * @return TTSType 支持的LLM类型，支持tencent-腾讯；azure-亚马逊；volcengine-火山引擎；elevenlabs-ELEVENLABS；minimax-MINIMAX；cartesia-CARTESIA；aliyun-阿里；系统默认-tencent。
                     * 
                     */
                    std::string GetTTSType() const;

                    /**
                     * 设置支持的LLM类型，支持tencent-腾讯；azure-亚马逊；volcengine-火山引擎；elevenlabs-ELEVENLABS；minimax-MINIMAX；cartesia-CARTESIA；aliyun-阿里；系统默认-tencent。
                     * @param _tTSType 支持的LLM类型，支持tencent-腾讯；azure-亚马逊；volcengine-火山引擎；elevenlabs-ELEVENLABS；minimax-MINIMAX；cartesia-CARTESIA；aliyun-阿里；系统默认-tencent。
                     * 
                     */
                    void SetTTSType(const std::string& _tTSType);

                    /**
                     * 判断参数 TTSType 是否已赋值
                     * @return TTSType 是否已赋值
                     * 
                     */
                    bool TTSTypeHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return Enabled 是否开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启
                     * @param _enabled 是否开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取配置信息JSON字符串，根据`TTSType`进行不同的值匹配。例如`TTSType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"VoiceType\":10001}`

## tencent
```
{
   "AppId": 100203,
   "SecretId": "XXXX",
   "SecretKey": "XXXXX",
  "VoiceType":123456
}
```

## azure
```
{
   "SubscriptionKey": 100203,
   "Region": "ch-zn",
   "VoiceName": "XXXXX",
  "Language":"zh"
}
```
## elevenlabs
```
{
   "ModelId": 100203,
   "VoiceId": "ch-zn",
   "ApiKey": "XXXXX"
}
```
## minimax
```
{  
  "Model":"xxxx",
   "ApiUrl": "346w34",
   "ApiKey": "xxx",
   "GroupId": "ion",
  "VoiceType":"xioawei"
}
```
## cartesia
```
{  
  "Model":"xxxx",
   "ApiKey": "xxx",
  "VoiceId":"xioawei"
}
```
## aliyun
```
{
   "VoiceType": 100203,
   "RegionId": "XXXX",
   "ApiKey": "XXXXX"
}
```
## volcengine
```
{
   "AppId": "346w34",
   "AccessToken": "xxx",
   "ResourceId": "volc.bigasr.sauc.duration",
  "VoiceType":"xioawei"
}
```

                     * @return Config 配置信息JSON字符串，根据`TTSType`进行不同的值匹配。例如`TTSType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"VoiceType\":10001}`

## tencent
```
{
   "AppId": 100203,
   "SecretId": "XXXX",
   "SecretKey": "XXXXX",
  "VoiceType":123456
}
```

## azure
```
{
   "SubscriptionKey": 100203,
   "Region": "ch-zn",
   "VoiceName": "XXXXX",
  "Language":"zh"
}
```
## elevenlabs
```
{
   "ModelId": 100203,
   "VoiceId": "ch-zn",
   "ApiKey": "XXXXX"
}
```
## minimax
```
{  
  "Model":"xxxx",
   "ApiUrl": "346w34",
   "ApiKey": "xxx",
   "GroupId": "ion",
  "VoiceType":"xioawei"
}
```
## cartesia
```
{  
  "Model":"xxxx",
   "ApiKey": "xxx",
  "VoiceId":"xioawei"
}
```
## aliyun
```
{
   "VoiceType": 100203,
   "RegionId": "XXXX",
   "ApiKey": "XXXXX"
}
```
## volcengine
```
{
   "AppId": "346w34",
   "AccessToken": "xxx",
   "ResourceId": "volc.bigasr.sauc.duration",
  "VoiceType":"xioawei"
}
```

                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置信息JSON字符串，根据`TTSType`进行不同的值匹配。例如`TTSType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"VoiceType\":10001}`

## tencent
```
{
   "AppId": 100203,
   "SecretId": "XXXX",
   "SecretKey": "XXXXX",
  "VoiceType":123456
}
```

## azure
```
{
   "SubscriptionKey": 100203,
   "Region": "ch-zn",
   "VoiceName": "XXXXX",
  "Language":"zh"
}
```
## elevenlabs
```
{
   "ModelId": 100203,
   "VoiceId": "ch-zn",
   "ApiKey": "XXXXX"
}
```
## minimax
```
{  
  "Model":"xxxx",
   "ApiUrl": "346w34",
   "ApiKey": "xxx",
   "GroupId": "ion",
  "VoiceType":"xioawei"
}
```
## cartesia
```
{  
  "Model":"xxxx",
   "ApiKey": "xxx",
  "VoiceId":"xioawei"
}
```
## aliyun
```
{
   "VoiceType": 100203,
   "RegionId": "XXXX",
   "ApiKey": "XXXXX"
}
```
## volcengine
```
{
   "AppId": "346w34",
   "AccessToken": "xxx",
   "ResourceId": "volc.bigasr.sauc.duration",
  "VoiceType":"xioawei"
}
```

                     * @param _config 配置信息JSON字符串，根据`TTSType`进行不同的值匹配。例如`TTSType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"VoiceType\":10001}`

## tencent
```
{
   "AppId": 100203,
   "SecretId": "XXXX",
   "SecretKey": "XXXXX",
  "VoiceType":123456
}
```

## azure
```
{
   "SubscriptionKey": 100203,
   "Region": "ch-zn",
   "VoiceName": "XXXXX",
  "Language":"zh"
}
```
## elevenlabs
```
{
   "ModelId": 100203,
   "VoiceId": "ch-zn",
   "ApiKey": "XXXXX"
}
```
## minimax
```
{  
  "Model":"xxxx",
   "ApiUrl": "346w34",
   "ApiKey": "xxx",
   "GroupId": "ion",
  "VoiceType":"xioawei"
}
```
## cartesia
```
{  
  "Model":"xxxx",
   "ApiKey": "xxx",
  "VoiceId":"xioawei"
}
```
## aliyun
```
{
   "VoiceType": 100203,
   "RegionId": "XXXX",
   "ApiKey": "XXXXX"
}
```
## volcengine
```
{
   "AppId": "346w34",
   "AccessToken": "xxx",
   "ResourceId": "volc.bigasr.sauc.duration",
  "VoiceType":"xioawei"
}
```

                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取温度
                     * @return Speed 温度
                     * 
                     */
                    double GetSpeed() const;

                    /**
                     * 设置温度
                     * @param _speed 温度
                     * 
                     */
                    void SetSpeed(const double& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取最大token数
                     * @return Volume 最大token数
                     * 
                     */
                    double GetVolume() const;

                    /**
                     * 设置最大token数
                     * @param _volume 最大token数
                     * 
                     */
                    void SetVolume(const double& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取PITCH
                     * @return Pitch PITCH
                     * 
                     */
                    double GetPitch() const;

                    /**
                     * 设置PITCH
                     * @param _pitch PITCH
                     * 
                     */
                    void SetPitch(const double& _pitch);

                    /**
                     * 判断参数 Pitch 是否已赋值
                     * @return Pitch 是否已赋值
                     * 
                     */
                    bool PitchHasBeenSet() const;

                private:

                    /**
                     * 支持的LLM类型，支持tencent-腾讯；azure-亚马逊；volcengine-火山引擎；elevenlabs-ELEVENLABS；minimax-MINIMAX；cartesia-CARTESIA；aliyun-阿里；系统默认-tencent。
                     */
                    std::string m_tTSType;
                    bool m_tTSTypeHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 配置信息JSON字符串，根据`TTSType`进行不同的值匹配。例如`TTSType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"VoiceType\":10001}`

## tencent
```
{
   "AppId": 100203,
   "SecretId": "XXXX",
   "SecretKey": "XXXXX",
  "VoiceType":123456
}
```

## azure
```
{
   "SubscriptionKey": 100203,
   "Region": "ch-zn",
   "VoiceName": "XXXXX",
  "Language":"zh"
}
```
## elevenlabs
```
{
   "ModelId": 100203,
   "VoiceId": "ch-zn",
   "ApiKey": "XXXXX"
}
```
## minimax
```
{  
  "Model":"xxxx",
   "ApiUrl": "346w34",
   "ApiKey": "xxx",
   "GroupId": "ion",
  "VoiceType":"xioawei"
}
```
## cartesia
```
{  
  "Model":"xxxx",
   "ApiKey": "xxx",
  "VoiceId":"xioawei"
}
```
## aliyun
```
{
   "VoiceType": 100203,
   "RegionId": "XXXX",
   "ApiKey": "XXXXX"
}
```
## volcengine
```
{
   "AppId": "346w34",
   "AccessToken": "xxx",
   "ResourceId": "volc.bigasr.sauc.duration",
  "VoiceType":"xioawei"
}
```

                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 温度
                     */
                    double m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 最大token数
                     */
                    double m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * PITCH
                     */
                    double m_pitch;
                    bool m_pitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKTTSCONFIGINFO_H_
