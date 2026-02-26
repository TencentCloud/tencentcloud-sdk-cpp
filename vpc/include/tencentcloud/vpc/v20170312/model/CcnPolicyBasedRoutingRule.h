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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 查询云联网策略路由匹配规则
                */
                class CcnPolicyBasedRoutingRule : public AbstractModel
                {
                public:
                    CcnPolicyBasedRoutingRule();
                    ~CcnPolicyBasedRoutingRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略路由下一跳ID
                     * @return PolicyBasedRoutingNextHopId 策略路由下一跳ID
                     * 
                     */
                    std::string GetPolicyBasedRoutingNextHopId() const;

                    /**
                     * 设置策略路由下一跳ID
                     * @param _policyBasedRoutingNextHopId 策略路由下一跳ID
                     * 
                     */
                    void SetPolicyBasedRoutingNextHopId(const std::string& _policyBasedRoutingNextHopId);

                    /**
                     * 判断参数 PolicyBasedRoutingNextHopId 是否已赋值
                     * @return PolicyBasedRoutingNextHopId 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingNextHopIdHasBeenSet() const;

                    /**
                     * 获取实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * @return InstanceType 实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * @param _instanceType 实例类型[VPC,DIRECTCONNECT,VPNGW]
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取源地址CIDR
                     * @return SourceCidrBlock 源地址CIDR
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置源地址CIDR
                     * @param _sourceCidrBlock 源地址CIDR
                     * 
                     */
                    void SetSourceCidrBlock(const std::string& _sourceCidrBlock);

                    /**
                     * 判断参数 SourceCidrBlock 是否已赋值
                     * @return SourceCidrBlock 是否已赋值
                     * 
                     */
                    bool SourceCidrBlockHasBeenSet() const;

                    /**
                     * 获取目的地址CIDR
                     * @return DestinationCidrBlock 目的地址CIDR
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的地址CIDR
                     * @param _destinationCidrBlock 目的地址CIDR
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取策略路由匹配策略ID
                     * @return PolicyBasedRoutingRuleId 策略路由匹配策略ID
                     * 
                     */
                    std::string GetPolicyBasedRoutingRuleId() const;

                    /**
                     * 设置策略路由匹配策略ID
                     * @param _policyBasedRoutingRuleId 策略路由匹配策略ID
                     * 
                     */
                    void SetPolicyBasedRoutingRuleId(const std::string& _policyBasedRoutingRuleId);

                    /**
                     * 判断参数 PolicyBasedRoutingRuleId 是否已赋值
                     * @return PolicyBasedRoutingRuleId 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingRuleIdHasBeenSet() const;

                private:

                    /**
                     * 策略路由下一跳ID
                     */
                    std::string m_policyBasedRoutingNextHopId;
                    bool m_policyBasedRoutingNextHopIdHasBeenSet;

                    /**
                     * 实例类型[VPC,DIRECTCONNECT,VPNGW]
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源地址CIDR
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * 目的地址CIDR
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 策略路由匹配策略ID
                     */
                    std::string m_policyBasedRoutingRuleId;
                    bool m_policyBasedRoutingRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGRULE_H_
