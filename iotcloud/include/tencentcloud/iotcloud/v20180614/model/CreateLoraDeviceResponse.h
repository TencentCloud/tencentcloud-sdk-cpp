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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICERESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateLoraDevice返回参数结构体
                */
                class CreateLoraDeviceResponse : public AbstractModel
                {
                public:
                    CreateLoraDeviceResponse();
                    ~CreateLoraDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取LoRa应用UUID
                     * @return AppEui LoRa应用UUID
                     * 
                     */
                    std::string GetAppEui() const;

                    /**
                     * 判断参数 AppEui 是否已赋值
                     * @return AppEui 是否已赋值
                     * 
                     */
                    bool AppEuiHasBeenSet() const;

                    /**
                     * 获取LoRa设备UUID
                     * @return DeviceEui LoRa设备UUID
                     * 
                     */
                    std::string GetDeviceEui() const;

                    /**
                     * 判断参数 DeviceEui 是否已赋值
                     * @return DeviceEui 是否已赋值
                     * 
                     */
                    bool DeviceEuiHasBeenSet() const;

                    /**
                     * 获取设备类型,目前支持A、B、C三种
                     * @return ClassType 设备类型,目前支持A、B、C三种
                     * 
                     */
                    std::string GetClassType() const;

                    /**
                     * 判断参数 ClassType 是否已赋值
                     * @return ClassType 是否已赋值
                     * 
                     */
                    bool ClassTypeHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * LoRa应用UUID
                     */
                    std::string m_appEui;
                    bool m_appEuiHasBeenSet;

                    /**
                     * LoRa设备UUID
                     */
                    std::string m_deviceEui;
                    bool m_deviceEuiHasBeenSet;

                    /**
                     * 设备类型,目前支持A、B、C三种
                     */
                    std::string m_classType;
                    bool m_classTypeHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATELORADEVICERESPONSE_H_
