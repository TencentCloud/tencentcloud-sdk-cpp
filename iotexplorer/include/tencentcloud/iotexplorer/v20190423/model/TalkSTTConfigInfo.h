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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIGINFO_H_

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
                * STT配置信息。
                */
                class TalkSTTConfigInfo : public AbstractModel
                {
                public:
                    TalkSTTConfigInfo();
                    ~TalkSTTConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的STT类型，tencent-腾讯；azure-亚马逊；volcengine-火山引擎；deepgram-Deepgram;系统默认-tencent。
                     * @return STTType 支持的STT类型，tencent-腾讯；azure-亚马逊；volcengine-火山引擎；deepgram-Deepgram;系统默认-tencent。
                     * 
                     */
                    std::string GetSTTType() const;

                    /**
                     * 设置支持的STT类型，tencent-腾讯；azure-亚马逊；volcengine-火山引擎；deepgram-Deepgram;系统默认-tencent。
                     * @param _sTTType 支持的STT类型，tencent-腾讯；azure-亚马逊；volcengine-火山引擎；deepgram-Deepgram;系统默认-tencent。
                     * 
                     */
                    void SetSTTType(const std::string& _sTTType);

                    /**
                     * 判断参数 STTType 是否已赋值
                     * @return STTType 是否已赋值
                     * 
                     */
                    bool STTTypeHasBeenSet() const;

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
                     * 获取配置信息JSON字符串，根据STTType进行不同的值匹配。例如`STTType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"EngineType\":\"16k_zh\"}`

## tencent
```
{
  "AppId": 123456,
  "SecretId": "secretId*****",
  "SecretKey": "SecretKey****",
  "EngineType": "16k_zh"
}
```

## azure
```
{
  "Region": "",
  "EndpointId": "id",
  "Language": "zh-CN",
  "SubscriptionKey": "*****"
}
```
## volcengine
```
{
  "AppId": 123456,
  "AccessToken": "*****",
  "ResourceId": "SecretKey****",
  "ModelName": "16k_zh",
  "Language":""
}
```
## deepgram
```
{
  "Model": "nova-2",
  "Language": "zh",
   "BaseUrl":"http://www.deepgram.com",
  "ApiKey": "SecretKey****"
}
```

                     * @return Config 配置信息JSON字符串，根据STTType进行不同的值匹配。例如`STTType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"EngineType\":\"16k_zh\"}`

## tencent
```
{
  "AppId": 123456,
  "SecretId": "secretId*****",
  "SecretKey": "SecretKey****",
  "EngineType": "16k_zh"
}
```

## azure
```
{
  "Region": "",
  "EndpointId": "id",
  "Language": "zh-CN",
  "SubscriptionKey": "*****"
}
```
## volcengine
```
{
  "AppId": 123456,
  "AccessToken": "*****",
  "ResourceId": "SecretKey****",
  "ModelName": "16k_zh",
  "Language":""
}
```
## deepgram
```
{
  "Model": "nova-2",
  "Language": "zh",
   "BaseUrl":"http://www.deepgram.com",
  "ApiKey": "SecretKey****"
}
```

                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置信息JSON字符串，根据STTType进行不同的值匹配。例如`STTType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"EngineType\":\"16k_zh\"}`

## tencent
```
{
  "AppId": 123456,
  "SecretId": "secretId*****",
  "SecretKey": "SecretKey****",
  "EngineType": "16k_zh"
}
```

## azure
```
{
  "Region": "",
  "EndpointId": "id",
  "Language": "zh-CN",
  "SubscriptionKey": "*****"
}
```
## volcengine
```
{
  "AppId": 123456,
  "AccessToken": "*****",
  "ResourceId": "SecretKey****",
  "ModelName": "16k_zh",
  "Language":""
}
```
## deepgram
```
{
  "Model": "nova-2",
  "Language": "zh",
   "BaseUrl":"http://www.deepgram.com",
  "ApiKey": "SecretKey****"
}
```

                     * @param _config 配置信息JSON字符串，根据STTType进行不同的值匹配。例如`STTType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"EngineType\":\"16k_zh\"}`

## tencent
```
{
  "AppId": 123456,
  "SecretId": "secretId*****",
  "SecretKey": "SecretKey****",
  "EngineType": "16k_zh"
}
```

## azure
```
{
  "Region": "",
  "EndpointId": "id",
  "Language": "zh-CN",
  "SubscriptionKey": "*****"
}
```
## volcengine
```
{
  "AppId": 123456,
  "AccessToken": "*****",
  "ResourceId": "SecretKey****",
  "ModelName": "16k_zh",
  "Language":""
}
```
## deepgram
```
{
  "Model": "nova-2",
  "Language": "zh",
   "BaseUrl":"http://www.deepgram.com",
  "ApiKey": "SecretKey****"
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

                private:

                    /**
                     * 支持的STT类型，tencent-腾讯；azure-亚马逊；volcengine-火山引擎；deepgram-Deepgram;系统默认-tencent。
                     */
                    std::string m_sTTType;
                    bool m_sTTTypeHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 配置信息JSON字符串，根据STTType进行不同的值匹配。例如`STTType`是`tencent`，`Config`值是`{\"AppId\":123456,\"SecretId\":\"secretId*****\",\"SecretKey\":\"SecretKey****\",\"EngineType\":\"16k_zh\"}`

## tencent
```
{
  "AppId": 123456,
  "SecretId": "secretId*****",
  "SecretKey": "SecretKey****",
  "EngineType": "16k_zh"
}
```

## azure
```
{
  "Region": "",
  "EndpointId": "id",
  "Language": "zh-CN",
  "SubscriptionKey": "*****"
}
```
## volcengine
```
{
  "AppId": 123456,
  "AccessToken": "*****",
  "ResourceId": "SecretKey****",
  "ModelName": "16k_zh",
  "Language":""
}
```
## deepgram
```
{
  "Model": "nova-2",
  "Language": "zh",
   "BaseUrl":"http://www.deepgram.com",
  "ApiKey": "SecretKey****"
}
```

                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKSTTCONFIGINFO_H_
