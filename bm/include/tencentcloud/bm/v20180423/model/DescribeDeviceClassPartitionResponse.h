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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/DeviceClassPartitionInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDeviceClassPartition返回参数结构体
                */
                class DescribeDeviceClassPartitionResponse : public AbstractModel
                {
                public:
                    DescribeDeviceClassPartitionResponse();
                    ~DescribeDeviceClassPartitionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取支持的RAID格式列表
                     * @return DeviceClassPartitionInfoSet 支持的RAID格式列表
                     * 
                     */
                    std::vector<DeviceClassPartitionInfo> GetDeviceClassPartitionInfoSet() const;

                    /**
                     * 判断参数 DeviceClassPartitionInfoSet 是否已赋值
                     * @return DeviceClassPartitionInfoSet 是否已赋值
                     * 
                     */
                    bool DeviceClassPartitionInfoSetHasBeenSet() const;

                private:

                    /**
                     * 支持的RAID格式列表
                     */
                    std::vector<DeviceClassPartitionInfo> m_deviceClassPartitionInfoSet;
                    bool m_deviceClassPartitionInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONRESPONSE_H_
