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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DeviceEntry.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDevices返回参数结构体
                */
                class GetDevicesResponse : public AbstractModel
                {
                public:
                    GetDevicesResponse();
                    ~GetDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备列表
                     * @return Devices 设备列表
                     * 
                     */
                    std::vector<DeviceEntry> GetDevices() const;

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                    /**
                     * 获取设备总数
                     * @return Total 设备总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 设备列表
                     */
                    std::vector<DeviceEntry> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 设备总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESRESPONSE_H_
