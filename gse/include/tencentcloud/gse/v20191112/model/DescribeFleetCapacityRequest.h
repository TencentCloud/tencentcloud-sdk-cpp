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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETCAPACITYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETCAPACITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetCapacity请求参数结构体
                */
                class DescribeFleetCapacityRequest : public AbstractModel
                {
                public:
                    DescribeFleetCapacityRequest();
                    ~DescribeFleetCapacityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队ID列表
                     * @return FleetIds 服务器舰队ID列表
                     * 
                     */
                    std::vector<std::string> GetFleetIds() const;

                    /**
                     * 设置服务器舰队ID列表
                     * @param _fleetIds 服务器舰队ID列表
                     * 
                     */
                    void SetFleetIds(const std::vector<std::string>& _fleetIds);

                    /**
                     * 判断参数 FleetIds 是否已赋值
                     * @return FleetIds 是否已赋值
                     * 
                     */
                    bool FleetIdsHasBeenSet() const;

                    /**
                     * 获取结果返回最大数量，最大值 100
                     * @return Limit 结果返回最大数量，最大值 100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置结果返回最大数量，最大值 100
                     * @param _limit 结果返回最大数量，最大值 100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取返回结果偏移，最小值 0
                     * @return Offset 返回结果偏移，最小值 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回结果偏移，最小值 0
                     * @param _offset 返回结果偏移，最小值 0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队ID列表
                     */
                    std::vector<std::string> m_fleetIds;
                    bool m_fleetIdsHasBeenSet;

                    /**
                     * 结果返回最大数量，最大值 100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回结果偏移，最小值 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETCAPACITYREQUEST_H_
