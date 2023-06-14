/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEFINGERPRINTINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEFINGERPRINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 设备指纹信息	
                */
                class DeviceFingerprintInfo : public AbstractModel
                {
                public:
                    DeviceFingerprintInfo();
                    ~DeviceFingerprintInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备指纹Token
                     * @return DeviceToken 设备指纹Token
                     * 
                     */
                    std::string GetDeviceToken() const;

                    /**
                     * 设置设备指纹Token
                     * @param _deviceToken 设备指纹Token
                     * 
                     */
                    void SetDeviceToken(const std::string& _deviceToken);

                    /**
                     * 判断参数 DeviceToken 是否已赋值
                     * @return DeviceToken 是否已赋值
                     * 
                     */
                    bool DeviceTokenHasBeenSet() const;

                    /**
                     * 获取设备指纹的客户端SDK对应渠道
                     * @return SdkChannel 设备指纹的客户端SDK对应渠道
                     * 
                     */
                    std::string GetSdkChannel() const;

                    /**
                     * 设置设备指纹的客户端SDK对应渠道
                     * @param _sdkChannel 设备指纹的客户端SDK对应渠道
                     * 
                     */
                    void SetSdkChannel(const std::string& _sdkChannel);

                    /**
                     * 判断参数 SdkChannel 是否已赋值
                     * @return SdkChannel 是否已赋值
                     * 
                     */
                    bool SdkChannelHasBeenSet() const;

                private:

                    /**
                     * 设备指纹Token
                     */
                    std::string m_deviceToken;
                    bool m_deviceTokenHasBeenSet;

                    /**
                     * 设备指纹的客户端SDK对应渠道
                     */
                    std::string m_sdkChannel;
                    bool m_sdkChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_DEVICEFINGERPRINTINFO_H_
