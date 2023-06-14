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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICEDATARESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * GetDeviceData返回参数结构体
                */
                class GetDeviceDataResponse : public AbstractModel
                {
                public:
                    GetDeviceDataResponse();
                    ~GetDeviceDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备数据
                     * @return DeviceData 设备数据
                     * 
                     */
                    std::string GetDeviceData() const;

                    /**
                     * 判断参数 DeviceData 是否已赋值
                     * @return DeviceData 是否已赋值
                     * 
                     */
                    bool DeviceDataHasBeenSet() const;

                private:

                    /**
                     * 设备数据
                     */
                    std::string m_deviceData;
                    bool m_deviceDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICEDATARESPONSE_H_
