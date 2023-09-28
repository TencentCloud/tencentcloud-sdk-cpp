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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCPEERINGCONNECTIONREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCPEERINGCONNECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyVpcPeeringConnection请求参数结构体
                */
                class ModifyVpcPeeringConnectionRequest : public AbstractModel
                {
                public:
                    ModifyVpcPeeringConnectionRequest();
                    ~ModifyVpcPeeringConnectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对等连接ID。
                     * @return PeeringConnectionId 对等连接ID。
                     * 
                     */
                    std::string GetPeeringConnectionId() const;

                    /**
                     * 设置对等连接ID。
                     * @param _peeringConnectionId 对等连接ID。
                     * 
                     */
                    void SetPeeringConnectionId(const std::string& _peeringConnectionId);

                    /**
                     * 判断参数 PeeringConnectionId 是否已赋值
                     * @return PeeringConnectionId 是否已赋值
                     * 
                     */
                    bool PeeringConnectionIdHasBeenSet() const;

                    /**
                     * 获取对等连接名称。
                     * @return PeeringConnectionName 对等连接名称。
                     * 
                     */
                    std::string GetPeeringConnectionName() const;

                    /**
                     * 设置对等连接名称。
                     * @param _peeringConnectionName 对等连接名称。
                     * 
                     */
                    void SetPeeringConnectionName(const std::string& _peeringConnectionName);

                    /**
                     * 判断参数 PeeringConnectionName 是否已赋值
                     * @return PeeringConnectionName 是否已赋值
                     * 
                     */
                    bool PeeringConnectionNameHasBeenSet() const;

                    /**
                     * 获取带宽上限，单位Mbps。
                     * @return Bandwidth 带宽上限，单位Mbps。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽上限，单位Mbps。
                     * @param _bandwidth 带宽上限，单位Mbps。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取计费模式，日峰值POSTPAID_BY_DAY_MAX，月95 POSTPAID_BY_MONTH_95。
                     * @return ChargeType 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95 POSTPAID_BY_MONTH_95。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置计费模式，日峰值POSTPAID_BY_DAY_MAX，月95 POSTPAID_BY_MONTH_95。
                     * @param _chargeType 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95 POSTPAID_BY_MONTH_95。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 对等连接ID。
                     */
                    std::string m_peeringConnectionId;
                    bool m_peeringConnectionIdHasBeenSet;

                    /**
                     * 对等连接名称。
                     */
                    std::string m_peeringConnectionName;
                    bool m_peeringConnectionNameHasBeenSet;

                    /**
                     * 带宽上限，单位Mbps。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 计费模式，日峰值POSTPAID_BY_DAY_MAX，月95 POSTPAID_BY_MONTH_95。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYVPCPEERINGCONNECTIONREQUEST_H_
