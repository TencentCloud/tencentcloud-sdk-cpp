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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * DescribeCrossBorderSettlement请求参数结构体
                */
                class DescribeCrossBorderSettlementRequest : public AbstractModel
                {
                public:
                    DescribeCrossBorderSettlementRequest();
                    ~DescribeCrossBorderSettlementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取全球加速实例ID。
                     * @return GlobalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置全球加速实例ID。
                     * @param _globalAcceleratorId 全球加速实例ID。
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取加速地域。
                     * @return AccelerateRegion 加速地域。
                     * 
                     */
                    std::string GetAccelerateRegion() const;

                    /**
                     * 设置加速地域。
                     * @param _accelerateRegion 加速地域。
                     * 
                     */
                    void SetAccelerateRegion(const std::string& _accelerateRegion);

                    /**
                     * 判断参数 AccelerateRegion 是否已赋值
                     * @return AccelerateRegion 是否已赋值
                     * 
                     */
                    bool AccelerateRegionHasBeenSet() const;

                    /**
                     * 获取终端节点组地域。
                     * @return EndpointGroupRegion 终端节点组地域。
                     * 
                     */
                    std::string GetEndpointGroupRegion() const;

                    /**
                     * 设置终端节点组地域。
                     * @param _endpointGroupRegion 终端节点组地域。
                     * 
                     */
                    void SetEndpointGroupRegion(const std::string& _endpointGroupRegion);

                    /**
                     * 判断参数 EndpointGroupRegion 是否已赋值
                     * @return EndpointGroupRegion 是否已赋值
                     * 
                     */
                    bool EndpointGroupRegionHasBeenSet() const;

                    /**
                     * 获取账单年月时间。
                     * @return SettlementMonth 账单年月时间。
                     * 
                     */
                    uint64_t GetSettlementMonth() const;

                    /**
                     * 设置账单年月时间。
                     * @param _settlementMonth 账单年月时间。
                     * 
                     */
                    void SetSettlementMonth(const uint64_t& _settlementMonth);

                    /**
                     * 判断参数 SettlementMonth 是否已赋值
                     * @return SettlementMonth 是否已赋值
                     * 
                     */
                    bool SettlementMonthHasBeenSet() const;

                private:

                    /**
                     * 全球加速实例ID。
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * 加速地域。
                     */
                    std::string m_accelerateRegion;
                    bool m_accelerateRegionHasBeenSet;

                    /**
                     * 终端节点组地域。
                     */
                    std::string m_endpointGroupRegion;
                    bool m_endpointGroupRegionHasBeenSet;

                    /**
                     * 账单年月时间。
                     */
                    uint64_t m_settlementMonth;
                    bool m_settlementMonthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_DESCRIBECROSSBORDERSETTLEMENTREQUEST_H_
