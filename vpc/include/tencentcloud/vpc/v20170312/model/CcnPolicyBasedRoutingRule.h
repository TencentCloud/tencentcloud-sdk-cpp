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
                * 云联网策略路由匹配规则
                */
                class CcnPolicyBasedRoutingRule : public AbstractModel
                {
                public:
                    CcnPolicyBasedRoutingRule();
                    ~CcnPolicyBasedRoutingRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略路由下一跳ID</p>
                     * @return PolicyBasedRoutingNextHopId <p>策略路由下一跳ID</p>
                     * 
                     */
                    std::string GetPolicyBasedRoutingNextHopId() const;

                    /**
                     * 设置<p>策略路由下一跳ID</p>
                     * @param _policyBasedRoutingNextHopId <p>策略路由下一跳ID</p>
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
                     * 获取<p>实例类型[VPC,DIRECTCONNECT,VPNGW]</p>
                     * @return InstanceType <p>实例类型[VPC,DIRECTCONNECT,VPNGW]</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型[VPC,DIRECTCONNECT,VPNGW]</p>
                     * @param _instanceType <p>实例类型[VPC,DIRECTCONNECT,VPNGW]</p>
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
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>源地址CIDR</p>
                     * @return SourceCidrBlock <p>源地址CIDR</p>
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置<p>源地址CIDR</p>
                     * @param _sourceCidrBlock <p>源地址CIDR</p>
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
                     * 获取<p>目的地址CIDR</p>
                     * @return DestinationCidrBlock <p>目的地址CIDR</p>
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置<p>目的地址CIDR</p>
                     * @param _destinationCidrBlock <p>目的地址CIDR</p>
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
                     * 获取<p>优先级</p>
                     * @return Priority <p>优先级</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _priority <p>优先级</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>策略路由匹配策略ID</p>
                     * @return PolicyBasedRoutingRuleId <p>策略路由匹配策略ID</p>
                     * 
                     */
                    std::string GetPolicyBasedRoutingRuleId() const;

                    /**
                     * 设置<p>策略路由匹配策略ID</p>
                     * @param _policyBasedRoutingRuleId <p>策略路由匹配策略ID</p>
                     * 
                     */
                    void SetPolicyBasedRoutingRuleId(const std::string& _policyBasedRoutingRuleId);

                    /**
                     * 判断参数 PolicyBasedRoutingRuleId 是否已赋值
                     * @return PolicyBasedRoutingRuleId 是否已赋值
                     * 
                     */
                    bool PolicyBasedRoutingRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>目的端实例ID</p><p>枚举值：</p><ul><li>VPC： 私有网络</li></ul>
                     * @return DestinationInstanceType <p>目的端实例ID</p><p>枚举值：</p><ul><li>VPC： 私有网络</li></ul>
                     * 
                     */
                    std::string GetDestinationInstanceType() const;

                    /**
                     * 设置<p>目的端实例ID</p><p>枚举值：</p><ul><li>VPC： 私有网络</li></ul>
                     * @param _destinationInstanceType <p>目的端实例ID</p><p>枚举值：</p><ul><li>VPC： 私有网络</li></ul>
                     * 
                     */
                    void SetDestinationInstanceType(const std::string& _destinationInstanceType);

                    /**
                     * 判断参数 DestinationInstanceType 是否已赋值
                     * @return DestinationInstanceType 是否已赋值
                     * 
                     */
                    bool DestinationInstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>目的端实例ID</p>
                     * @return DestinationInstanceId <p>目的端实例ID</p>
                     * 
                     */
                    std::string GetDestinationInstanceId() const;

                    /**
                     * 设置<p>目的端实例ID</p>
                     * @param _destinationInstanceId <p>目的端实例ID</p>
                     * 
                     */
                    void SetDestinationInstanceId(const std::string& _destinationInstanceId);

                    /**
                     * 判断参数 DestinationInstanceId 是否已赋值
                     * @return DestinationInstanceId 是否已赋值
                     * 
                     */
                    bool DestinationInstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>策略路由下一跳ID</p>
                     */
                    std::string m_policyBasedRoutingNextHopId;
                    bool m_policyBasedRoutingNextHopIdHasBeenSet;

                    /**
                     * <p>实例类型[VPC,DIRECTCONNECT,VPNGW]</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>源地址CIDR</p>
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * <p>目的地址CIDR</p>
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>策略路由匹配策略ID</p>
                     */
                    std::string m_policyBasedRoutingRuleId;
                    bool m_policyBasedRoutingRuleIdHasBeenSet;

                    /**
                     * <p>目的端实例ID</p><p>枚举值：</p><ul><li>VPC： 私有网络</li></ul>
                     */
                    std::string m_destinationInstanceType;
                    bool m_destinationInstanceTypeHasBeenSet;

                    /**
                     * <p>目的端实例ID</p>
                     */
                    std::string m_destinationInstanceId;
                    bool m_destinationInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNPOLICYBASEDROUTINGRULE_H_
