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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/DeviceDetails.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetDevice返回参数结构体
                */
                class GetDeviceResponse : public AbstractModel
                {
                public:
                    GetDeviceResponse();
                    ~GetDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备详细信息
                     * @return DeviceDetails 设备详细信息
                     * 
                     */
                    DeviceDetails GetDeviceDetails() const;

                    /**
                     * 判断参数 DeviceDetails 是否已赋值
                     * @return DeviceDetails 是否已赋值
                     * 
                     */
                    bool DeviceDetailsHasBeenSet() const;

                private:

                    /**
                     * 设备详细信息
                     */
                    DeviceDetails m_deviceDetails;
                    bool m_deviceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETDEVICERESPONSE_H_
