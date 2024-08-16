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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * SetRocketMQPublicAccessPoint请求参数结构体
                */
                class SetRocketMQPublicAccessPointRequest : public AbstractModel
                {
                public:
                    SetRocketMQPublicAccessPointRequest();
                    ~SetRocketMQPublicAccessPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID，当前只支持专享集群
                     * @return InstanceId 集群ID，当前只支持专享集群
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID，当前只支持专享集群
                     * @param _instanceId 集群ID，当前只支持专享集群
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
                     * 获取开启或关闭访问
                     * @return Enabled 开启或关闭访问
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置开启或关闭访问
                     * @param _enabled 开启或关闭访问
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取带宽大小，开启或者调整公网时必须指定，Mbps为单位
                     * @return Bandwidth 带宽大小，开启或者调整公网时必须指定，Mbps为单位
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置带宽大小，开启或者调整公网时必须指定，Mbps为单位
                     * @param _bandwidth 带宽大小，开启或者调整公网时必须指定，Mbps为单位
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取付费模式，开启公网时必须指定，0为按小时计费，1为包年包月，当前只支持按小时计费
                     * @return PayMode 付费模式，开启公网时必须指定，0为按小时计费，1为包年包月，当前只支持按小时计费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置付费模式，开启公网时必须指定，0为按小时计费，1为包年包月，当前只支持按小时计费
                     * @param _payMode 付费模式，开启公网时必须指定，0为按小时计费，1为包年包月，当前只支持按小时计费
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取公网访问安全规则列表，Enabled为true时必须传入
                     * @return Rules 公网访问安全规则列表，Enabled为true时必须传入
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 设置公网访问安全规则列表，Enabled为true时必须传入
                     * @param _rules 公网访问安全规则列表，Enabled为true时必须传入
                     * 
                     */
                    void SetRules(const std::vector<PublicAccessRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

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
                     * 集群ID，当前只支持专享集群
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开启或关闭访问
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 带宽大小，开启或者调整公网时必须指定，Mbps为单位
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 付费模式，开启公网时必须指定，0为按小时计费，1为包年包月，当前只支持按小时计费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 公网访问安全规则列表，Enabled为true时必须传入
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

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

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_SETROCKETMQPUBLICACCESSPOINTREQUEST_H_
