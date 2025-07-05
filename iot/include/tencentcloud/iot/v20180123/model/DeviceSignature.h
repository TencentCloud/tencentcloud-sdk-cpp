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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESIGNATURE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESIGNATURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 设备签名
                */
                class DeviceSignature : public AbstractModel
                {
                public:
                    DeviceSignature();
                    ~DeviceSignature() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备签名
                     * @return DeviceSignature 设备签名
                     * 
                     */
                    std::string GetDeviceSignature() const;

                    /**
                     * 设置设备签名
                     * @param _deviceSignature 设备签名
                     * 
                     */
                    void SetDeviceSignature(const std::string& _deviceSignature);

                    /**
                     * 判断参数 DeviceSignature 是否已赋值
                     * @return DeviceSignature 是否已赋值
                     * 
                     */
                    bool DeviceSignatureHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备签名
                     */
                    std::string m_deviceSignature;
                    bool m_deviceSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_DEVICESIGNATURE_H_
