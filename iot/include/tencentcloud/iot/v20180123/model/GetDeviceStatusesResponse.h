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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATUSESRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATUSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DeviceStatus.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDeviceStatuses返回参数结构体
                */
                class GetDeviceStatusesResponse : public AbstractModel
                {
                public:
                    GetDeviceStatusesResponse();
                    ~GetDeviceStatusesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备状态列表
                     * @return DeviceStatuses 设备状态列表
                     * 
                     */
                    std::vector<DeviceStatus> GetDeviceStatuses() const;

                    /**
                     * 判断参数 DeviceStatuses 是否已赋值
                     * @return DeviceStatuses 是否已赋值
                     * 
                     */
                    bool DeviceStatusesHasBeenSet() const;

                private:

                    /**
                     * 设备状态列表
                     */
                    std::vector<DeviceStatus> m_deviceStatuses;
                    bool m_deviceStatusesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESTATUSESRESPONSE_H_
