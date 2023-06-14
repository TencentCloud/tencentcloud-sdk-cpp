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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDeviceInventory返回参数结构体
                */
                class DescribeDeviceInventoryResponse : public AbstractModel
                {
                public:
                    DescribeDeviceInventoryResponse();
                    ~DescribeDeviceInventoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取库存设备数量
                     * @return DeviceCount 库存设备数量
                     * 
                     */
                    uint64_t GetDeviceCount() const;

                    /**
                     * 判断参数 DeviceCount 是否已赋值
                     * @return DeviceCount 是否已赋值
                     * 
                     */
                    bool DeviceCountHasBeenSet() const;

                private:

                    /**
                     * 库存设备数量
                     */
                    uint64_t m_deviceCount;
                    bool m_deviceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICEINVENTORYRESPONSE_H_
