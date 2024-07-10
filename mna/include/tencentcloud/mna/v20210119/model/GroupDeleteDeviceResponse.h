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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GroupDeleteDevice返回参数结构体
                */
                class GroupDeleteDeviceResponse : public AbstractModel
                {
                public:
                    GroupDeleteDeviceResponse();
                    ~GroupDeleteDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分组中的设备数量
                     * @return DeviceNum 分组中的设备数量
                     * 
                     */
                    int64_t GetDeviceNum() const;

                    /**
                     * 判断参数 DeviceNum 是否已赋值
                     * @return DeviceNum 是否已赋值
                     * 
                     */
                    bool DeviceNumHasBeenSet() const;

                private:

                    /**
                     * 分组中的设备数量
                     */
                    int64_t m_deviceNum;
                    bool m_deviceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GROUPDELETEDEVICERESPONSE_H_
