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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_REFRESHDEVICECHANNELREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_REFRESHDEVICECHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * RefreshDeviceChannel请求参数结构体
                */
                class RefreshDeviceChannelRequest : public AbstractModel
                {
                public:
                    RefreshDeviceChannelRequest();
                    ~RefreshDeviceChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备 ID（从获取设备列表ListDevices接口中获取）
                     * @return DeviceId 设备 ID（从获取设备列表ListDevices接口中获取）
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备 ID（从获取设备列表ListDevices接口中获取）
                     * @param _deviceId 设备 ID（从获取设备列表ListDevices接口中获取）
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * 设备 ID（从获取设备列表ListDevices接口中获取）
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_REFRESHDEVICECHANNELREQUEST_H_
