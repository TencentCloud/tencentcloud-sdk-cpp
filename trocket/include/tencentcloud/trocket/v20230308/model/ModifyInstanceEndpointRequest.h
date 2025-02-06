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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEENDPOINTREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEENDPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyInstanceEndpoint请求参数结构体
                */
                class ModifyInstanceEndpointRequest : public AbstractModel
                {
                public:
                    ModifyInstanceEndpointRequest();
                    ~ModifyInstanceEndpointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取接入点类型，
PUBLIC 公网
                     * @return Type 接入点类型，
PUBLIC 公网
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置接入点类型，
PUBLIC 公网
                     * @param _type 接入点类型，
PUBLIC 公网
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
                     * 获取公网带宽，Mbps为单位
                     * @return Bandwidth 公网带宽，Mbps为单位
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽，Mbps为单位
                     * @param _bandwidth 公网带宽，Mbps为单位
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
                     * 获取公网安全组信息
                     * @return IpRules 公网安全组信息
                     * 
                     */
                    std::vector<IpRule> GetIpRules() const;

                    /**
                     * 设置公网安全组信息
                     * @param _ipRules 公网安全组信息
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
                     * @return BillingFlow 公网是否按流量计费
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 设置公网是否按流量计费
                     * @param _billingFlow 公网是否按流量计费
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
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 接入点类型，
PUBLIC 公网
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 公网带宽，Mbps为单位
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网安全组信息
                     */
                    std::vector<IpRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 公网是否按流量计费
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_MODIFYINSTANCEENDPOINTREQUEST_H_
