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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPCHARGEREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPCHARGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * ModifyEipCharge请求参数结构体
                */
                class ModifyEipChargeRequest : public AbstractModel
                {
                public:
                    ModifyEipChargeRequest();
                    ~ModifyEipChargeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * @return PayMode EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * @param _payMode EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Eip实例ID列表
                     * @return EipIds Eip实例ID列表
                     * 
                     */
                    std::vector<std::string> GetEipIds() const;

                    /**
                     * 设置Eip实例ID列表
                     * @param _eipIds Eip实例ID列表
                     * 
                     */
                    void SetEipIds(const std::vector<std::string>& _eipIds);

                    /**
                     * 判断参数 EipIds 是否已赋值
                     * @return EipIds 是否已赋值
                     * 
                     */
                    bool EipIdsHasBeenSet() const;

                    /**
                     * 获取带宽设定值（只在带宽计费时生效）
                     * @return Bandwidth 带宽设定值（只在带宽计费时生效）
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置带宽设定值（只在带宽计费时生效）
                     * @param _bandwidth 带宽设定值（只在带宽计费时生效）
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                private:

                    /**
                     * EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Eip实例ID列表
                     */
                    std::vector<std::string> m_eipIds;
                    bool m_eipIdsHasBeenSet;

                    /**
                     * 带宽设定值（只在带宽计费时生效）
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_MODIFYEIPCHARGEREQUEST_H_
