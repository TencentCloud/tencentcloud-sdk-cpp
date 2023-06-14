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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeDeviceGroup请求参数结构体
                */
                class DescribeDeviceGroupRequest : public AbstractModel
                {
                public:
                    DescribeDeviceGroupRequest();
                    ~DescribeDeviceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识列表
                     * @return DeviceIds 设备唯一标识列表
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置设备唯一标识列表
                     * @param _deviceIds 设备唯一标识列表
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识列表
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPREQUEST_H_
