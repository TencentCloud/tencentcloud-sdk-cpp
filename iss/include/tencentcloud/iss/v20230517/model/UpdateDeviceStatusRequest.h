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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_

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
                * UpdateDeviceStatus请求参数结构体
                */
                class UpdateDeviceStatusRequest : public AbstractModel
                {
                public:
                    UpdateDeviceStatusRequest();
                    ~UpdateDeviceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备 ID（从获取设备列表接口ListDevices中获取）
                     * @return DeviceId 设备 ID（从获取设备列表接口ListDevices中获取）
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备 ID（从获取设备列表接口ListDevices中获取）
                     * @param _deviceId 设备 ID（从获取设备列表接口ListDevices中获取）
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取禁用启用状态码（2：启用，3:禁用）
                     * @return Status 禁用启用状态码（2：启用，3:禁用）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置禁用启用状态码（2：启用，3:禁用）
                     * @param _status 禁用启用状态码（2：启用，3:禁用）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设备 ID（从获取设备列表接口ListDevices中获取）
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 禁用启用状态码（2：启用，3:禁用）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_UPDATEDEVICESTATUSREQUEST_H_
