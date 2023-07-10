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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayCanaryRuleCondition.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayBalancedService.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 灰度规则
                */
                class CloudNativeAPIGatewayCanaryRule : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayCanaryRule();
                    ~CloudNativeAPIGatewayCanaryRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取是否启用规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否启用规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否启用规则
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取参数匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConditionList 参数匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> GetConditionList() const;

                    /**
                     * 设置参数匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conditionList 参数匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConditionList(const std::vector<CloudNativeAPIGatewayCanaryRuleCondition>& _conditionList);

                    /**
                     * 判断参数 ConditionList 是否已赋值
                     * @return ConditionList 是否已赋值
                     * 
                     */
                    bool ConditionListHasBeenSet() const;

                    /**
                     * 获取服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BalancedServiceList 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> GetBalancedServiceList() const;

                    /**
                     * 设置服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _balancedServiceList 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBalancedServiceList(const std::vector<CloudNativeAPIGatewayBalancedService>& _balancedServiceList);

                    /**
                     * 判断参数 BalancedServiceList 是否已赋值
                     * @return BalancedServiceList 是否已赋值
                     * 
                     */
                    bool BalancedServiceListHasBeenSet() const;

                    /**
                     * 获取归属服务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 归属服务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置归属服务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 归属服务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取归属服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 归属服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置归属服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 归属服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                private:

                    /**
                     * 优先级，值范围为 0 到 100；值越大，优先级越高；不同规则间优先级不可重复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 是否启用规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 参数匹配条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudNativeAPIGatewayCanaryRuleCondition> m_conditionList;
                    bool m_conditionListHasBeenSet;

                    /**
                     * 服务的流量百分比配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudNativeAPIGatewayBalancedService> m_balancedServiceList;
                    bool m_balancedServiceListHasBeenSet;

                    /**
                     * 归属服务 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 归属服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYCANARYRULE_H_
