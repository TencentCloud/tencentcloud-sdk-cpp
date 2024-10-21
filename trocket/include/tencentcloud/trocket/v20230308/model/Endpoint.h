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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/IpRule.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 接入点信息
                */
                class Endpoint : public AbstractModel
                {
                public:
                    Endpoint();
                    ~Endpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入点类型，枚举值如下
VPC: VPC;
PUBLIC: 公网;
INTERNAL: 支撑网;
                     * @return Type 接入点类型，枚举值如下
VPC: VPC;
PUBLIC: 公网;
INTERNAL: 支撑网;
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置接入点类型，枚举值如下
VPC: VPC;
PUBLIC: 公网;
INTERNAL: 支撑网;
                     * @param _type 接入点类型，枚举值如下
VPC: VPC;
PUBLIC: 公网;
INTERNAL: 支撑网;
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态，
OPEN 开启，
CLOSE 关闭，
PROCESSING 操作中，
                     * @return Status 状态，
OPEN 开启，
CLOSE 关闭，
PROCESSING 操作中，
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，
OPEN 开启，
CLOSE 关闭，
PROCESSING 操作中，
                     * @param _status 状态，
OPEN 开启，
CLOSE 关闭，
PROCESSING 操作中，
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取付费类型，仅公网
PREPAID 包年包月
POSTPAID 按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 付费类型，仅公网
PREPAID 包年包月
POSTPAID 按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费类型，仅公网
PREPAID 包年包月
POSTPAID 按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode 付费类型，仅公网
PREPAID 包年包月
POSTPAID 按量付费
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndpointUrl 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpointUrl() const;

                    /**
                     * 设置接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpointUrl 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpointUrl(const std::string& _endpointUrl);

                    /**
                     * 判断参数 EndpointUrl 是否已赋值
                     * @return EndpointUrl 是否已赋值
                     * 
                     */
                    bool EndpointUrlHasBeenSet() const;

                    /**
                     * 获取VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取公网带宽，Mbps为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 公网带宽，Mbps为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽，Mbps为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bandwidth 公网带宽，Mbps为单位
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取公网放通规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpRules 公网放通规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置公网放通规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipRules 公网放通规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpRules(const std::vector<IpRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingFlow 公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingFlow 公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingFlow(const bool& _billingFlow);

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                private:

                    /**
                     * 接入点类型，枚举值如下
VPC: VPC;
PUBLIC: 公网;
INTERNAL: 支撑网;
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态，
OPEN 开启，
CLOSE 关闭，
PROCESSING 操作中，
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 付费类型，仅公网
PREPAID 包年包月
POSTPAID 按量付费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpointUrl;
                    bool m_endpointUrlHasBeenSet;

                    /**
                     * VPC ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 公网带宽，Mbps为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网放通规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_ENDPOINT_H_
