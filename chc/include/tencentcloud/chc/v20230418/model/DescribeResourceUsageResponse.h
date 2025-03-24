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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeResourceUsage返回参数结构体
                */
                class DescribeResourceUsageResponse : public AbstractModel
                {
                public:
                    DescribeResourceUsageResponse();
                    ~DescribeResourceUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取托管服务器数量
                     * @return HostingServerCount 托管服务器数量
                     * 
                     */
                    uint64_t GetHostingServerCount() const;

                    /**
                     * 判断参数 HostingServerCount 是否已赋值
                     * @return HostingServerCount 是否已赋值
                     * 
                     */
                    bool HostingServerCountHasBeenSet() const;

                    /**
                     * 获取租用服务器数量
                     * @return RentServerCount 租用服务器数量
                     * 
                     */
                    uint64_t GetRentServerCount() const;

                    /**
                     * 判断参数 RentServerCount 是否已赋值
                     * @return RentServerCount 是否已赋值
                     * 
                     */
                    bool RentServerCountHasBeenSet() const;

                    /**
                     * 获取网络设备数量
                     * @return NetDeviceCount 网络设备数量
                     * 
                     */
                    uint64_t GetNetDeviceCount() const;

                    /**
                     * 判断参数 NetDeviceCount 是否已赋值
                     * @return NetDeviceCount 是否已赋值
                     * 
                     */
                    bool NetDeviceCountHasBeenSet() const;

                    /**
                     * 获取机架总数
                     * @return RackTotalCount 机架总数
                     * 
                     */
                    uint64_t GetRackTotalCount() const;

                    /**
                     * 判断参数 RackTotalCount 是否已赋值
                     * @return RackTotalCount 是否已赋值
                     * 
                     */
                    bool RackTotalCountHasBeenSet() const;

                    /**
                     * 获取开电机架总数
                     * @return RackPowerOnCount 开电机架总数
                     * 
                     */
                    uint64_t GetRackPowerOnCount() const;

                    /**
                     * 判断参数 RackPowerOnCount 是否已赋值
                     * @return RackPowerOnCount 是否已赋值
                     * 
                     */
                    bool RackPowerOnCountHasBeenSet() const;

                    /**
                     * 获取机位使用数量
                     * @return PositionUsedCount 机位使用数量
                     * 
                     */
                    uint64_t GetPositionUsedCount() const;

                    /**
                     * 判断参数 PositionUsedCount 是否已赋值
                     * @return PositionUsedCount 是否已赋值
                     * 
                     */
                    bool PositionUsedCountHasBeenSet() const;

                    /**
                     * 获取机位总数
                     * @return PositionTotalCount 机位总数
                     * 
                     */
                    uint64_t GetPositionTotalCount() const;

                    /**
                     * 判断参数 PositionTotalCount 是否已赋值
                     * @return PositionTotalCount 是否已赋值
                     * 
                     */
                    bool PositionTotalCountHasBeenSet() const;

                    /**
                     * 获取机架开电率，保留一位小数
                     * @return RackPowerOnRate 机架开电率，保留一位小数
                     * 
                     */
                    std::string GetRackPowerOnRate() const;

                    /**
                     * 判断参数 RackPowerOnRate 是否已赋值
                     * @return RackPowerOnRate 是否已赋值
                     * 
                     */
                    bool RackPowerOnRateHasBeenSet() const;

                    /**
                     * 获取机位使用率，
                     * @return PositionUsedRate 机位使用率，
                     * 
                     */
                    std::string GetPositionUsedRate() const;

                    /**
                     * 判断参数 PositionUsedRate 是否已赋值
                     * @return PositionUsedRate 是否已赋值
                     * 
                     */
                    bool PositionUsedRateHasBeenSet() const;

                private:

                    /**
                     * 托管服务器数量
                     */
                    uint64_t m_hostingServerCount;
                    bool m_hostingServerCountHasBeenSet;

                    /**
                     * 租用服务器数量
                     */
                    uint64_t m_rentServerCount;
                    bool m_rentServerCountHasBeenSet;

                    /**
                     * 网络设备数量
                     */
                    uint64_t m_netDeviceCount;
                    bool m_netDeviceCountHasBeenSet;

                    /**
                     * 机架总数
                     */
                    uint64_t m_rackTotalCount;
                    bool m_rackTotalCountHasBeenSet;

                    /**
                     * 开电机架总数
                     */
                    uint64_t m_rackPowerOnCount;
                    bool m_rackPowerOnCountHasBeenSet;

                    /**
                     * 机位使用数量
                     */
                    uint64_t m_positionUsedCount;
                    bool m_positionUsedCountHasBeenSet;

                    /**
                     * 机位总数
                     */
                    uint64_t m_positionTotalCount;
                    bool m_positionTotalCountHasBeenSet;

                    /**
                     * 机架开电率，保留一位小数
                     */
                    std::string m_rackPowerOnRate;
                    bool m_rackPowerOnRateHasBeenSet;

                    /**
                     * 机位使用率，
                     */
                    std::string m_positionUsedRate;
                    bool m_positionUsedRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERESOURCEUSAGERESPONSE_H_
